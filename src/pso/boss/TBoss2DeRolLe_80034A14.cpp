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

struct Stack_80034AC8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80034AC8_lbl_804359CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec3_80034B60 { f32 x, y, z; };

struct Obj_80034B60 { u8 pad0[0x34]; s32 f34; u8 pad1[0xC0 - 0x38]; f32 fC0; u8 pad2[0xF8 - 0xC4]; s32 fF8; };

struct Base_80034E90 { char pad[0x18]; };

struct Obj_80034E90 : Base_80034E90 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85(s32, s32);
    u8 pad1c[0x1C - 0x1C];
};

struct Pkt8_80034E90 { u8 hdr[2]; u16 a; s16 b; s16 c; };

struct Pkt16_80034E90 { u8 hdr[2]; u16 a; s16 b; s16 c; s32 d; };

struct Fld_80034E90 { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x38C - 0x1E]; u16 f38C; u8 pad2[0x3D4 - 0x38E]; s32 f3D4; };

extern "C" {
f32 TBoss2DeRolLe__sub_80034CEC(void);
f32 TBoss2DeRolLe__sub_80034CF8(void);
extern u8 *TBoss2DeRolLe__instance;
void TBoss2DeRolLe__sub_80034DCC(s32 arg0);
extern f32 TBoss2DeRolLe__data_805D82BC;
void TBoss2DeRolLe__sub_80034D58(u8 *arg0, u8 *arg1);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK update_local_colliders_from_world(s32, Vec *);
void TBoss2DeRolLe__sub_80034F40(s32 arg0);
int play_sound(void *, int);
void spawn_offset_particle__13TBoss2DeRolLeFiff(s32, f32, f32);
void set_flags_play_sound__13TBoss2DeRolLeFPv(void *);
void clear_attack_receipts(void *);
extern const f32 TBoss2DeRolLe__data_805D82A0;
extern const f32 lbl_805D8448;
void apply_damage_taken__13TBoss2DeRolLeFPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
extern RecoveredGlobal_80034C90_lbl_8043567C lbl_8043567C;
extern const f32 TBoss2DeRolLe__data_805D827C;
void set_position_index__13TBoss2DeRolLeFPvi(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 subtract_vector(void *, void *);
extern RecoveredGlobal_80034C90_lbl_8043567C lbl_8043567C;
void set_move_target_point__13TBoss2DeRolLeFPvi(u8 *arg0, s32 arg1);
s32 bind_motion_context(int, f32);
s32 compose_motion_node_matrix(int);
s32 matrix_mult_vec(int, void *, void *);
s32 set_matrix_identity__10TObjPlayerFPv(int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
extern const RecoveredGlobal_80034AC8_lbl_804359CC lbl_804359CC;
extern const f32 TBoss2DeRolLe__data_805D827C;
void get_node_world_pos__13TBoss2DeRolLeFPvPv(u8 *arg0, u8 *arg1);
s32 bind_motion_context(int, f32);
s32 compose_motion_node_matrix(int);
s32 matrix_mult_vec(int, void *, void *);
s32 scale_matrix(int, f32, f32, f32);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern u8 lbl_8058D490[];
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D82A0;
f32 calc_node_height__13TBoss2DeRolLeFPv(Obj_80034B60 *self);
s32 reload_stats_keep_hp_tp__9TObjEneDDFPv(void *, s32, s32, s32);
extern s32 lbl_804FE300[];
extern s32 TBoss2DeRolLe__data_805D4B98[2];
extern s32 TBoss2DeRolLe__data_805D4B9C[2];
void reload_stats_for_phase__13TBoss2DeRolLeFPvi(void *self, s32 kind);
s32 send_6x13__13TBoss2DeRolLeFPv(void *);
s32 TBoss2DeRolLe__sub_80036358(void *);
s32 update_and_send__13TBoss2DeRolLeFPv(void *);
s32 TBoss2DeRolLe__sub_800363A0(void *);
void set_state_and_send__13TBoss2DeRolLeFPvi(Obj_80034E90 *self, s32 kind);
}

extern "C" {

void TBoss2DeRolLe__sub_80034FD8(void);
s32 TBoss2Joint_get_shell_max_hp(void);
void backup_pos__13TBoss2DeRolLeFi(s32 arg0);
void emit_effect_and_step__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void init_head_params__13TBoss2DeRolLeFPv(u8 *arg0);
void set_move_direction__13TBoss2DeRolLeFPv(void *arg0);
void update_angle__13TBoss2DeRolLeFPv(void *arg0);
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

extern const f32 TBoss2DeRolLe__data_805D827C;
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

typedef char RecoveredGlobal_80034AC8_lbl_804359CC_size[sizeof(RecoveredGlobal_80034AC8_lbl_804359CC) == 0xC ? 1 : -1];
void get_node_world_pos__13TBoss2DeRolLeFPvPv(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_80034AC8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80034AC8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80034AC8, sp10) == 0x8) ? 1 : -1];
    Stack_80034AC8 stack;
    M2C_FIELD(arg1, f32 *, 0) = (f32) (*(const f32 *)&TBoss2DeRolLe__data_805D827C);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (*(const f32 *)&TBoss2DeRolLe__data_805D827C);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (*(const f32 *)&TBoss2DeRolLe__data_805D827C);
    push_matrix();
    set_matrix_identity__10TObjPlayerFPv((int) (0));
    stack.sp8 = M2C_FIELD(&lbl_804359CC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804359CC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804359CC.value, s32 *, 8);
    scale_current_matrix((void *) (&stack.sp8));
    bind_motion_context((int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    compose_motion_node_matrix((int) (M2C_FIELD(arg0, s32 *, 0x34)));
    matrix_mult_vec((int) (0), (void *) (arg1), (void *) (arg1));
    pop_matrix();
}

f32 calc_node_height__13TBoss2DeRolLeFPv(Obj_80034B60 *self) {
    Vec3_80034B60 v;
    v.x = TBoss2DeRolLe__data_805D827C;
    v.y = TBoss2DeRolLe__data_805D827C;
    v.z = TBoss2DeRolLe__data_805D827C;
    push_matrix_from(lbl_8058D490);
    scale_matrix(0, TBoss2DeRolLe__data_805D82A0, TBoss2DeRolLe__data_805D82A0, TBoss2DeRolLe__data_805D82A0);
    bind_motion_context(self->fF8, self->fC0);
    compose_motion_node_matrix(self->f34);
    matrix_mult_vec(0, &v, &v);
    pop_matrix();
    return v.y;
}

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
void set_move_target_point__13TBoss2DeRolLeFPvi(u8 *arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec((s32)((void *) (arg0 + 0x394)), (s32)((void *) ((u8 *)&(*(RecoveredGlobal_80034C2C_lbl_8043567C *)&lbl_8043567C).value + (arg1 * 0xC))));
    VecCopy__FP3VecPC3Vec((s32)((void *) (arg0 + 0x3A0)), (s32)((void *) (arg0 + 0x394)));
    subtract_vector((void *) (arg0 + 0x3A0), (void *) (arg0 + 0x38));
    ((RecoveredFields_80034C2C_arg0 *)arg0)->field_3AC = clamp_velocity__15TObjBoss2TunnelFPv((void *) (arg0 + 0x3A0));
}
#pragma pop

void set_position_index__13TBoss2DeRolLeFPvi(u8 *arg0, s32 arg1) {
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
    reload_stats_for_phase__13TBoss2DeRolLeFPvi((void *)(arg0), (s32)(2));
    emit_effect__9TObjEneDDFPvii(arg0, arg1, lbl_804356AC);
    ((void (*)(void *, void *))reload_stats_for_phase__13TBoss2DeRolLeFPvi)(arg0, M2C_FIELD(arg0, void **, 0x3C4));
}

void TBoss2DeRolLe__sub_80034D58(u8 *arg0, u8 *arg1) {
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg1, u8 **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x04000000);
        reload_stats_for_phase__13TBoss2DeRolLeFPvi((void *)((void *)arg0), (s32)(1));
        ((VObj18 *)arg1)->m20(arg0, TBoss2DeRolLe__data_805D82BC);
        reload_stats_for_phase__13TBoss2DeRolLeFPvi((void *)((void *) (arg0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x3C4))));
    }
}

void TBoss2DeRolLe__sub_80034DCC(s32 arg0) {
    if ((void *) TBoss2DeRolLe__instance != NULL) {
        TBoss2DeRolLe__sub_80034D58((u8 *)(TBoss2DeRolLe__instance), (u8 *)(arg0));
    }
}

void reload_stats_for_phase__13TBoss2DeRolLeFPvi(void *self, s32 kind) {
    s32 a;
    s32 i;
    s32 b;
    switch (kind) {
    case 0:
    default:
        a = 0;
        i = 0;
        b = 0;
        break;
    case 1:
        a = 0;
        i = 1;
        b = 0;
        break;
    case 2:
        a = 0;
        i = 2;
        b = 0;
        break;
    }
    reload_stats_keep_hp_tp__9TObjEneDDFPv(self, TBoss2DeRolLe__data_805D4B98[a], lbl_804FE300[i], TBoss2DeRolLe__data_805D4B9C[b]);
}

void set_state_and_send__13TBoss2DeRolLeFPvi(Obj_80034E90 *self, s32 kind) {
    Pkt16_80034E90 p16;
    Pkt8_80034E90 p8;
    Fld_80034E90 *f = (Fld_80034E90 *)self;
    self->m85(kind, 6);
    if (kind == 0x19 || (u32)(kind - 0x14) <= 1U || kind == 0x1B) {
        TBoss2DeRolLe__sub_800363A0(&p16);
        p16.a = f->f1C;
        p16.b = kind;
        p16.c = f->f3D4;
        p16.d = f->f38C;
        update_and_send__13TBoss2DeRolLeFPv(&p16);
        return;
    }
    TBoss2DeRolLe__sub_80036358(&p8);
    p8.a = f->f1C;
    p8.b = kind;
    p8.c = f->f3D4;
    send_6x13__13TBoss2DeRolLeFPv(&p8);
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
    update_local_colliders_from_world(arg0, &sp8);
}
#pragma pop

void backup_pos__13TBoss2DeRolLeFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss2DeRolLe__sub_80034FD8(void) {  }
void apply_damage_taken__13TBoss2DeRolLeFPv(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x2B8) - M2C_FIELD(arg0, s16 *, 0x32C);
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 8) {
        M2C_FIELD(arg0, s32 *, 0x6AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6AC) - temp_r4);
        spawn_offset_particle__13TBoss2DeRolLeFiff(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, TBoss2DeRolLe__data_805D82A0, lbl_805D8448);
        play_sound((void *)0x4003A80F, (s32) (arg0 + 0x518));
    } else {
        M2C_FIELD(arg0, s32 *, 0x6B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x6B0) - temp_r4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6B0) < 0) {
            M2C_FIELD(arg0, s32 *, 0x6B0) = 0;
            set_flags_play_sound__13TBoss2DeRolLeFPv(arg0);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    clear_attack_receipts(arg0);
}

}
