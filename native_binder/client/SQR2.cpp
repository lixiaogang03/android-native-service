
// SQR2.cpp

#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>

#include <cutils/log.h>
#include <utils/String16.h>

#include "SQR2.h"

namespace android {

const sp<ISQRS> SQR2::getSQRService() {

    printf("getSQRService\n");

    sp<IServiceManager> sm = defaultServiceManager();

    sp<IBinder> ib = sm->getService(String16("misoo.sqr"));

    ALOGV("SQR2::getSQRService");

    sp<ISQRS> sService = interface_cast<ISQRS>(ib);

    return sService;

}

//--------------------------------------------------------------------

int SQR2::square(int n, const sp<ICallback>& callback) {

    int k = 0;

    const sp<ISQRS> isqrs = getSQRService();

    if (isqrs != 0) {
        k = isqrs->square(n, callback);
    }

    return k;

}

int SQR2::mul(int n, int m) {

    int k = 0;

    const sp<ISQRS> isqrs = getSQRService();

    if (isqrs != 0) {
        k = isqrs->mul(n, m);
    }

    return k;
}

int SQR2::add(int x, int y) {

    int k = 0;

    const sp<ISQRS> isqrs = getSQRService();

    if (isqrs != 0) {
        k = isqrs->add(x, y);
    }

    return k;

}

//----------------------CallBack--------------------

void SQR2::onError(int errorCode, const String16& errorMessage) {

    printf("errorCode: %d\n", errorCode);

    printf("errorMessage: %s\n", String8(errorMessage).string());

    return;

}


}; // namespace android
