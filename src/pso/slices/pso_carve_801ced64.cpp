#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001053C(void *);
M2C_UNK fn_80010550(void *);
s32 fn_8012121C(void *);
f32 fn_80142950(void *, void *, void *);
s16 fn_801AFCCC();
s32 TObjPlayer__sub_801B5DDC(void *);
u32 TObjPlayer__sub_801B5EA4(void *);
s32 fn_801D2680(void *);
extern const f32 lbl_805DC36C;

void fn_801CED64(u8 *arg0) {
    s16 temp_r3;

    temp_r3 = fn_801AFCCC();
    if ((temp_r3 != 0x11) && ((temp_r3 >= 0x11) || (temp_r3 >= 0xA) || (temp_r3 < 6)) && (fn_8012121C(arg0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA)) && (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20000000) && (fn_801D2680(arg0) == 0)) {
        if (lbl_805DC36C > fn_80142950(arg0, arg0 + 0x308, arg0 + 0x310)) {
            fn_8001053C(arg0);
        }
        if (TObjPlayer__sub_801B5DDC(arg0) != 0) {
            fn_8001053C(arg0);
        }
        if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
            fn_80010550(arg0);
        }
    }
}

}
