#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_threekk_crashlytics_plugin_MainActivity_stringFromJni(JNIEnv* env, jobject thiz) {
    std::string hello = "Hello from JNI!";
    return env->NewStringUTF(hello.c_str());
};
