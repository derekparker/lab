package main

import (
	"concurr/conc"
)

func main() {
	println("hai")
	conc.IsReady("Coffee", 6)
	conc.IsReady("Tea", 2)
	println("Over")
}
