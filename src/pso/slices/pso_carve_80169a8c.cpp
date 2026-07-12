#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODragonfly__sub_80158360(f32);
u8 TODoorAncient08__sub_80229220(u16);
extern f32 lbl_805DB6D8;

s32 fn_80169A8C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 1:
        if (TODragonfly__sub_80158360(lbl_805DB6D8) != 0) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
        break;
    case 2:
        if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xD0)) == 1) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
        break;
    }
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

}
