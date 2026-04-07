// Stability service binary stub
#include <android/log.h>
#define LOG_TAG "StabilityHalStub"
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
extern "C" {
    void ABinderProcess_setThreadPoolMaxThreadCount(int);
    void ABinderProcess_startThreadPool();
    void ABinderProcess_joinThreadPool();
}
int main(){
    ALOGI("OPlus Stability HAL stub started (Android 16 compatible)");
    ABinderProcess_setThreadPoolMaxThreadCount(0);
    ABinderProcess_startThreadPool();
    ALOGI("Stability HAL stub running");
    ABinderProcess_joinThreadPool();
    return 0;
}
