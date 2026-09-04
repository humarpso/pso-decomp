#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_active_photon_object__17TWindowMessageLogFv(void);
s32 TObjPlayer__sub_80019248(s32);
s32 TPhotonMylla__sub_80154CB4();
s32 obj_isState2_324();

s32 get_active_photon_object__17TWindowMessageLogFv(void) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4();
    if (temp_r3 == 0) {
        return 0;
    }
    if ((obj_isState2_324() == 0) && (TObjPlayer__sub_80019248(temp_r3) == 0)) {
        return 0;
    }
    var_r3 = temp_r3 + 0x85C;
    if (var_r3 == 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
