#include <jni.h>
#include <string>

const char* baocun;

extern "C"
JNIEXPORT jstring JNICALL
Java_com_csp_jnidemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_csp_jnidemo_MainActivity_getBaocun(JNIEnv *env, jobject instance) {

    // TODO

    return env->NewStringUTF(baocun);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_csp_jnidemo_MainActivity_setBaocun(JNIEnv *env, jobject instance, jstring baocun_) {
//    const char *;
    baocun = env->GetStringUTFChars(baocun_, 0);

    // TODO

    env->ReleaseStringUTFChars(baocun_, baocun);
}