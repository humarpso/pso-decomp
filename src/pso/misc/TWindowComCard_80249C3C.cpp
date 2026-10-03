#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_status_effect_icon_index(u32 arg0);
}

extern "C" {

void set_help_mode__14TWindowComCardFPvi(void *arg0, s32 arg1);
void* get_card_name_ptr__14TWindowComCardFPv(void* p);
M2C_UNK set_sprite_uv_from_pixels(void *, f32, f32);

extern u8 lbl_8044EB50[];

void set_help_mode__14TWindowComCardFPvi(void *arg0, s32 arg1) {
    void *temp_r4;

    if (arg1 == 0xE) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 2);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) & 0xFFFFFFFD);
    if (arg1 < 0xA) {
        M2C_FIELD(arg0, s32 *, 0x34) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x34) = 2;
    }
    temp_r4 = lbl_8044EB50 + (arg1 * 8);
    set_sprite_uv_from_pixels(arg0, M2C_FIELD(temp_r4, f32 *, 0), M2C_FIELD(temp_r4, f32 *, 4));
}

void* get_card_name_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0xa; }
s32 get_status_effect_icon_index(u32 arg0) {
    switch (arg0) {
    case 3:
        return 1;
    case 9:
        return 6;
    case 10:
        return 8;
    case 11:
        return 7;
    case 12:
        return 9;
    case 15:
        return 3;
    case 16:
        return 4;
    case 17:
        return 5;
    case 18:
        return 0;
    case 2:
        return 2;
    default:
        return 0xE;
    }
}

}
