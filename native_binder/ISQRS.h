
// ISQRS.h

#include <utils/RefBase.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>

#ifndef ANDROID_MISOO_ISQRS_SERVICE_H
#define ANDROID_MISOO_ISQRS_SERVICE_H

namespace android {

//--------------------IInterface------------------------

class ISQRS: public IInterface {

    public:

        DECLARE_META_INTERFACE(SQRS);

        virtual int square(const int& n) = 0;

        virtual int mul(const int& n, const int& m) = 0;

        virtual int add(const int& x, const int& y) = 0;

};

//--------------------BpInterface------------------------

class BpSQRS: public BpInterface<ISQRS> {

    public:

        BpSQRS(const sp<IBinder>& impl): BpInterface<ISQRS>(impl) {}

        virtual int square(const int& n);

        virtual int mul(const int& n, const int& m);

        virtual int add(const int& x, const int& y);
};


}; //namespace android

#endif
