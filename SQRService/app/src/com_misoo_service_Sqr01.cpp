
#include "com_misoo_service_Sqr01.h"
#include <cutils/log.h>
#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>

#include "../../SQRService.h"
#include "../../SQR.h"

using namespace android;

JNIEXPORT jint JNICALL Java_com_misoo_service_Sqr01_execute(JNIEnv *env, jobject thiz, jint x) {

    ALOGE("Java_com_misoo_service_Sqr01_execute... X=%d\n", x);

    SQR* sqrObj = new SQR();

    int num = sqrObj->execute(x);
    return num;
}


