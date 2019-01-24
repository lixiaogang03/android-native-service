
// ICallbackStub.h

#ifndef ANDROID_ISQRS_ICALLBACK_STUB_H
#define ANDROID_ISQRS_ICALLBACK_STUB_H

#include <utils/String16.h>
#include <utils/RefBase.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>

#include "ICallback.h"

namespace android {

class BnCallback: public BnInterface<ICallback> {

    public:

        virtual status_t onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags = 0);

};


}; // namespace android

#endif

