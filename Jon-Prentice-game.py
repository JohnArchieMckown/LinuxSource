print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/_____ /
*******************************************************************************
''')
print("Welcome to Treasure Island.")
print("Your mission is to find the treasure.") 

#https://www.draw.io/?lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Treasure%20Island%20Conditional.drawio#Uhttps%3A%2F%2Fdrive.google.com%2Fuc%3Fid%3D1oDe4ehjWZipYRsVfeAx2HyB7LCQ8_Fvi%26export%3Ddownload

#Write your code below this line 👇

choice_1 = input('You find yourself in the middle of the jungle. To the left you see a faint light. To the right is a sign that reads "Treasure this way!" Type Right or Left ')
choice_1_lower = choice_1.lower()

# Check 1
if choice_1_lower == "left":
  choice_2 = input("\nA tiger crosses your path! Do you wait for it to pass or try swim past it in the river?\nType Wait or Swim ")
  choice_2_lower = choice_2.lower()

  # Check 2
  if choice_2_lower == "wait":
  
    
    choice_3 = input("\nYou find yourself in an old pirate's keep. There are 3 doors. Red, blue, and yellow. Which door would you like to go through? \nType Red or Blue or Yellow ")
    choice_3_lower = choice_3.lower()
    
    #Check 3
    if choice_3_lower == "yellow":
      print("\nCongratulations!! You found the Treasure!!! ")

    elif choice_3_lower == "red":
      print("\nEXPLOSION!!!!! Got blown up by a rigged door.\n\nGAME OVER")
    elif choice_3_lower == "blue":
      print('\n "YEARGH HAR HAR!!! It be I! The ghost of The Dreaded Pirate Roberts!!""\n\nYour soul has been sent to Davy Jones Locker.\n\nGAME OVER')
    else:
      print("\nLearn how to type!\n\nGAME OVER")
      






  
  else:
    print("\nGot eated by a river monster. \n\nGAME OVER")


else:
  print("\nThe oldest trick in the book! You done fell in a hole son. \n\nGAME OVER")