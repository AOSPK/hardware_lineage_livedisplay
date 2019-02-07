#ifndef VENDOR_LINEAGE_LIVEDISPLAY_V2_0_COLORENHANCEMENT_H
#define VENDOR_LINEAGE_LIVEDISPLAY_V2_0_COLORENHANCEMENT_H

#include <vendor/lineage/livedisplay/2.0/IColorEnhancement.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor {
namespace lineage {
namespace livedisplay {
namespace V2_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct ColorEnhancement : public IColorEnhancement {
    // Methods from ::vendor::lineage::livedisplay::V2_0::IColorEnhancement follow.
    Return<bool> isEnabled() override;
    Return<bool> setEnabled(bool enabled) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IColorEnhancement* HIDL_FETCH_IColorEnhancement(const char* name);

}  // namespace implementation
}  // namespace V2_0
}  // namespace livedisplay
}  // namespace lineage
}  // namespace vendor

#endif  // VENDOR_LINEAGE_LIVEDISPLAY_V2_0_COLORENHANCEMENT_H