package helpers

import (
	"os"
	"os/exec"
)

func Clear_screen() {
	c := exec.Command("clear")
	c.Stdout = os.Stdout
	c.Run()
}
