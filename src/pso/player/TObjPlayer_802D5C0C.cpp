#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_802D5C0C(u8 *arg0, u8 *arg1);
void TObjPlayer__sub_802D5C80(void *arg0);
void TObjPlayer__sub_802D5CD0(void *arg0);
M2C_UNK TObjPlayer__sub_8010853C(s32, void *, M2C_UNK, s32);
s32 TObjPlayer__sub_8011F63C();
M2C_UNK TObjPlayer__sub_80120304(M2C_UNK *, void *);
M2C_UNK TRaderMapCore__sub_8002F588(void *, M2C_UNK *);

void TObjPlayer__sub_802D5C0C(u8 *arg0, u8 *arg1) {
    M2C_UNK sp8;

    M2C_FIELD(arg1, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x200);
    M2C_FIELD(arg1, s32 *, 0x58) = 0xC000;
    M2C_FIELD(arg1, s32 *, 0x40) = (s32) (M2C_FIELD(arg1, s32 *, 0x40) | 2);
    TObjPlayer__sub_80120304(&sp8, arg0);
    TRaderMapCore__sub_8002F588(arg1 + 0x60, &sp8);
    M2C_FIELD(arg1, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x208);
    M2C_FIELD(arg1, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x204);
}

void TObjPlayer__sub_802D5C80(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 2) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) & 0xFFFFFFFE);
}

extern s32 tl_05;

void TObjPlayer__sub_802D5CD0(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        TObjPlayer__sub_8010853C(tl_05, arg0, -1, M2C_FIELD(arg0, s32 *, 0x1FC));
    }
}

}
