#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 TObjPlayer__sub_801CCCC0(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_801CD02C(s32, s16);
M2C_UNK TObjPlayer__sub_801CD72C(s32);
s32 fn_800822E8(s32, M2C_UNK);
s32 TMainCursor__sub_8013B41C(s32, void *, M2C_UNK, u8);
M2C_UNK fn_8013DF4C(s32, u8);
M2C_UNK fn_8013DF54(s32, M2C_UNK);
M2C_UNK fn_8013DFC4(s32);
M2C_UNK fn_801C011C(s32, s32);

void update_cursor__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x424);
    if ((temp_r3 != 0U) && (TMainCursor__sub_8013B41C(temp_r3 + 0x520, arg0, 3, (u8) arg1) != 0)) {
        fn_8013DF54(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, 3);
        fn_8013DF4C(M2C_FIELD(arg0, u32 *, 0x424) + 0x520, (u8) arg1);
        fn_8013DFC4(M2C_FIELD(arg0, u32 *, 0x424) + 0x520);
    }
}

s32 TObjPlayer__sub_801CCCC0(s32 arg0, s32 arg1) {
    if (fn_800822E8(arg0, 0x100) == 0) {
        if (TObjPlayer__sub_801CD02C(arg0, arg1) == 0) {
            return 0;
        }
        fn_801C011C(arg0 + 0x428, arg1);
        TObjPlayer__sub_801CD72C(arg0);
        return 1;
    }
    return 0;
}

}
