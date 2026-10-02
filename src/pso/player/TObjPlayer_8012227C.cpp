#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dual_slots__10TObjPlayerFPv(u8 *arg0);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(void *, void *);
M2C_UNK draw_weapon_model();
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);

void update_dual_slots__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    draw_weapon_model();
    draw_status_icon__10TObjPlayerFPvi(arg0, arg0 + 0x1F8);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x180);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    draw_status_icon__10TObjPlayerFPvi(arg0, arg0 + 0x204);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
