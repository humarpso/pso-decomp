#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct E16_80142b8c_80142B08 { u8 a[4]; s32 f4; u8 b[8]; };
struct E8_80142b8c_80142B08  { u8 a[4]; s32 f4; };

extern "C" {

s32 is_anim_finished__10TObjPlayerFPv(void *arg0);
void serialize_node_flags__10TObjPlayerFPv(u8 *arg0);
void update_animation_frame__10TObjPlayerFPvi(u8 *arg0, s32 arg1);

s32 is_anim_finished__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((!(temp_r4 & 4) || (temp_r4 & 1)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA))) {
        return 1;
    }
    return 0;
}

void update_animation_frame__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    struct E16_80142b8c_80142B08 *a = *(struct E16_80142b8c_80142B08 **)(arg0 + 0xD8);
    s32 n = a[arg1].f4;
    struct E8_80142b8c_80142B08 *b = *(struct E8_80142b8c_80142B08 **)(arg0 + 0xDC);
    *(s32 *)(arg0 + 0xF8) = b[n].f4;
}

extern u8 *lbl_805D5684;

void serialize_node_flags__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r4;
    u8 *test_2c;
    u8 *test_30;

    M2C_FIELD(lbl_805D5684, void **, 0) = arg0;
    M2C_FIELD(lbl_805D5684, s32 *, 4) = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0) & 1)) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 1);
    }
    if (!(M2C_FIELD(arg0, s32 *, 0) & 2)) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 2);
    }
    if (!(M2C_FIELD(arg0, s32 *, 0) & 4)) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 4);
    }
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 4));
    if (temp_r4 != NULL) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 8);
        if ((u32) M2C_FIELD(temp_r4, u32 *, 0) != 0U) {
            M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x10);
        }
        if ((u32) M2C_FIELD(temp_r4, u32 *, 4) != 0U) {
            M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x20);
        }
    }
    test_2c = (unsigned char *) (M2C_FIELD(arg0, void **, 0x2C));
    if (test_2c != NULL) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x40);
        lbl_805D5684 = lbl_805D5684 + 8;
        serialize_node_flags__10TObjPlayerFPv((u8 *)((u8 *)(test_2c)));
    }
    test_30 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x30));
    if (test_30 != NULL) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x80);
        lbl_805D5684 = lbl_805D5684 + 8;
        serialize_node_flags__10TObjPlayerFPv((u8 *)((u8 *)(test_30)));
    }
}

}
