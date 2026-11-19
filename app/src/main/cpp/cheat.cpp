#include <jni.h>
#include <android/log.h>

#define LOG_TAG "FortniteCheat"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT jboolean JNICALL
Java_com_example_fortnitecheat_FloatingService_initializeCheat(JNIEnv *env, jobject thiz) {
    LOGI("Cheat inicializado correctamente.");
    return true;
}
