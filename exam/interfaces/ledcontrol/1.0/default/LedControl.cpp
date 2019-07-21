#define LOG_TAG "LedControl"

#include <vendor/gl/ledcontrol/1.0/types.h>
#include <log/log.h>

#include "LedControl.h"

namespace vendor {
namespace gl {
namespace ledcontrol {
namespace V1_0 {
namespace implementation {


LedControl::LedControl() {}

LedControl::~LedControl() {
    stop();
}

Return<uint32_t> LedControl::initLedControl() {
    return 0;
}

Return<uint32_t> LedControl::setLedState(LedID id, LedStatus status) {
    return 0;
}

Return<uint32_t> LedControl::terminateLedState() {
    return 0;
}

Return<bool> LedControl::stop() {
    return true;
}


}  // namespace implementation
}  // namespace V1_0
}  // namespace ledcontrol
}  // namespace hardware
}  // namespace android
