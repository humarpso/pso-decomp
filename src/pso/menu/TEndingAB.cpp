#ifndef PSO_CLASS_PACKAGE
#include "pso/TEndingAB.h"

TEndingAB::~TEndingAB() {}
#else
#if PSO_CLASS_PACKAGE == 0x8008C9FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_fade_sequence__9TEndingABFPv(void *arg0);
M2C_UNK update_flag890_state__10TObjPlayerFi(s32);

extern s32 TEndingAB__data_805D4F10;

void advance_fade_sequence__9TEndingABFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;

    switch ((s32) TEndingAB__data_805D4F10) {
    case 1:
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 > (s32) ((temp_r4 * 3) - temp_r4)) {
            TEndingAB__data_805D4F10 = 2;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 2:
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_2;
        if (temp_r3_2 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0xD)) {
            TEndingAB__data_805D4F10 = 3;
            return;
        }
        break;
    case 3:
        temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_3;
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3_3 > (s32) ((temp_r4_2 * 0xE) - temp_r4_2)) {
            TEndingAB__data_805D4F10 = 4;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 4:
        temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_4;
        if (temp_r3_4 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0x18)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            TEndingAB__data_805D4F10 = 1;
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
            if (temp_r0 > 5) {
                M2C_FIELD(arg0, s32 *, 0x28) = 5;
                TEndingAB__data_805D4F10 = 5;
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x28) = 5;
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008CCC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_float_table__9TEndingABFPv(void* a0);
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
void init_float_table__9TEndingABFPv(void* a0) { *(float*)((char*)a0 + 0x2c) = lbl_805D9584; *(float*)((char*)a0 + 0x30) = lbl_805D9588; *(float*)((char*)a0 + 0x34) = lbl_805D958C; *(float*)((char*)a0 + 0x38) = lbl_805D9590; *(float*)((char*)a0 + 0x3c) = lbl_805D9594; *(float*)((char*)a0 + 0x40) = lbl_805D9588; *(float*)((char*)a0 + 0x44) = lbl_805D9598; *(float*)((char*)a0 + 0x48) = lbl_805D959C; *(float*)((char*)a0 + 0x4c) = lbl_805D9588; *(float*)((char*)a0 + 0x50) = lbl_805D9588; *(float*)((char*)a0 + 0x54) = lbl_805D95A0; *(float*)((char*)a0 + 0x58) = lbl_805D9590; *(float*)((char*)a0 + 0x5c) = lbl_805D9588; *(float*)((char*)a0 + 0x60) = lbl_805D9588; *(float*)((char*)a0 + 0x64) = lbl_805D9594; *(float*)((char*)a0 + 0x68) = lbl_805D959C; *(float*)((char*)a0 + 0x6c) = lbl_805D9584; *(float*)((char*)a0 + 0x70) = lbl_805D9588; *(float*)((char*)a0 + 0x74) = lbl_805D958C; *(float*)((char*)a0 + 0x78) = lbl_805D9590; *(float*)((char*)a0 + 0x7c) = lbl_805D9594; *(float*)((char*)a0 + 0x80) = lbl_805D9588; *(float*)((char*)a0 + 0x84) = lbl_805D9598; *(float*)((char*)a0 + 0x88) = lbl_805D959C; *(float*)((char*)a0 + 0x8c) = lbl_805D9588; *(float*)((char*)a0 + 0x90) = lbl_805D9588; *(float*)((char*)a0 + 0x94) = lbl_805D95A0; *(float*)((char*)a0 + 0x98) = lbl_805D9590; *(float*)((char*)a0 + 0x9c) = lbl_805D9588; *(float*)((char*)a0 + 0xa0) = lbl_805D9588; *(float*)((char*)a0 + 0xa4) = lbl_805D9594; *(float*)((char*)a0 + 0xa8) = lbl_805D959C; *(float*)((char*)a0 + 0xac) = lbl_805D95A4; *(float*)((char*)a0 + 0xb0) = lbl_805D95A8; *(float*)((char*)a0 + 0xb4) = lbl_805D95AC; *(float*)((char*)a0 + 0xb8) = lbl_805D95B0; *(float*)((char*)a0 + 0xbc) = lbl_805D9588; *(float*)((char*)a0 + 0xc0) = lbl_805D9588; *(float*)((char*)a0 + 0xc4) = lbl_805D9598; *(float*)((char*)a0 + 0xc8) = lbl_805D9598; *(float*)((char*)a0 + 0xcc) = lbl_805D95A4; *(float*)((char*)a0 + 0xd0) = lbl_805D95B4; *(float*)((char*)a0 + 0xd4) = lbl_805D95AC; *(float*)((char*)a0 + 0xd8) = lbl_805D95B8; *(float*)((char*)a0 + 0xdc) = lbl_805D9588; *(float*)((char*)a0 + 0xe0) = lbl_805D9588; *(float*)((char*)a0 + 0xe4) = lbl_805D9598; *(float*)((char*)a0 + 0xe8) = lbl_805D9598; }

extern s32 TEndingAB__data_805D4F10;

void render__9TEndingABFv(s32 arg0) {
    if ((s32) TEndingAB__data_805D4F10 != 0) {
        TEndingAB__sub_8008CC5C();
        TEndingAB__sub_8008CB54(arg0);
        TEndingAB__sub_8008CCC0(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008CE08
#include "types.h"

extern "C" {

int run_task__9TEndingABFv(void* p);

int advance_fade_sequence__9TEndingABFPv(void*);

int run_task__9TEndingABFv(void* p) { return advance_fade_sequence__9TEndingABFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008CF1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__9TEndingABFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D4F14;

void destroy_instance__9TEndingABFv(void) {
    if ((u32) lbl_805D4F14 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4F14);
        lbl_805D4F14 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008D5A0
#include "types.h"

extern "C" {

void TEndingAB__sub_8008D5A0(void);

    extern int TEndingAB__data_805D4F10;
void TEndingAB__sub_8008D5A0(void) { TEndingAB__data_805D4F10 = 1; }

}
#endif
#endif
