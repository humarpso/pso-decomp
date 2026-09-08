#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
void set_status_flags__10TObjPlayerFPvUi(void *, u32);
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
extern const f32 lbl_805DAC98;
extern const f32 lbl_805DAC9C;
extern const f32 lbl_805DACA0;
void TObjPlayer__sub_80120260(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TObjPlayer__sub_80120260(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x02000000U) == 0U) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C8) + lbl_805DACA0);
    } else {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C8) - lbl_805DACA0);
    }
    if (lbl_805DAC9C <= M2C_FIELD(arg0, f32 *, 0x1C8)) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_805DAC9C;
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x02000000U);
    }
    if (M2C_FIELD(arg0, f32 *, 0x1C8) <= lbl_805DAC98) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_805DAC98;
        clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x02000000U);
    }
}
#pragma pop

}
