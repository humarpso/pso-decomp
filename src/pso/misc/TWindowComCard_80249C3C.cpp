#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_help_mode__14TWindowComCardFPvi(void *arg0, s32 arg1);
void* get_card_name_ptr__14TWindowComCardFPv(void* p);
M2C_UNK TWindowHelpItem__sub_8025B08C(void *, f32, f32);

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
    TWindowHelpItem__sub_8025B08C(arg0, M2C_FIELD(temp_r4, f32 *, 0), M2C_FIELD(temp_r4, f32 *, 4));
}

void* get_card_name_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0xa; }

}
