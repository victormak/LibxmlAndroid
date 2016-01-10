//
// Created by victor on 16-1-8.
//

#include "com_gdc_libxmlandroid_LibManager.h"

JNIEXPORT jstring JNICALL Java_com_gdc_libxmlandroid_LibManager_test(JNIEnv *env, jobject)
{
    return env->NewStringUTF("test");
}