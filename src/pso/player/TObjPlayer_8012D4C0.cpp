#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012D4C0(void *arg0);
void TObjPlayer__sub_8012D558(void *arg0);
s32 TItemProArmor__sub_80102C3C(void *);
u16 TObjPlayer__sub_80100474(void *);
M2C_UNK TObjPlayer__sub_8010047C(void *, u16);
u32 TObjPlayer__sub_80102BE0(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80102BFC(void *, M2C_UNK);
s16 TObjPlayer__sub_8012D6B4(s32);
M2C_UNK TObjPlayer__sub_8012D6BC(s32, u32, s32, M2C_UNK, f32);
s32 alloc__13TItemProArmorFi(M2C_UNK);

void TObjPlayer__sub_8012D4C0(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1F8) < TObjPlayer__sub_8012D6B4(M2C_FIELD(arg0, s32 *, 0xF0))) {
        TObjPlayer__sub_8010047C(arg0, (u16) (TObjPlayer__sub_80100474(arg0) + 1));
        M2C_FIELD(arg0, s16 *, 0x1F8) = TObjPlayer__sub_8012D6B4(M2C_FIELD(arg0, s32 *, 0xF0));
    }
    if ((TObjPlayer__sub_80100474(arg0) >= 0x59D8U) && (TObjPlayer__sub_80102BE0(arg0, 0x200) == 0U)) {
        TObjPlayer__sub_80102BFC(arg0, 0x200);
    }
}

extern f32 lbl_805DAF20;

void TObjPlayer__sub_8012D558(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            TObjPlayer__sub_8012D6BC(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0xE10, lbl_805DAF20);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x1F8) = TObjPlayer__sub_8012D6B4(M2C_FIELD(arg0, s32 *, 0xF0));
}

}
