#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TRaderMapCore__sub_801FB964(void* a0);
void TRaderMapCore__sub_801FB9A4(void);
M2C_UNK TObjFish__sub_8001EDC4(s32);

    extern const float lbl_805DC528;
    extern const float lbl_805DC534;
void TRaderMapCore__sub_801FB964(void* a0) { *(float*)((char*)a0 + 0x8) = lbl_805DC528; *(float*)((char*)a0 + 0x4) = lbl_805DC528; *(float*)((char*)a0 + 0x0) = lbl_805DC528; *(int*)((char*)a0 + 0xc) = 0; *(float*)((char*)a0 + 0x10) = lbl_805DC534; *(short*)((char*)a0 + 0x14) = 0; *(short*)((char*)a0 + 0x16) = -1; *(float*)((char*)a0 + 0x24) = lbl_805DC534; *(float*)((char*)a0 + 0x20) = lbl_805DC534; *(float*)((char*)a0 + 0x1c) = lbl_805DC534; *(float*)((char*)a0 + 0x18) = lbl_805DC534; }

extern s32 lbl_805D5F48;

void TRaderMapCore__sub_801FB9A4(void) {
    TObjFish__sub_8001EDC4(lbl_805D5F48);
}

}
