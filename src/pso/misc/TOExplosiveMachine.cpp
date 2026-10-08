#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base1_80166568 { char pad[0x18]; };
struct VObj1_80166568 : Base1_80166568 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
struct Base_A_801668cc_80166568 { char pad[0x18]; };
struct V_A_801668cc_80166568 : Base_A_801668cc_80166568 {
    virtual void f0();
    virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6();
    virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12();
    virtual void f13();
    virtual void m14();
};

struct RecoveredGlobal_80166614_lbl_804B1AA0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80166614_lbl_804B1AA0_size[sizeof(RecoveredGlobal_80166614_lbl_804B1AA0) == 0x10 ? 1 : -1];

struct O_80166664 { u8 pad[0x18]; void *vt; u8 pad1c[0x9C - 0x1C]; s32 a[2]; s32 b[2]; };

struct O_801666E8 { s32 id; u8 pad4[0x14]; void *vt; u8 pad1c[0x68 - 0x1C]; f32 f68; u8 pad6c[0x90 - 0x6C]; f32 f90; f32 f94; f32 f98; s32 a[2]; s32 b[2]; };

struct VBase_80166778 { char pad[0x18]; };

struct VObj_80166778 : VBase_80166778 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual M2C_UNK m12();
};

struct VBase_80166814 { char pad[0x18]; };

struct VObj_80166814 : VBase_80166814 {
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
    virtual M2C_UNK m13();
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80166614_lbl_804B1AA0 lbl_804B1AA0;
extern u32 lbl_805D59A8;
void TOExplosiveMachine__sub_80166614(void);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void __dl__7TObjectFPv(void *);
extern char __vt__18TOExplosiveMachine[];
O_80166664 *__dt__18TOExplosiveMachineFv(O_80166664 *arg0, s16 arg1);
void TPhotonMagicSquare__sub_801A2640(void *, s32);
extern char __vt__18TOExplosiveMachine[];
extern s32 lbl_805D2FB4;
extern s32 tl_05;
extern const f32 lbl_805DB5F0;
extern const f32 lbl_805DB5F4;
extern const f32 lbl_805DB5F8;
O_801666E8 *TOExplosiveMachine__ct(O_801666E8 *arg0);
s32 is_any_player_within_radius_xz(f32);
u8 is_current_floor_switch_set(u16);
extern const f32 lbl_805DB600;
M2C_UNK check_trigger__18TOExplosiveMachineFPv(void *arg0);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
u8 is_current_floor_switch_set(u16);
extern const f32 lbl_805DB604;
M2C_UNK update_trigger__18TOExplosiveMachineFPv(void *arg0);
}

extern "C" {

void destroy_static_lobby__18TOExplosiveMachineFv(void);
void explode__18TOExplosiveMachineFPv(u8 *arg0);
void update__18TOExplosiveMachineFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void explode__18TOExplosiveMachineFPv(u8 *arg0) {
    VObj1_80166568 *self = (VObj1_80166568 *)arg0;
    if (self->m8(M2C_FIELD(arg0, f32 *, 0x90), M2C_FIELD(arg0, f32 *, 0x94)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x34));
        pop_matrix();
    }
}

extern u32 lbl_805D59A8;

void destroy_static_lobby__18TOExplosiveMachineFv(void) {
    if ((u32) lbl_805D59A8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D59A8, 1);
        lbl_805D59A8 = 0U;
    }
}

extern const f32 lbl_805DB608;

void TOExplosiveMachine__sub_80166614(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B1AA0.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D59A8) = var_r0;
}

O_80166664 *__dt__18TOExplosiveMachineFv(O_80166664 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = __vt__18TOExplosiveMachine;
        for (i = 0; i < 2; i++) {
            arg0->a[i] = 0;
            arg0->b[i] = 0;
        }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

O_801666E8 *TOExplosiveMachine__ct(O_801666E8 *arg0) {
    s32 i;
    TPhotonMagicSquare__sub_801A2640(arg0, tl_05);
    arg0->vt = __vt__18TOExplosiveMachine;
    arg0->id = lbl_805D2FB4;
    arg0->f90 = lbl_805DB5F0;
    arg0->f94 = lbl_805DB5F4;
    arg0->f98 = lbl_805DB5F8 + arg0->f68;
    for (i = 0; i < 2; i++) {
        arg0->a[i] = 0;
        arg0->b[i] = 0;
    }
    return arg0;
}

M2C_UNK check_trigger__18TOExplosiveMachineFPv(void *arg0) {
    switch (M2C_FIELD(arg0, s32 *, 0xC8)) {
    case 0:
        break;
    case 1:
        if (is_any_player_within_radius_xz(lbl_805DB600) == 1) {
            ((VObj_80166778 *)arg0)->m12();
        }
        break;
    case 2:
        if (is_current_floor_switch_set(M2C_FIELD(arg0, s32 *, 0xCC)) == 1) {
            ((VObj_80166778 *)arg0)->m12();
        }
        break;
    }
}

M2C_UNK update_trigger__18TOExplosiveMachineFPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 0:
        break;
    case 1:
        if (is_any_player_within_radius_xz((f32) (lbl_805DB604)) != 1) {
            ((VObj_80166814 *)(arg0))->m13();
        }
        break;
    case 2:
        if (is_current_floor_switch_set(M2C_FIELD(arg0, s32 *, 0xCC)) != 1) {
            ((VObj_80166814 *)(arg0))->m13();
        }
        break;
    }
    play_persistent_sound((int) (0x4004C10F), (void *) (arg0), (void *) ((u8 *)arg0 + 0x38), (int) (0), (int) (0));
}

void update__18TOExplosiveMachineFPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((V_A_801668cc_80166568 *)arg0)->m14();
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        check_trigger__18TOExplosiveMachineFPv((void *)(arg0));
        break;
    case 1:
        update_trigger__18TOExplosiveMachineFPv((void *)(arg0));
        break;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + lbl_805DB608);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (temp_f0 - temp_f1);
    }
}

}
