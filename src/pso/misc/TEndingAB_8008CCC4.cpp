#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TEndingAB__sub_8008CCC4(void* a0);
void render__9TEndingABFv(s32 arg0);
M2C_UNK TEndingAB__sub_8008CCC0(s32);
M2C_UNK TEndingAB__sub_8008CB54(s32);
M2C_UNK TEndingAB__sub_8008CC5C();

    extern const float lbl_805D9584;
    extern const float lbl_805D9588;
    extern const float lbl_805D958C;
    extern const float lbl_805D9590;
    extern const float lbl_805D9594;
    extern const float lbl_805D9598;
    extern const float lbl_805D959C;
    extern const float lbl_805D95A0;
    extern const float lbl_805D95A4;
    extern const float lbl_805D95A8;
    extern const float lbl_805D95AC;
    extern const float lbl_805D95B0;
    extern const float lbl_805D95B4;
    extern const float lbl_805D95B8;
void TEndingAB__sub_8008CCC4(void* a0) { *(float*)((char*)a0 + 0x2c) = lbl_805D9584; *(float*)((char*)a0 + 0x30) = lbl_805D9588; *(float*)((char*)a0 + 0x34) = lbl_805D958C; *(float*)((char*)a0 + 0x38) = lbl_805D9590; *(float*)((char*)a0 + 0x3c) = lbl_805D9594; *(float*)((char*)a0 + 0x40) = lbl_805D9588; *(float*)((char*)a0 + 0x44) = lbl_805D9598; *(float*)((char*)a0 + 0x48) = lbl_805D959C; *(float*)((char*)a0 + 0x4c) = lbl_805D9588; *(float*)((char*)a0 + 0x50) = lbl_805D9588; *(float*)((char*)a0 + 0x54) = lbl_805D95A0; *(float*)((char*)a0 + 0x58) = lbl_805D9590; *(float*)((char*)a0 + 0x5c) = lbl_805D9588; *(float*)((char*)a0 + 0x60) = lbl_805D9588; *(float*)((char*)a0 + 0x64) = lbl_805D9594; *(float*)((char*)a0 + 0x68) = lbl_805D959C; *(float*)((char*)a0 + 0x6c) = lbl_805D9584; *(float*)((char*)a0 + 0x70) = lbl_805D9588; *(float*)((char*)a0 + 0x74) = lbl_805D958C; *(float*)((char*)a0 + 0x78) = lbl_805D9590; *(float*)((char*)a0 + 0x7c) = lbl_805D9594; *(float*)((char*)a0 + 0x80) = lbl_805D9588; *(float*)((char*)a0 + 0x84) = lbl_805D9598; *(float*)((char*)a0 + 0x88) = lbl_805D959C; *(float*)((char*)a0 + 0x8c) = lbl_805D9588; *(float*)((char*)a0 + 0x90) = lbl_805D9588; *(float*)((char*)a0 + 0x94) = lbl_805D95A0; *(float*)((char*)a0 + 0x98) = lbl_805D9590; *(float*)((char*)a0 + 0x9c) = lbl_805D9588; *(float*)((char*)a0 + 0xa0) = lbl_805D9588; *(float*)((char*)a0 + 0xa4) = lbl_805D9594; *(float*)((char*)a0 + 0xa8) = lbl_805D959C; *(float*)((char*)a0 + 0xac) = lbl_805D95A4; *(float*)((char*)a0 + 0xb0) = lbl_805D95A8; *(float*)((char*)a0 + 0xb4) = lbl_805D95AC; *(float*)((char*)a0 + 0xb8) = lbl_805D95B0; *(float*)((char*)a0 + 0xbc) = lbl_805D9588; *(float*)((char*)a0 + 0xc0) = lbl_805D9588; *(float*)((char*)a0 + 0xc4) = lbl_805D9598; *(float*)((char*)a0 + 0xc8) = lbl_805D9598; *(float*)((char*)a0 + 0xcc) = lbl_805D95A4; *(float*)((char*)a0 + 0xd0) = lbl_805D95B4; *(float*)((char*)a0 + 0xd4) = lbl_805D95AC; *(float*)((char*)a0 + 0xd8) = lbl_805D95B8; *(float*)((char*)a0 + 0xdc) = lbl_805D9588; *(float*)((char*)a0 + 0xe0) = lbl_805D9588; *(float*)((char*)a0 + 0xe4) = lbl_805D9598; *(float*)((char*)a0 + 0xe8) = lbl_805D9598; }

extern s32 TEndingAB__data_805D4F10;

void render__9TEndingABFv(s32 arg0) {
    if ((s32) TEndingAB__data_805D4F10 != 0) {
        TEndingAB__sub_8008CC5C();
        TEndingAB__sub_8008CB54(arg0);
        TEndingAB__sub_8008CCC0(arg0);
    }
}

}
