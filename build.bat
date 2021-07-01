@echo off
IF NOT EXIST build\ (
    mkdir build
)
pushd build
gcc -c ..\capi\altv-capi.cpp -std=c++17
g++ -shared -o altv-capi.dll altv-capi.o
go build -o go-module.dll -buildmode c-shared ..
del altv-capi.o
del go-module.h
popd


