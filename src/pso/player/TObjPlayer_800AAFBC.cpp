#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800AB970(void);
int TObjPlayer__sub_800AB974(void);
int TObjPlayer__sub_800AB9C0(void);
int TObjPlayer__sub_800ABA0C(void);
int TObjPlayer__sub_800ABA50(void);
void *destroy_with_particle_cleanup__10TObjPlayerFPvs(void *arg0, s16 arg1);
void draw_model_no_fog__10TObjPlayerFPv(u8 *arg0);
s32 get_action_priority__10TObjPlayerFPv(void *arg0);
void update_particle_by_phase__10TObjPlayerFv(void);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

s32 get_action_priority__10TObjPlayerFPv(void *arg0) {
    return (s32)((u32)__cntlzw(3 - M2C_FIELD(arg0, s16 *, 0xAE)) >> 5);
}

extern s32 lbl_805D5094;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9B68;

void draw_model_no_fog__10TObjPlayerFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(lbl_805D5094);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0xF0);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xC0));
    TOMonitorMachine01__sub_803D8B5C(0, lbl_805D9B68, lbl_805D9B68, lbl_805D9B68);
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0xC8));
    TObjPlayer__sub_803D9B78();
}

extern M2C_UNK lbl_80491478[];

void *destroy_with_particle_cleanup__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80491478;
        if (M2C_FIELD(arg0, void **, 0xD0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0)); M2C_FIELD(arg0, M2C_UNK *, 0xD0) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_800AB970(void) {  }

int TObjPlayer__sub_800AB974(void) { return 0; }
int TObjPlayer__sub_800AB9C0(void) { return 0; }
int TObjPlayer__sub_800ABA0C(void) { return 0; }
int TObjPlayer__sub_800ABA50(void) { return 0; }

extern s32 lbl_805D50C4;

void update_particle_by_phase__10TObjPlayerFv(void) {
    switch (lbl_805D50C4) {
    case 0x10:
    case 0x1A:
    case 0x20:
        begin_effect_render__13TParticleCtrlFv();
        break;
    default:
        end_effect_render__13TParticleCtrlFv();
        break;
    }
    lbl_805D50C4 += 1;
}

}
