
// SQRService.cpp

#include <binder/IServiceManager.h>

#include <cutils/log.h>

#include "SQRService.h"

namespace android {

enum {
        SQUARE = IBinder::FIRST_CALL_TRANSACTION,
};


int SQRService::instantiate() {
    ALOGE("SQRService instantiate");
    //add service to servicemanager
    int r = defaultServiceManager()->addService(String16("misoo.sqr"), new SQRService());
    ALOGE("SQRService r= %d\n", r);
    return r;
}


SQRService::SQRService() {
    ALOGV("SQRService created");
}


SQRService::~SQRService() {
    ALOGV("SQRService destroyed");
}


//Impl BBinder::onTransact
status_t SQRService::onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags) {

    switch(code) {
        case SQUARE:
        {
            int num = data.readInt32();
            reply->writeInt32(num * num);
            ALOGE("onTransact::CREATE_NUM..n=%d\n", num);
            return NO_ERROR;
        }
        break;
        default:
            ALOGE("onTransact::default\n");

        return BBinder::onTransact(code, data, reply, flags);
    }

}


} // namespace android

