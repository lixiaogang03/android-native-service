
//ISQRS.cpp

#include "ISQRS.h"

#include <cutils/log.h>

namespace android {

enum {
    SQUARE = IBinder::FIRST_CALL_TRANSACTION,
    MUL, // IBinder::FIRST_CALL_TRANSACTION + 1
    ADD, // IBinder::FIRST_CALL_TRANSACTION + 2
};


int BpSQRS::square(const int& n) {

    Parcel data, reply;

    data.writeInt32(n);

    ALOGV("BpSQRService::create remote()->transact()\n");

    //关键代码
    remote()->transact(SQUARE, data, &reply);

    ALOGV("BpSQRService::create n=%d\n", n);

    int num = reply.readInt32();

    ALOGV("num=%d", num);

    return num;
}


int BpSQRS::mul(const int& n, const int& m) {

    Parcel data, reply;

    data.writeInt32(n);
    data.writeInt32(m);

    ALOGV("BpSQRService::create remote()->transact()\n");

    //关键代码
    remote()->transact(MUL, data, &reply);

    ALOGV("BpSQRService::create n=%d, m=%d\n", n, m);

    int num = reply.readInt32();

    ALOGV("num=%d", num);

    return num;

}

int BpSQRS::add(const int& x, const int& y) {

    Parcel data, reply;

    data.writeInt32(x);
    data.writeInt32(y);

    ALOGV("BpSQRService::create remote()->transact()\n");

    //关键代码
    remote()->transact(ADD, data, &reply);

    ALOGV("BpSQRService::create x=%d, y=%d\n", x, y);

    int num = reply.readInt32();

    ALOGV("num=%d", num);

    return num;

}


IMPLEMENT_META_INTERFACE(SQRS, "android.misoo.IAS");

};//namespace android
