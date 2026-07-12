#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_chair__10TObjPlayerFi(s32 arg0);
M2C_UNK set_flag_400000__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801C5AB8(s32);

s32 obj_isState2_324(s32);

void update_photon_chair__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801C5AB8(arg0 + 0x634);
    if (obj_isState2_324(arg0) != 0) {
        set_flag_400000__10TObjPlayerFPv(arg0);
    }
}

}
