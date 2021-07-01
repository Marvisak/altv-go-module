package main

import (
	"syscall"
)

type Module struct {
	dll *syscall.DLL
	altCore uintptr
}

func (m *Module) loadDLL() {
	if m.dll != nil {
		return
	}
	dll, err := syscall.LoadDLL(".\\modules\\go-module\\altv-capi.dll")
	if err != nil {
		panic(err)
	}
	m.dll = dll
}

func (m Module) callFunc(function string, args... interface{}) uintptr {
	proc, _ := m.dll.FindProc(function)
	cArgs := make([]uintptr, 0)
	for _, v := range args {
		cArgs = append(cArgs, TypeToCType(v))
	}
	returnValue, _, _ := proc.Call(cArgs...)
	return returnValue
}

func NewModule() *Module {
	m := &Module{}
	m.loadDLL()

	return m
}


