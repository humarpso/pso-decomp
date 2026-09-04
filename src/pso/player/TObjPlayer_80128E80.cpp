#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_status_icons__10TObjPlayerFPv(u8 *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, M2C_UNK);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, void *);
M2C_UNK TObjPlayer__sub_80120BBC(void *, M2C_UNK);

void draw_status_icons__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    set_flags__10TObjPlayerFPvUi(arg0 + 0x1FC, 1);
    TObjPlayer__sub_80120BBC(arg0, 0x30);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x200);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x180);
    clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1FC, 1);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    draw_icon__10TObjPlayerFPvii(arg0, 1, arg0 + 0x20C);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
