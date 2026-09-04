#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct { f32 x; f32 y; f32 z; } Vec3;

extern "C" {

void TObjPlayer__sub_801ADC6C(void);
void TObjPlayer__sub_801ADC78(void);
void TObjPlayer__sub_801ADC7C(void* a0);
void apply_photon_blast_effects__10TObjPlayerFPv(void *arg0);
void update_photon_blast(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TCameraCtrl__sub_801A7310(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_8015610C(void *);
M2C_UNK TObjPlayer__sub_801A720C(u16, M2C_UNK, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_801A7680(void *);
M2C_UNK TObjPlayer__sub_801A7748(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801ADD10(void *);
M2C_UNK TPhotonMagicSquare__ct(s32, void *, M2C_UNK, Vec3 *, M2C_UNK, f32);
s32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(Vec3 *, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
u32 get_battle_param__10TObjPlayerFi(s32);
M2C_UNK init_all_slots__10TObjPlayerFv();
u32 obj_getField1c();
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
M2C_UNK update_state__10TSceneSoraFPv(void *);

    extern int lbl_805D5D50;
void TObjPlayer__sub_801ADC6C(void) { lbl_805D5D50 = 0; }

void TObjPlayer__sub_801ADC78(void) {  }

    extern const float lbl_805DC228;
void TObjPlayer__sub_801ADC7C(void* a0) { *(float*)((char*)a0 + 0x180) = lbl_805DC228; *(float*)((char*)a0 + 0x184) = lbl_805DC228; *(float*)((char*)a0 + 0x188) = lbl_805DC228; *(float*)((char*)a0 + 0x18c) = lbl_805DC228; }

void apply_photon_blast_effects__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;

    init_all_slots__10TObjPlayerFv();
    TObjPlayer__sub_8015610C(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (get_battle_param__10TObjPlayerFi(var_r31) != 0U) {
                TObjPlayer__sub_801A720C((u16) obj_getField1c(), 2, 0, M2C_FIELD(arg0, f32 *, 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}

extern const f64 lbl_80446ED8;
extern const f32 lbl_805DC230;
extern const f32 lbl_805DC234;
extern const f32 lbl_805DC238;
extern const f32 lbl_805DC23C;
extern const f32 lbl_805DC240;
extern const f32 lbl_805DC244;
extern const f32 lbl_805DC248;
extern const f32 lbl_805DC24C;
extern const f32 lbl_805DC250;
extern const f32 lbl_805DC254;

void update_photon_blast(void *arg0) {
    Vec3 sp8;
    s32 temp_r3;
    s32 temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A8) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A8) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1A4) = 1;
        M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
        temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x17C));
        if (temp_r3 != 0) {
            VecCopy__FP3VecPC3Vec(&sp8, temp_r3 + 0x38);
        }
        sp8.y = sp8.y + lbl_805DC230;
        temp_r3 = __nw__7TObjectFUl(0xD0);
        if (temp_r3 != 0U) {
            TPhotonMagicSquare__ct(temp_r3, arg0, 3, &sp8, 0xD2, lbl_805DC234);
        }
    }
    if ((lbl_805DC238 == (f32) M2C_FIELD(arg0, s32 *, 0x1A8)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 1)) {
        TCameraCtrl__sub_801A7310(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
        TObjPlayer__sub_801A7748(arg0, 3);
    }
    M2C_FIELD(arg0, s16 *, 0x198) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv(arg0);
    TBoss1Dragon__sub_80143504(arg0);
    TObjPlayer__sub_801A7680(arg0);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1A8);
    if ((lbl_805DC23C == (f32) temp_r3_2) || (lbl_805DC240 == (f32) temp_r3_2) || (lbl_805DC244 == (f32) temp_r3_2) || (lbl_805DC248 == (f32) temp_r3_2) || (lbl_805DC24C == (f32) temp_r3_2) || (lbl_805DC250 == (f32) temp_r3_2)) {
        TObjPlayer__sub_801ADD10(arg0);
    }
    if (lbl_805DC254 == (f32) M2C_FIELD(arg0, s32 *, 0x1A8)) {
        apply_photon_blast_effects__10TObjPlayerFPv((void *)(arg0));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) != 0) {
        TOTrapAncient01__sub_80226578(0x4002462F, arg0, 0, 0, 0);
    }
}

}
