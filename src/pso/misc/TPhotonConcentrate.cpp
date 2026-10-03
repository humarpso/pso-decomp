#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s16 get_model_animation_id__10TObjPlayerFPv(void *);
s16 get_ata__10TObjPlayerFPv(void *);
s16 get_field_2c8__10TObjPlayerFPv(void *);
int activate_d04_slot__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_80113D90(void *);
s16 get_mag_data__10TObjPlayerFPv(void *);
s16 get_hp__10TObjPlayerFPv(void *);
extern const f32 lbl_805DC110;
extern const f32 lbl_805DC114;
extern const f32 lbl_805DC118;
extern const f32 lbl_805DC11C;
extern const f32 lbl_805DC120;
extern const f32 lbl_805DC124;
extern const f32 lbl_805DC128;
extern const f32 lbl_805DC12C;
f32 TObjPlayer__sub_801A826C(u8 *arg0, s32 arg1, f32 farg0);
}

extern "C" {

u8 *TPhotonConcentrate__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
void *__dt__18TPhotonConcentrateFv(void *arg0, s16 arg1);
void render__18TPhotonConcentrateFv(void);
s32 create_particle_emitter(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801569F4(s32, s32);
s32 find_entity_by_id(s32, f32);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
int begin_effect_render__13TParticleCtrlFv(void);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
int end_effect_render__13TParticleCtrlFv(void);
void queue_destruction__7TObjectFv(void *);

void render__18TPhotonConcentrateFv(void) { begin_effect_render__13TParticleCtrlFv(); end_effect_render__13TParticleCtrlFv(); }

extern M2C_UNK __vt__18TPhotonConcentrate[];

void *__dt__18TPhotonConcentrateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TPhotonConcentrate;
        if (M2C_FIELD(arg0, void **, 0xF8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8)); M2C_FIELD(arg0, M2C_UNK *, 0xF8) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TPhotonConcentrate[];
extern s32 lbl_805D34D0;

u8 *TPhotonConcentrate__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;

    TObjPlayer__sub_801569F4((s32)arg0, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TPhotonConcentrate;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D34D0;
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, VecCopy__FP3VecPC3Vec(arg0 + 0xB8, arg1));
    VecCopy__FP3VecPC3Vec(arg0 + 0xD0, arg1 + 0xC);
    VecCopy__FP3VecPC3Vec(arg0 + 0xC4, arg1 + 0x18);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) * M2C_FIELD(arg1, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (M2C_FIELD(arg0, f32 *, 0xC8) * M2C_FIELD(arg1, f32 *, 0x28));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (temp_f1 * M2C_FIELD(arg1, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0xFC) = find_entity_by_id(arg3, temp_f1);
    M2C_FIELD(arg0, s32 *, 0xF8) = create_particle_emitter(arg0 + 0xB8, 0x135);
    return arg0;
}
#pragma push
#pragma fp_contract on
f32 TObjPlayer__sub_801A826C(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f30;
    void *mag;
    var_f30 = lbl_805DC110;
    if (*(u8 **)(arg0 + 0x38) != NULL) {
        mag = (void *)activate_d04_slot__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38));
        if (mag != 0) {
            switch (arg1) {
            case 0:
                var_f30 = farg0 + ((lbl_805DC114 * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC118 * (f32)(TObjPlayer__sub_80113D90(mag) * (get_field_2c8__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) + get_model_animation_id__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)))));
                break;
            case 1:
                var_f30 = farg0 + ((lbl_805DC11C * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC120 * (f32)(get_hp__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) * TObjPlayer__sub_80113D90(mag)));
                break;
            case 2:
                var_f30 = farg0 + ((lbl_805DC124 * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC128 * (f32)(TObjPlayer__sub_80113D90(mag) * (get_field_2c8__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) + get_model_animation_id__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)))));
                break;
            case 3:
                var_f30 = farg0 + ((lbl_805DC124 * (f32)get_mag_data__10TObjPlayerFPv(mag)) + lbl_805DC128 * (f32)(get_ata__10TObjPlayerFPv(*(u8 **)(arg0 + 0x38)) * TObjPlayer__sub_80113D90(mag)));
                break;
            case 4:
                var_f30 = (lbl_805DC12C * (f32)get_mag_data__10TObjPlayerFPv(mag)) + farg0;
                break;
            case 5:
                var_f30 = 0.1f * (f32)get_mag_data__10TObjPlayerFPv(mag);
                if (var_f30 >= 20.0f) {
                    var_f30 = 20.0f;
                }
                break;
            }
        }
    }
    return var_f30;
}
#pragma pop

}
