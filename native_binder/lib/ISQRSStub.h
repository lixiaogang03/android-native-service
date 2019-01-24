
// ISQRSStub.h

#ifndef ANDROID_MISOO_ISQRSStub_H
#define ANDROID_MISOO_ISQRSStub_H

#include <utils/RefBase.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>

#include "ISQRS.h"

namespace android {

class BnSQRS: public BnInterface<ISQRS> {

    public:

        virtual status_t onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags = 0);

};


}; // namespace android

#endif

