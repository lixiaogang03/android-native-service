
// ICallback.cpp

#include "ICallback.h"

#include <cutils/log.h>

namespace android {

enum {

    CALLBACK = IBinder::FIRST_CALL_TRANSACTION,

};


void BpCallback::onError(int errorCode, const String16& errorMessage) {

    Parcel data, reply;

    data.writeInt32(errorCode);

    data.writeString16(errorMessage);

    ALOGV("BpCallback::onError remote()->transact()\n");

    remote()->transact(CALLBACK, data, &reply); //server to client

}


IMPLEMENT_META_INTERFACE(Callback, "android.misoo.Callback");

}; // namespace android
