
#ifndef ANDROID_MISOO_SQR_H
#define ANDROID_MISOO_SQR_H

namespace android {

class SQR {
    private:
        const void getSQRService();
    public:
        SQR();
        int execute(int n);

    };

}; //namespace

#endif
