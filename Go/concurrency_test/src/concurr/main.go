package main

import (
	"concurr/conc"
)

func main() {
	println("hai")
	go conc.IsReady("Coffee", 6)
	go conc.IsReady("Tea", 2)
	println("Over")
}
