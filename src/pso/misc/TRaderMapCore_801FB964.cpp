#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__13TRaderMapCoreFPv(void* a0);
void init_map_ptr__13TRaderMapCoreFv(void);
M2C_UNK TObjFish__sub_8001EDC4(s32);

    extern const float TRaderMapCore__data_805DC528;
    extern const float TRaderMapCore__data_805DC534;
void reset__13TRaderMapCoreFPv(void* a0) { *(float*)((char*)a0 + 0x8) = TRaderMapCore__data_805DC528; *(float*)((char*)a0 + 0x4) = TRaderMapCore__data_805DC528; *(float*)((char*)a0 + 0x0) = TRaderMapCore__data_805DC528; *(int*)((char*)a0 + 0xc) = 0; *(float*)((char*)a0 + 0x10) = TRaderMapCore__data_805DC534; *(short*)((char*)a0 + 0x14) = 0; *(short*)((char*)a0 + 0x16) = -1; *(float*)((char*)a0 + 0x24) = TRaderMapCore__data_805DC534; *(float*)((char*)a0 + 0x20) = TRaderMapCore__data_805DC534; *(float*)((char*)a0 + 0x1c) = TRaderMapCore__data_805DC534; *(float*)((char*)a0 + 0x18) = TRaderMapCore__data_805DC534; }

extern s32 lbl_805D5F48;

void init_map_ptr__13TRaderMapCoreFv(void) {
    TObjFish__sub_8001EDC4(lbl_805D5F48);
}

}
