#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801A72C8(void);
void TObjPlayer__sub_801A72EC(void);
void reset_state_block__10TObjPlayerFPv(void* a0);
M2C_UNK TObjPlayer__sub_801A7150(f32);
M2C_UNK TObjPlayer__sub_801A720C(f32);

    extern const float lbl_805DC0C0;
void reset_state_block__10TObjPlayerFPv(void* a0) { *(int*)((char*)a0 + 0x0) = 0; *(int*)((char*)a0 + 0x4) = -1; *(int*)((char*)a0 + 0x8) = 0; *(int*)((char*)a0 + 0xc) = 0; *(short*)((char*)a0 + 0x10) = 0; *(short*)((char*)a0 + 0x12) = 0; *(short*)((char*)a0 + 0x14) = 0; *(short*)((char*)a0 + 0x16) = 0; *(short*)((char*)a0 + 0x18) = 0; *(short*)((char*)a0 + 0x1a) = 0; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x20) = 0; *(float*)((char*)a0 + 0x24) = lbl_805DC0C0; *(float*)((char*)a0 + 0x28) = lbl_805DC0C0; }

extern const f32 lbl_805DC0D4;

void TObjPlayer__sub_801A72C8(void) {
    TObjPlayer__sub_801A7150(lbl_805DC0D4);
}

extern const f32 lbl_805DC0D4;

void TObjPlayer__sub_801A72EC(void) {
    TObjPlayer__sub_801A720C(lbl_805DC0D4);
}

}
