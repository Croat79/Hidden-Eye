package helpers

import (
	Colors "HiddenEye/utils"

	"fmt"
)

func Input_User(start int, end int) int {
	var option int
	_, err := fmt.Scanf("%d", &option)

	if err != nil || (option < start || option > end) {
		fmt.Println(Colors.Red(), "\n\n[!]", Colors.White(), " Invalid Option")
	}

	return option
}
