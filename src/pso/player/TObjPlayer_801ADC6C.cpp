#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801ADC6C(void);
void TObjPlayer__sub_801ADC78(void);
void TObjPlayer__sub_801ADC7C(void* a0);
void apply_photon_blast_effects__10TObjPlayerFPv(void *arg0);
u32 TObjPlayer__sub_80040B28(s32);
M2C_UNK TObjPlayer__sub_8015610C(void *);
M2C_UNK TObjPlayer__sub_80154D7C();
M2C_UNK TObjPlayer__sub_801A720C(u16, M2C_UNK, M2C_UNK, f32);
u32 obj_getField1c();

    extern int lbl_805D5D50;
void TObjPlayer__sub_801ADC6C(void) { lbl_805D5D50 = 0; }

void TObjPlayer__sub_801ADC78(void) {  }

    extern const float lbl_805DC228;
void TObjPlayer__sub_801ADC7C(void* a0) { *(float*)((char*)a0 + 0x180) = lbl_805DC228; *(float*)((char*)a0 + 0x184) = lbl_805DC228; *(float*)((char*)a0 + 0x188) = lbl_805DC228; *(float*)((char*)a0 + 0x18c) = lbl_805DC228; }

void apply_photon_blast_effects__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;

    TObjPlayer__sub_80154D7C();
    TObjPlayer__sub_8015610C(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (TObjPlayer__sub_80040B28(var_r31) != 0U) {
                TObjPlayer__sub_801A720C((u16) obj_getField1c(), 2, 0, M2C_FIELD(arg0, f32 *, 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}

}
