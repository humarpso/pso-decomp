#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802CE68C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_802CE68C_lbl_804724A8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802CE68C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Vec_802CE740 { s32 a, b, c; };

struct VBase_802CE740 { char pad[0x18]; };

struct VObj_802CE740 : VBase_802CE740 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern RecoveredGlobal_802CE68C_lbl_804724A8 lbl_804724A8;
extern RecoveredGlobal_802CE68C_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D5678;
void TObjPlayer__sub_802CE68C(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, Vec_802CE740 *, int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801417E8();
M2C_UNK TObjPlayer__sub_80141820(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
extern Vec_802CE740 lbl_8047249C;
extern const f32 lbl_805DE700;
extern const f32 lbl_805DE704;
void TObjPlayer__sub_802CE740(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_802CE68C_lbl_804724A8_size[sizeof(RecoveredGlobal_802CE68C_lbl_804724A8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_802CE68C_lbl_8058D490_size[sizeof(RecoveredGlobal_802CE68C_lbl_8058D490) == 0x30 ? 1 : -1];
void TObjPlayer__sub_802CE68C(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_802CE68C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802CE68C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802CE68C, sp10) == 0x8) ? 1 : -1];
    Stack_802CE68C stack;
    set_global_flag__10TObjPlayerFv();
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_global_flag__10TObjPlayerFv();
    render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D97F0((void *) (lbl_805D5678 + (arg2 * 0x30)));
    stack.sp8 = M2C_FIELD(&lbl_804724A8.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804724A8.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804724A8.value, s32 *, 8);
    TCameraCtrl__sub_803D8934((int) (0), (void *) (&stack.sp8), (void *) (arg1));
    TObjPlayer__sub_803D9B78();
    clear_global_state__10TObjPlayerFv();
}
void TObjPlayer__sub_802CE740(u8 *arg0) {
    s32 s0;
    s32 s1;
    s32 s2;
    if (((VObj_802CE740 *) arg0)->m8(lbl_805DE700, lbl_805DE704) != 0) {
        Vec_802CE740 v = lbl_8047249C;
        update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        switch (M2C_FIELD(arg0, s32 *, 0x368)) {
        case 1:
            s0 = (*M2C_FIELD(arg0, s32 ***, 0x24))[2];
            s1 = (*M2C_FIELD(arg0, s32 ***, 0x24))[5];
            s2 = (*M2C_FIELD(arg0, s32 ***, 0x24))[8];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[2] = (*M2C_FIELD(arg0, s32 ***, 0x24))[11];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[5] = (*M2C_FIELD(arg0, s32 ***, 0x24))[14];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[8] = (*M2C_FIELD(arg0, s32 ***, 0x24))[17];
            break;
        case 2:
            s0 = (*M2C_FIELD(arg0, s32 ***, 0x24))[2];
            s1 = (*M2C_FIELD(arg0, s32 ***, 0x24))[5];
            s2 = (*M2C_FIELD(arg0, s32 ***, 0x24))[8];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[2] = (*M2C_FIELD(arg0, s32 ***, 0x24))[20];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[5] = (*M2C_FIELD(arg0, s32 ***, 0x24))[23];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[8] = (*M2C_FIELD(arg0, s32 ***, 0x24))[26];
            break;
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_80141820(0);
        TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_801417E8();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        if (M2C_FIELD(arg0, s32 *, 0x368) == 1 || M2C_FIELD(arg0, s32 *, 0x368) == 2) {
            (*M2C_FIELD(arg0, s32 ***, 0x24))[2] = s0;
            (*M2C_FIELD(arg0, s32 ***, 0x24))[5] = s1;
            (*M2C_FIELD(arg0, s32 ***, 0x24))[8] = s2;
        }
    }
}

}
