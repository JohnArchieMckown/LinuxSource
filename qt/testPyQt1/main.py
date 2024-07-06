# This Python file uses the following encoding: utf-8
import sys

from PySide6.QtWidgets import QApplication, QMainWindow

# Important:
# You need to run the following command to generate the ui_form.py file
#     pyside6-uic form.ui -o ui_form.py, or
#     pyside2-uic form.ui -o ui_form.py
from ui_form import Ui_MainWindow

from PySide6.QtWidgets import QMessageBox

class MainWindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.ui.actionAboutQt.triggered.connect(self.doAboutQt)
        self.ui.actionAbout.triggered.connect(self.doAbout)

    def doAbout(self):
        aboutText =  "Version:\t0.1\n"
        aboutText += "Author:\tJohn Archie McKown\n"
        aboutText += "Date:\t2024-07-02"

#        QMessageBox.information(self,"About",aboutText)
        msgBox=QMessageBox(self)
        msgBox.setText(aboutText)
        msgBox.setStandardButtons(QMessageBox.Ok)
        msgBox.exec()

    def doAboutQt(self):
        QApplication.aboutQt()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    widget = MainWindow()
    widget.show()
    sys.exit(app.exec())
