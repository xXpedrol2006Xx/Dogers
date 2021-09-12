#include <Windows.h>

#include "Resource.h"
#include "BBRuntimeApp.h"

constexpr const char *ARCHIVE_PASSWORD = "SHaqd5v6tFxIeqsuzq+zXEgr/XKfqr1fTSurIsin4FxLLPF3z66zXR12/SOfpuFZHH74IZSsslEaeawlm6u9WQ==";

int WINAPI wWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, PWSTR /*pCmdLine*/, int /*nCmdShow*/) {
    BBRuntimeApp app;

    return app.run(ARCHIVE_PASSWORD);
}
