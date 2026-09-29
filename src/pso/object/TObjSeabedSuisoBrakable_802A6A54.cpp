#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base18 { char pad[0x18]; };

struct VObj : Base18 { virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2(); virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5(); virtual M2C_UNK m6(); virtual M2C_UNK m7(); virtual M2C_UNK m8(f32, f32); };

extern "C" {
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_801FBA6C(s32);
void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0);
M2C_UNK get_instance__23TObjSeabedSuisoBrakableFv(M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK set_npc_enemy_param(M2C_UNK);
M2C_UNK TObjDoor__sub_803DC894(s32, void *, f32);
void TObjSeabedSuisoBrakable__sub_802A6AA4(u8 *arg0);
}

extern "C" {

void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0);
M2C_UNK update_switch_lock__23TObjSeabedSuisoBrakableFPv();
M2C_UNK notify_break__23TObjSeabedSuisoBrakableFPv();

void update_state__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 2:
        notify_break__23TObjSeabedSuisoBrakableFPv();
        return;
    case 3:
        update_switch_lock__23TObjSeabedSuisoBrakableFPv();
    case 0:
        return;
    }
}
void TObjSeabedSuisoBrakable__sub_802A6AA4(u8 *arg0) {
    void *p;
    if (((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        end_effect_render__13TParticleCtrlFv();
        update_state__23TObjSeabedSuisoBrakableFPv(arg0);
        get_instance__23TObjSeabedSuisoBrakableFv(0);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        p = M2C_FIELD(arg0, void **, 0xBC);
        if (p != NULL) {
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), p, M2C_FIELD(arg0, f32 *, 0xB0));
        } else {
            fn_801FBA6C(M2C_FIELD(arg0, s32 *, 0xD4));
        }
        TObjPlayer__sub_803D9B78();
        set_npc_enemy_param(0);
    }
}

}
