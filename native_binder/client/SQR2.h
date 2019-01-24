
// SQR2.h

#include "../lib/ISQRS.h"
#include "../lib/ICallbackStub.h"
#include "../lib/ICallback.h"

namespace android {

class SQR2 : public BnCallback {

    public:

        int square(int n, const sp<ICallback>& callback);

        int mul(int n, int m);

        int add(int x, int y);

        virtual void onError(int errorCode, const String16& errorMessage);

    private:

        static const sp<ISQRS> getSQRService();

};


}; // namespace android
