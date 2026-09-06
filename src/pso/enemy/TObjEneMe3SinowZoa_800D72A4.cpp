#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const float lbl_805DA348;
s32 TObjEneMe3SinowZoa__sub_800D72D0(u8 *arg0);
void TObjEneMe3SinowZoa__sub_800D741C(void *);
s32 TObjEneMe3SinowZoa__sub_800D7310(u8 *arg0, f32 farg0);
void TObjEneMe3SinowZoa__sub_800D741C(void *);
extern const f32 lbl_805DA34C;
s32 TObjEneMe3SinowZoa__sub_800D7374(u8 *arg0);
extern const float lbl_805DA348;
void TObjEneMe3SinowZoa__sub_800D741C(void *);
s32 TObjEneMe3SinowZoa__sub_800D73C8(u8 *arg0);
}

extern "C" {

void TObjEneMe3SinowZoa__sub_800D74A4(void* a0);
void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void);
void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q);
int TObjPlayer__sub_803E38FC(int);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);

s32 TObjEneMe3SinowZoa__sub_800D72D0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x18) > (*(const f32 *)&lbl_805DA348);
}

void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); TObjPlayer__sub_803E38FC(8448); }

s32 TObjEneMe3SinowZoa__sub_800D7310(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + M2C_FIELD(arg0, f32 *, 0x10));
    TObjEneMe3SinowZoa__sub_800D741C(arg0);
    return M2C_FIELD(arg0, f32 *, 0x18) >= farg0;
}

s32 TObjEneMe3SinowZoa__sub_800D7374(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x10));
    TObjEneMe3SinowZoa__sub_800D741C(arg0);
    return M2C_FIELD(arg0, f32 *, 0x18) >= lbl_805DA34C;
}

s32 TObjEneMe3SinowZoa__sub_800D73C8(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x10));
    TObjEneMe3SinowZoa__sub_800D741C(arg0);
    return M2C_FIELD(arg0, f32 *, 0x18) <= (*(const f32 *)&lbl_805DA348);
}

void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

    extern const float lbl_805DA348;
    extern const float lbl_805DA350;
void TObjEneMe3SinowZoa__sub_800D74A4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA348; *(float*)((char*)a0 + 0x0) = lbl_805DA350; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

}
