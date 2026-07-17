#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *arg0);
M2C_UNK set_section_index__15TFontSmallLobbyFPvs(void *, M2C_UNK);

s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 4);
    if ((temp_r3 < 0) || (temp_r3 > 0xA)) {
        set_section_index__15TFontSmallLobbyFPvs(arg0, 0);
    }
    return M2C_FIELD(arg0, s16 *, 4);
}

}
