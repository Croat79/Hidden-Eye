package helpers

import (
	Colors "HiddenEye/utils"
	"fmt"
)

func Prompt() {
	const Head = `
		 _  _  __  ____  ____  ____  __ _    ____  _  _  ____ 
		/ )( \(  )(    \(    \(  __)(  ( \  (  __)( \/ )(  __)
		) __ ( )(  ) D ( ) D ( ) _) /    /   ) _)  )  /  ) _) 
		\_)(_/(__)(____/(____/(____)\_)__)  (____)(__/  (____)

				   `

	fmt.Println(string(Colors.Red()), Head)

	fmt.Println(Colors.Red(), "\t[", Colors.White(), " * ", Colors.Red(), "]", Colors.White(), "\t  https://github.com/muhammadqazi", Colors.Red(), "\t\t[", Colors.White(), " * ", Colors.Red(), "]")
	fmt.Println(Colors.Red(), "\t[", Colors.White(), " * ", Colors.Red(), "]", Colors.White(), "\t\t  By Muhammad Qazi", Colors.Red(), "\t\t\t[", Colors.White(), " * ", Colors.Red(), "]")

	fmt.Println(Colors.Red(), "\n\n--------------------------------------------------------------------------------------------------")

	fmt.Println(Colors.Red(), "\n\nOperation Mode:")
}
