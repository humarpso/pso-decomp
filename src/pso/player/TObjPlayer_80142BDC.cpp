#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void serialize_node_flags__10TObjPlayerFPv(u8 *arg0);

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
        serialize_node_flags__10TObjPlayerFPv((u8 *)(test_2c));
    }
    test_30 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x30));
    if (test_30 != NULL) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x80);
        lbl_805D5684 = lbl_805D5684 + 8;
        serialize_node_flags__10TObjPlayerFPv((u8 *)(test_30));
    }
}

}
