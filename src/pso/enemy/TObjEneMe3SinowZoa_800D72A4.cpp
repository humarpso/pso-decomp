#include "types.h"

extern "C" {

int TObjEneMe3SinowZoa__sub_800D7310(void);
void TObjEneMe3SinowZoa__sub_800D74A4(void* a0);
void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void);
void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q);
int TObjPlayer__sub_803E38FC(int);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);

void apply_player_damage_8448__18TObjEneMe3SinowZoaFv(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); TObjPlayer__sub_803E38FC(8448); }

int TObjEneMe3SinowZoa__sub_800D7310(void) { return 0; }

void copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

    extern const float lbl_805DA348;
    extern const float lbl_805DA350;
void TObjEneMe3SinowZoa__sub_800D74A4(void* a0) { *(float*)((char*)a0 + 0x18) = lbl_805DA348; *(float*)((char*)a0 + 0x0) = lbl_805DA350; *(float*)((char*)a0 + 0x4) = lbl_805DA348; *(float*)((char*)a0 + 0x8) = lbl_805DA348; *(float*)((char*)a0 + 0xc) = lbl_805DA348; }

}
