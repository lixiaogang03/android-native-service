
//ICallback.h

#ifndef ANDROID_ISQRS_CALLBACK_H
#define ANDROID_ISQRS_CALLBACK_H

#include <utils/String16.h>
#include <utils/RefBase.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>

namespace android {

//--------------------IInterface------------------------

class ICallback: public IInterface {

    public:

        DECLARE_META_INTERFACE(Callback);

        virtual void onError(int errorCode, const String16& errorMessage) = 0;

};

//--------------------BpInterface------------------------

class BpCallback: public BpInterface<ICallback> {

    public:

        BpCallback(const sp<IBinder>& impl): BpInterface<ICallback>(impl) {}

        virtual void onError(int errorCode, const String16& errorMessage);

};

}; // namespace android

#endif

