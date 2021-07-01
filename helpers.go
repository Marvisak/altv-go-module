package main

import (
	"C"
	"unsafe"
)

func TypeToCType(arg interface{}) uintptr {
	switch arg.(type) {
	case int:
		return uintptr(C.int(arg.(int)))
	case uint:
		return uintptr(C.uint(arg.(uint)))
	case string:
		return uintptr(unsafe.Pointer(C.CString(arg.(string))))
	case int64:
		return uintptr(C.long(arg.(int64)))
	case uint64:
		return uintptr(C.ulong(arg.(uint64)))
	case float32:
		return uintptr(C.float(arg.(float32)))
	case float64:
		return uintptr(C.double(arg.(float64)))
	default:
		return arg.(uintptr)
	}
}

//func CTypeToType(arg interface{}) {
//	var value interface{}
//	switch arg.(type) {
//	case int:
//		value = C.int(arg.(int))
//	case uint:
//		value = C.uint(arg.(uint))
//	case string:
//		value = C.CString(arg.(string))
//	case int64:
//		value = C.long(arg.(int64))
//	case uint64:
//		value = C.ulong(arg.(uint64))
//	case float32:
//		value = C.float(arg.(float32))
//	case float64:
//		value = C.double(arg.(float64))
//	}
//}