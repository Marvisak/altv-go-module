#include "cpp-sdk/SDK.h"

extern "C" {
#include "altv-capi.h"
}

void Core_LogInfo(alt_ICore* core, const char * str ) {
    ((alt::ICore *)core)->LogInfo(str);
}

int GetSDKVersion() {
    return alt::ICore::SDK_VERSION;
}