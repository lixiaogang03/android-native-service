

// ICallbackStub.cpp

#include <stdint.h>
#include <sys/types.h>
#include <binder/Parcel.h>

#include "ICallbackStub.h"

namespace android {

enum {

    CALLBACK = IBinder::FIRST_CALL_TRANSACTION,

};

//--------------------------------------------------

status_t BnCallback::onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags) {

    switch (code) {

        case CALLBACK:
            {
                 int errorCode = data.readInt32();
                 String16 errorMessage = data.readString16();

                 onError(errorCode, errorMessage); //server callback

                 return NO_ERROR;

            }
            break;

        default:
            return BBinder::onTransact(code, data, reply, flags);
    }

}

} // namespace android
