#ifndef VENDOR_GL_LEDCONTROL_V1_0_LEDCONTROL_H
#define VENDOR_GL_LEDCONTROL_V1_0_LEDCONTROL_H

#include <vendor/gl/ledcontrol/1.0/ILedControl.h>

namespace vendor {
namespace gl {
namespace ledcontrol {
namespace V1_0 {
namespace implementation {

using LedID = V1_0::LedID;
using LedStatus = V1_0::LedStatus;

using ::android::hardware::Return;

class LedControl : public ILedControl {
    public:
    LedControl();
    ~LedControl();

    Return<uint32_t> initLedControl();
    Return<uint32_t> setLedState(LedID id, LedStatus status);
    Return<uint32_t> terminateLedState();

    Return<bool> stop();

};

}  // namespace implementation
}  // namespace V1_0
}  // namespace ledcontrol
}  // namespace gl
}  // namespace vendor

#endif  // VENDOR_GL_LEDCONTROL_V1_0_LEDCONTROL_H
