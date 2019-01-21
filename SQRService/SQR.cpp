
#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>

#include <cutils/log.h>

#include "SQR.h"

namespace android {

    sp<IBinder> m_ib;

    SQR::SQR() {
        getSQRService();
    }

const void SQR::getSQRService() {

    sp<IServiceManager> sm = defaultServiceManager();

    m_ib = sm->getService(String16("misoo.sqr"));

    ALOGE("SQR:getSQRService %p\n", sm.get());

    if (m_ib == 0) {
        ALOGW("SQRService not published, waiting...");
    }

}

int SQR::execute(int n) {

    Parcel data, reply;

    data.writeInt32(n);

    ALOGE("SQR::execute");

    m_ib->transact(0, data, &reply); //BpBinder

    int num = reply.readInt32();

    return num;

}

}
