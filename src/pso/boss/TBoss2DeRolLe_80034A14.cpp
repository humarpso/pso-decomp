#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(void *, f32);
};

typedef struct Vec { float x, y, z; } Vec;

struct RecoveredGlobal_80034C90_lbl_8043567C {
    M2C_UNK value;
    u8 remaining[0x2C];
};

#include <stddef.h>
struct RecoveredGlobal_80034C2C_lbl_8043567C {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredFields_80034C2C_arg0 {
    u8 unknown_0[0x3AC];
    f32 field_3AC;
};

extern "C" {
f32 TBoss2DeRolLe__sub_80034CEC(void);
f32 TBoss2DeRolLe__sub_80034CF8(void);
extern u8 *TBoss2DeRolLe__data_805D4BC4;
void TBoss2DeRolLe__sub_80034DCC(s32 arg0);
void TBoss2DeRolLe__sub_80034E00(void *, int);
extern f32 TBoss2DeRolLe__data_805D82BC;
void TBoss2DeRolLe__sub_80034D58(u8 *arg0, u8 *arg1);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK TObjEneDD__sub_800BAA2C(s32, Vec *);
void TBoss2DeRolLe__sub_80034F40(s32 arg0);
int play_sound(void *, int);
void TBoss2DeRolLe__sub_800339BC(s32, f32, f32);
void set_flags_play_sound__13TBoss2DeRolLeFPv(void *);
void TBoss8Dragon__sub_800BB780(void *);
extern const f32 TBoss2DeRolLe__data_805D82A0;
extern const f32 lbl_805D8448;
void TBoss2DeRolLe__sub_80034FDC(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
extern RecoveredGlobal_80034C90_lbl_8043567C lbl_8043567C;
extern f32 TBoss2DeRolLe__data_805D827C;
void TBoss2DeRolLe__sub_80034C90(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_80034C90_lbl_8043567C lbl_8043567C;
void TBoss2DeRolLe__sub_80034C2C(u8 *arg0, s32 arg1);
}

extern "C" {

void TBoss2DeRolLe__sub_80034FD8(void);
s32 TBoss2Joint_get_shell_max_hp(void);
void backup_pos__13TBoss2DeRolLeFi(s32 arg0);
void emit_effect_and_step__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void init_head_params__13TBoss2DeRolLeFPv(u8 *arg0);
void set_move_direction__13TBoss2DeRolLeFPv(void *arg0);
void update_angle__13TBoss2DeRolLeFPv(void *arg0);
void TBoss2DeRolLe__sub_80034E00(void *, int);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
void emit_effect__9TObjEneDDFPvii(void *, void *, void *);
f32 get_random_float__8TObjFishFv(f32);
M2C_UNK init_params__13TBoss2DeRolLeFPvfff(void *, f32, f32, f32);

extern const f32 TBoss2DeRolLe__data_805D82D8;
extern const f32 TBoss2DeRolLe__data_805D82E8;
extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8330;

void init_head_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(-M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x684, TBoss2DeRolLe__data_805D82D8, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D82E8 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8330);
}

extern f32 TBoss2DeRolLe__data_805D827C;
extern f32 lbl_805D8284;
extern f32 lbl_805D8444;

void update_angle__13TBoss2DeRolLeFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6A4);
    if (temp_f2 > lbl_805D8284) {
        M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) (temp_f2 - lbl_805D8284);
        return;
    }
    if (temp_f2 < lbl_805D8444) {
        M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) (temp_f2 + lbl_805D8284);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) TBoss2DeRolLe__data_805D827C;
}

extern const f32 TBoss2DeRolLe__data_805D82B4;
extern const f32 lbl_805D82C0;
extern const f32 TBoss2DeRolLe__data_805D82E4;
extern const f32 TBoss2DeRolLe__data_805D82FC;

void set_move_direction__13TBoss2DeRolLeFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x654) == 0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D82C0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0x500;
    } else {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) TBoss2DeRolLe__data_805D82B4;
        M2C_FIELD(arg0, s32 *, 0x64) = -0x500;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) TBoss2DeRolLe__data_805D82E4;
    M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) TBoss2DeRolLe__data_805D82FC;
}

extern u8 *TBoss2DeRolLe__data_805D4BA0;

typedef char RecoveredGlobal_80034C90_lbl_8043567C_size[sizeof(RecoveredGlobal_80034C90_lbl_8043567C) == 0x30 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80034C2C_lbl_8043567C_size[sizeof(RecoveredGlobal_80034C2C_lbl_8043567C) == 0x30 ? 1 : -1];
typedef char RecoveredFields_80034C2C_arg0_3AC_offset[offsetof(RecoveredFields_80034C2C_arg0, field_3AC) == 0x3AC ? 1 : -1];
void TBoss2DeRolLe__sub_80034C2C(u8 *arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec((s32)((void *) (arg0 + 0x394)), (s32)((void *) ((u8 *)&(*(RecoveredGlobal_80034C2C_lbl_8043567C *)&lbl_8043567C).value + (arg1 * 0xC))));
    VecCopy__FP3VecPC3Vec((s32)((void *) (arg0 + 0x3A0)), (s32)((void *) (arg0 + 0x394)));
    TBoss6Type1__sub_803D9370((void *) (arg0 + 0x3A0), (void *) (arg0 + 0x38));
    ((RecoveredFields_80034C2C_arg0 *)arg0)->field_3AC = clamp_velocity__15TObjBoss2TunnelFPv((void *) (arg0 + 0x3A0));
}
#pragma pop

void TBoss2DeRolLe__sub_80034C90(u8 *arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec((s32)(arg0 + 0x38), (s32)((u8 *)&lbl_8043567C.value + (arg1 * 0xC)));
    M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) (*(const f32 *)&TBoss2DeRolLe__data_805D827C);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
}

s32 TBoss2Joint_get_shell_max_hp(void) {
    return M2C_FIELD(TBoss2DeRolLe__data_805D4BA0, s32 *, 0x1C);
}

extern M2C_UNK lbl_804356AC[];

f32 TBoss2DeRolLe__sub_80034CEC(void) {
    return M2C_FIELD(TBoss2DeRolLe__data_805D4BA0, f32 *, 8);
}

f32 TBoss2DeRolLe__sub_80034CF8(void) {
    return M2C_FIELD(TBoss2DeRolLe__data_805D4BA0, f32 *, 4);
}

void emit_effect_and_step__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    TBoss2DeRolLe__sub_80034E00(arg0, 2);
    emit_effect__9TObjEneDDFPvii(arg0, arg1, lbl_804356AC);
    ((void (*)(void *, void *))TBoss2DeRolLe__sub_80034E00)(arg0, M2C_FIELD(arg0, void **, 0x3C4));
}

void TBoss2DeRolLe__sub_80034D58(u8 *arg0, u8 *arg1) {
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg1, u8 **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x04000000);
        TBoss2DeRolLe__sub_80034E00((void *)arg0, 1);
        ((VObj18 *)arg1)->m20(arg0, TBoss2DeRolLe__data_805D82BC);
        TBoss2DeRolLe__sub_80034E00((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x3C4)));
    }
}

void TBoss2DeRolLe__sub_80034DCC(s32 arg0) {
    if ((void *) TBoss2DeRolLe__data_805D4BC4 != NULL) {
        TBoss2DeRolLe__sub_80034D58((u8 *)(TBoss2DeRolLe__data_805D4BC4), (u8 *)(arg0));
    }
}

#pragma push
#pragma fp_contract on
void TBoss2DeRolLe__sub_80034F40(s32 arg0) {
    Vec sp20;
    Vec sp14;
    Vec sp8;
    VecCopy__FP3VecPC3Vec((s32)(&sp8), (s32)(arg0 + 0x440));
    VecCopy__FP3VecPC3Vec((s32)(&sp14), (s32)(arg0 + 0x500));
    VecCopy__FP3VecPC3Vec((s32)(&sp20), (s32)(arg0 + 0x50C));
    TObjEneDD__sub_800BAA2C(arg0, &sp8);
}
#pragma pop

void backup_pos__13TBoss2DeRolLeFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss2DeRolLe__sub_80034FD8(void) {  }
void TBoss2DeRolLe__sub_80034FDC(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x2B8) - M2C_FIELD(arg0, s16 *, 0x32C);
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 8) {
        M2C_FIELD(arg0, s32 *, 0x6AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6AC) - temp_r4);
        TBoss2DeRolLe__sub_800339BC(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, TBoss2DeRolLe__data_805D82A0, lbl_805D8448);
        play_sound((void *)0x4003A80F, (s32) (arg0 + 0x518));
    } else {
        M2C_FIELD(arg0, s32 *, 0x6B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x6B0) - temp_r4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6B0) < 0) {
            M2C_FIELD(arg0, s32 *, 0x6B0) = 0;
            set_flags_play_sound__13TBoss2DeRolLeFPv(arg0);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    TBoss8Dragon__sub_800BB780(arg0);
}

}
