
// ISQRSStub.cpp

#include <stdint.h>
#include <sys/types.h>
#include <binder/Parcel.h>

#include "ISQRSStub.h"

namespace android {

enum {

    SQUARE = IBinder::FIRST_CALL_TRANSACTION,
    MUL, // IBinder::FIRST_CALL_TRANSACTION + 1
    ADD, // IBinder::FIRST_CALL_TRANSACTION + 2

};

//--------------------------------------------------

status_t BnSQRS::onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags) {

    switch (code) {

        case SQUARE:
             {
                 int num = data.readInt32();

                 sp<ICallback> callback = interface_cast<ICallback>(data.readStrongBinder()); //callback

                 int k = square(num, callback);

                 reply->writeInt32(k);
                 return NO_ERROR;
             }
             break;

        case MUL:
             {
                 int num1 = data.readInt32();
                 int num2 = data.readInt32();
                 int k = mul(num1, num2);
                 reply->writeInt32(k);
                 return NO_ERROR;
             }
             break;

        case ADD:
             {
                 int num1 = data.readInt32();
                 int num2 = data.readInt32();
                 int k = add(num1, num2);
                 reply->writeInt32(k);
                 return NO_ERROR;
             }
             break;

        default:
            return BBinder::onTransact(code, data, reply, flags);
    }

}


} // namespace android

