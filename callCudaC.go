package main

//#include "add.h"
//#cgo LDFLAGS: -L. -laddcuda
import "C"
import "fmt"

func main() {
	fmt.Println(C.wrapper())
	fmt.Println("ack")
}
