#include "jni.h"
#include "iostream"

extern "C" {
    JNIEXPORT void JNICALL Java_DataBridge_sendData(JNIEnv* env, jobject obj, jstring data) {
        const char* nativeString = env->GetStringUTFChars(data, 0);
        std::cout << "Received first data from Java: " << nativeString << std::endl;
        env->ReleaseStringUTFChars(data, nativeString);
    }
}