
// SQR2.h

#include "../lib/ISQRS.h"

namespace android {

class SQR2 {

    public:

        int square(int n);

        int mul(int n, int m);

        int add(int x, int y);

    private:

        static const sp<ISQRS> getSQRService();

};


}; // namespace android
