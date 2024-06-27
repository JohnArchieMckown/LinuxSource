package main

import (
	"fmt"
	"os"
//	"strings"
)

func main() {
	fmt.Println("Program Arguments")
	for _, e := range os.Args {
		fmt.Println(e);
	}
	
	fmt.Println()
	fmt.Println("Environment Variables")
	for _, e := range os.Environ() {
//		pair := strings.SplitN(e, "=", 2)
//		fmt.Println(pair[0])
		fmt.Println(e) // Print out each evironment variable and its value
	}
}

