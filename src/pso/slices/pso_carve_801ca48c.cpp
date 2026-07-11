#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK apply_velocity__10TObjPlayerFPv(void *);
s32 fn_80143960(void *, M2C_UNK);
u32 TObjPlayer__sub_801B5EA4(void *);
M2C_UNK fn_801C5954(void *);
M2C_UNK fn_801CA35C(void *);
M2C_UNK TObjPlayer__sub_801D2834(void *, f32);
extern const f32 lbl_805DC37C;

void fn_801CA48C(u8 *arg0) {
    if ((fn_80143960(arg0, 0x20) != 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA))) {
        fn_801CA35C(arg0);
    }
    TObjPlayer__sub_801D2834(arg0 + 0x5FC, lbl_805DC37C);
    fn_801C5954(arg0 + 0x5FC);
    if (TObjPlayer__sub_801B5EA4(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
