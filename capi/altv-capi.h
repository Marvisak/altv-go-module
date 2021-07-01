typedef struct alt_ICore {
    void* vtable;
} alt_ICore;

void Core_LogInfo(alt_ICore* core, const char * str );
int GetSDKVersion();