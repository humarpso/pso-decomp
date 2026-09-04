#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A_8035F5C8 { char pad[0x18]; };
struct F_V_8035F5C8 : F_A_8035F5C8 {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m87();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m94();
};

extern "C" {

void render_body_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
void update_fade__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss8Dragon__sub_800BB780();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK TObjFish__sub_803E46BC();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_guard_state__19TObjEneEpsilonGuardFPv(void *, s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern M2C_UNK main_task[];
extern s32 lbl_805D6FA0;
extern const f32 lbl_805E0208;
extern const f32 lbl_805E0214;
extern const f32 lbl_805E0218;

void render_body_effect__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f1;

    if (get_mode__11TCameraCtrlFPv(main_task) & 0x200) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9624((int) (0), (f32) (lbl_805E0208), (f32) (lbl_805E0214), (f32) (lbl_805E0208));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4F8);
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (lbl_805E0218), (f32) (temp_f1));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        toggle_particle_effect__10TObjPlayerFv();
        TObjFish__sub_8001EDC4((void *) (lbl_805D6FA0), (int) (4));
        TObjFish__sub_803E46BC();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

void update_fade__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        ((F_V_8035F5C8 *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x10);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r4 & ~0x243);
        set_guard_state__19TObjEneEpsilonGuardFPv(arg0, temp_r4);
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        M2C_FIELD(arg0, u32 *, 0x44C) = -0x22U;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, u32 *, 0x44C) = (u32) (M2C_FIELD(arg0, u32 *, 0x44C) + 0x22);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x44C) > 0xFFU) {
                M2C_FIELD(arg0, u32 *, 0x44C) = 0xFFU;
                M2C_FIELD(arg0, s32 *, 0x4E4) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, u32 *, 0x44C) = (u32) (M2C_FIELD(arg0, u32 *, 0x44C) - 0x22);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x44C) <= 0x22U) {
                M2C_FIELD(arg0, u32 *, 0x44C) = 0U;
                M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
            }
            break;
        default:
            M2C_FIELD(arg0, u32 *, 0x44C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
            break;
        }
        ((F_V_8035F5C8 *) arg0)->m87();
        return;
    case 5:
        TBoss8Dragon__sub_800BB780();
        break;
    }
}

}
