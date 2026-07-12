#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 sync_state__10TObjPlayerFi(s32 arg0);
u32 TObjPlayer__sub_801BE648();
M2C_UNK TObjPlayer__sub_802C3F74(u32, s32);
M2C_UNK create__13TPlyOnCreatedFPvPv(u16, M2C_UNK *);

extern M2C_UNK fn_802C4748[];
extern s32 lbl_805D53A0;

s32 sync_state__10TObjPlayerFi(s32 arg0) {
    u32 temp_r3;
    temp_r3 = TObjPlayer__sub_801BE648();
    if (temp_r3 == 0U) {
        create__13TPlyOnCreatedFPvPv((u16) lbl_805D53A0, fn_802C4748);
        return 0;
    }
    TObjPlayer__sub_802C3F74(temp_r3, arg0);
    return 1;
}

}
