// Charger service binary stub
#include <android/log.h>
#define LOG_TAG "ChargerHalStub"
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
extern "C" {
    void ABinderProcess_setThreadPoolMaxThreadCount(int);
    void ABinderProcess_startThreadPool();
    void ABinderProcess_joinThreadPool();
}
int main(){
    ALOGI("OPlus Charger HAL stub started (Android 16 compatible)");
    ABinderProcess_setThreadPoolMaxThreadCount(0);
    ABinderProcess_startThreadPool();
    ALOGI("Charger HAL stub running");
    ABinderProcess_joinThreadPool();
    return 0;
}
