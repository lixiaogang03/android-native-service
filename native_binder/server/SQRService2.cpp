
// SQRService2.cpp

#include <stdio.h>

#include <utils/String16.h>
#include <binder/IServiceManager.h>

#include <cutils/log.h>

#include "SQRService2.h"

namespace android {

int SQRService2::instantiate() {

    printf("SQRService2 instantiate\n");

    ALOGE("SQRService2 instantiate\n");

    //add service to servicemanager
    int r = defaultServiceManager()->addService(String16("misoo.sqr"), new SQRService2());

    ALOGE("SQRService2 r= %d\n", r);

    return r;
}

int SQRService2::square(const int& n, const sp<ICallback>& callback) {
    printf("SQRService2::square(%d)\n", n);

    int errorCode = -1;

    String16 errorMessage = String16("Permission deny");

    printf("SQRService2::callback->onError\n");
    callback->onError(errorCode, errorMessage);

    return n * n;
}

int SQRService2::mul(const int& n, const int& m) {
    printf("SQRService2::mul(%d, %d)\n", n, m);
    return n * m;
}

int SQRService2::add(const int& x, const int& y) {
    printf("SQRService2::add(%d, %d)\n", x, y);
    return x + y;
}

}; //namespace android
