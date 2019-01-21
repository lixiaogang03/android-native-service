
// SQRService.h

#ifndef ANDROID_MISOO_SQRSERVICE_H
#define ANDROID_MISOO_SQRSERVICE_H

#include <stdint.h>
#include <sys/types.h>
#include <binder/Parcel.h>
#include <binder/IInterface.h>
#include <utils/RefBase.h>


namespace android {

class SQRService : public BBinder
    {
      public:
          static int instantiate();

          virtual status_t onTransact(uint32_t, const Parcel&, Parcel*, uint32_t);

          SQRService();

          virtual ~SQRService();
    };

} // namespace android

#endif
