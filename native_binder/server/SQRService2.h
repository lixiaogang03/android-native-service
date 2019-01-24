
// SQRService2.h

#ifndef ANDROID_MISOO_SQRSERVICE2_H
#define ANDROID_MISOO_SQRSERVICE2_H

#include <stdint.h>
#include <sys/types.h>

#include "../lib/ISQRSStub.h"

namespace android {

class SQRService2 : public BnSQRS {

    public:

        static int instantiate();

        virtual int square(const int& n);

        virtual int mul(const int& n, const int& m);

        virtual int add(const int& x, const int& y);

};

}; //namespace android

#endif



