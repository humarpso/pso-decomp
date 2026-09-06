#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8009E7C4_8009E474 { char pad[0x18]; };
struct VObj_8009E7C4_8009E474 : Base_8009E7C4_8009E474 {
    virtual void pad_8(); virtual void pad_c(); virtual void pad_10(); virtual void pad_14();
    virtual void pad_18(); virtual void pad_1c(); virtual void pad_20(); virtual void pad_24();
    virtual void pad_28(); virtual void pad_2c(); virtual void pad_30(); virtual void pad_34();
    virtual void pad_38(); virtual void pad_3c(); virtual void pad_40(); virtual void pad_44();
    virtual void pad_48(); virtual void pad_4c(); virtual void pad_50(); virtual void pad_54();
    virtual void pad_58(); virtual void pad_5c(); virtual void pad_60(); virtual void pad_64();
    virtual void pad_68(); virtual void pad_6c(); virtual void pad_70(); virtual void pad_74();
    virtual void pad_78(); virtual void pad_7c(); virtual void pad_80(); virtual void pad_84();
    virtual void pad_88(); virtual void pad_8c(); virtual void pad_90(); virtual void pad_94();
    virtual void pad_98(); virtual void pad_9c(); virtual void pad_a0(); virtual void pad_a4();
    virtual void pad_a8(); virtual void pad_ac(); virtual void pad_b0(); virtual void pad_b4();
    virtual void pad_b8(); virtual void pad_bc(); virtual void pad_c0(); virtual void pad_c4();
    virtual void pad_c8(); virtual void pad_cc(); virtual void pad_d0(); virtual void pad_d4();
    virtual void pad_d8(); virtual void pad_dc(); virtual void pad_e0(); virtual void pad_e4();
    virtual void pad_e8(); virtual void pad_ec(); virtual void pad_f0(); virtual void pad_f4();
    virtual void pad_f8(); virtual void pad_fc(); virtual void pad_100(); virtual void pad_104();
    virtual void pad_108(); virtual void pad_10c(); virtual void pad_110(); virtual void pad_114();
    virtual void pad_118(); virtual void pad_11c(); virtual void pad_120(); virtual void pad_124();
    virtual void pad_128(); virtual void pad_12c(); virtual void pad_130(); virtual void pad_134();
    virtual void pad_138(); virtual void pad_13c(); virtual void pad_140(); virtual void pad_144();
    virtual void pad_148(); virtual void pad_14c(); virtual void pad_150(); virtual void pad_154();
    virtual void pad_158(); virtual void pad_15c(); virtual void pad_160(); virtual void pad_164();
    virtual void pad_168(); virtual void pad_16c(); virtual void pad_170(); virtual void pad_174();
    virtual void pad_178(); virtual void pad_17c(); virtual void pad_180(); virtual void pad_184();
    virtual void pad_188(); virtual void pad_18c(); virtual void pad_190(); virtual void pad_194();
    virtual void pad_198(); virtual void pad_19c(); virtual void pad_1a0(); virtual void pad_1a4();
    virtual void pad_1a8(); virtual void pad_1ac(); virtual void pad_1b0(); virtual void pad_1b4();
    virtual void pad_1b8(); virtual void pad_1bc(); virtual void pad_1c0(); virtual void pad_1c4();
    virtual void pad_1c8(); virtual void pad_1cc();
    virtual s32 m114(s32);
};

extern "C" {
void TObjEneMe1Canadin__sub_8009E930(u8 *arg0);
void TObjEneMe1Canadin__sub_8009E948(u8 *arg0);
s32 TObjEneDD__sub_800BBA18(void * a0, s32 a1);
s32 TObjEneMe1Canadin__vt106(u8 *arg0);
s32 TObjEneDD__sub_800BBA18(void * a0, s32 a1);
void TObjEneMe1Canadin__vt103(u8 *arg0);
extern const f32 lbl_805D991C;
s32 TObjEneMe1Canadin__sub_8009E76C(u8 *arg0);
}

extern "C" {

void TObjEneMe1Canadin__vt105(void);
void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0);
void advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *arg0);
int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p);
s32 check_target__17TObjEneMe1CanadinFPv(void *arg0);
void noop__17TObjEneMe1CanadinFv(void);
void reset_map_core__17TObjEneMe1CanadinFPv(void* p);
int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p);
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0);
void update_move__17TObjEneMe1CanadinFPv(void* p);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int TObjEneDD__vt86(void*);
int TObjEneEpsilon__sub_800B96A4(void*);
int TObjEneMe1Canadin__sub_8009E3E4(void*);
s32 TObjEneMe1Canadin__sub_8009E860(void *, f32 *, f32);
void *TPhotonMylla__sub_80154CB4(u16);
int copy_vec4__13TRaderMapCoreFPvPv(void*);
int fn_800B9194(void*);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
int update_angle__17TObjEneMe1CanadinFPv(void*);
int update_velocity__9TObjEneDDFPv(void*);

void reset_map_core__17TObjEneMe1CanadinFPv(void* p) { copy_vec4__13TRaderMapCoreFPvPv((char*)p + 0x4a4); TObjEneMe1Canadin__sub_8009E3E4(p); }

int select_and_apply_target__17TObjEneMe1CanadinFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

void noop__17TObjEneMe1CanadinFv(void) {  }
s32 try_trigger_action__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
        TObjEneDD__sub_800BBA18(arg0, 0xE);
        return 1;
    }
    return 0;
}

s32 TObjEneMe1Canadin__vt106(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C8);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r4 & 0xFFFFFFDF);
        TObjEneDD__sub_800BBA18((void *)((void *)(arg0)), (s32)((int) (0xA)));
        M2C_FIELD(arg0, s32 *, 0x40C) = 0;
        return 1;
    }
    if (temp_r4 & 0x40) {
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r4 & 0xFFFFFFBF);
        TObjEneDD__sub_800BBA18((void *)((void *)(arg0)), (s32)((int) (0xB)));
        return 1;
    }
    return 0;
}

void TObjEneMe1Canadin__vt105(void) {  }

s32 TObjEneMe1Canadin__sub_8009E76C(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3F4) < lbl_805D991C;
}

void advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3FC) == 5) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 4;
    }
}

void advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3FC) == 4) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, s32 *, 0x3FC) = 5;
    }
}

extern const f32 lbl_805D98E4;
extern const f32 lbl_805D9920;

s32 check_target__17TObjEneMe1CanadinFPv(void *arg0) {
    f32 sp8;
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    if (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805D98E4) {
        var_r31 = 1;
        M2C_FIELD(arg0, void **, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x4C8));
        temp_r3 = M2C_FIELD(arg0, void **, 0x3C0);
        if ((((VObj_8009E7C4_8009E474 *)temp_r3)->m114(M2C_FIELD(arg0, s32 *, 0x390)) == 0) && (TObjEneMe1Canadin__sub_8009E860(arg0, &sp8, lbl_805D9920) != 0) && (sp8 > lbl_805D98E4)) {
            var_r31 = 0;
        }
    }
    return var_r31;
}

void TObjEneMe1Canadin__sub_8009E930(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & ~0x28);
}

void TObjEneMe1Canadin__sub_8009E948(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 0x28);
}

int call_dd_vt86__17TObjEneMe1CanadinFPv(void* p) { return TObjEneDD__vt86(p); }

void TObjEneMe1Canadin__vt103(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x100) {
        TObjEneDD__sub_800BBA18((void *)((void *)(arg0)), (s32)((int) (7)));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) < 2) {
            TObjEneDD__sub_800BBA18((void *)((void *)(arg0)), (s32)((int) (6)));
            M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) + 1);
            return;
        }
        TObjEneDD__sub_800BBA18((void *)((void *)(arg0)), (s32)((int) (7)));
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        return;
    }
    TObjEneDD__sub_800BBA18((void *)((void *)(arg0)), (s32)((int) (6)));
}

void update_move__17TObjEneMe1CanadinFPv(void* p) { if (fn_800B9194(p) != 0) { TObjEneEpsilon__sub_800B96A4(p); update_velocity__9TObjEneDDFPv(p); update_angle__17TObjEneMe1CanadinFPv(p); } }

}
