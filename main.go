package main

import "C"

var module *Module

//export altMain
func altMain(core uintptr) bool {
	initModule()
	module.altCore = core
	module.callFunc("Core_LogInfo", module.altCore, "Golang module successfully loaded")
	return true
}

//export GetSDKVersion
func GetSDKVersion() int {
	initModule()
	return int(module.callFunc("GetSDKVersion"))
}

func initModule() {
	if module == nil {
		module = NewModule()
	}
}
func main() {}