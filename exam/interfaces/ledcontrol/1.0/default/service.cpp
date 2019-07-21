/*
 * CLOSED
 */
#define LOG_TAG "vendor.gl.ledcontrol@1.0-service.hikey960"

#include <hidl/HidlSupport.h>
#include <hidl/HidlTransportSupport.h>
#include "LedControl.h"
#include "log/log.h"

using ::android::hardware::configureRpcThreadpool;
using ::vendor::gl::ledcontrol::V1_0::implementation::LedControl;
using ::vendor::gl::ledcontrol::V1_0::ILedControl;
using ::android::hardware::joinRpcThreadpool;
using ::android::OK;
using ::android::sp;

int main(int /* argc */, char* /* argv */ []) {
    sp<ILedControl> ledControl = new LedControl();
    configureRpcThreadpool(1, true /* will join */);
    if (ledControl->registerAsService() != OK) {
        ALOGE("Could not register LedControl 1.0 service.");
        return 1;
    } else {
        ALOGI("Service registred.");
    }
    joinRpcThreadpool();

    ALOGE("Service exited!");
    return 1;
}
