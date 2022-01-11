package helpers

import (
	"time"

	"github.com/theckman/yacspin"
)

func Loading() {
	cfg := yacspin.Config{
		Frequency:       100 * time.Millisecond,
		CharSet:         yacspin.CharSets[14],
		Suffix:          " Checking ",
		SuffixAutoColon: true,
		Message:         " Connection ",
		StopMessage:     " Done ! ",
		Colors:          []string{"fgRed"},
		StopCharacter:   "✓",
		StopColors:      []string{"fgGreen"},
	}

	spinner, _ := yacspin.New(cfg)
	// handle the error

	spinner.Start()

	// doing some work
	time.Sleep(2 * time.Second)

	spinner.Message(" Agreemnet ")

	// upload...
	time.Sleep(2 * time.Second)

	spinner.Stop()
}
