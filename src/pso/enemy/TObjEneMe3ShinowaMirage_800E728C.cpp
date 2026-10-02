#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

struct VBase_18_c44252 { char pad[0x18]; };

struct VObj_18_c44252 : VBase_18_c44252 {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

#include <stddef.h>
struct Stack_800E7324 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800E7324_lbl_8043CF94 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec_800E75AC { f32 x; f32 y; f32 z; };

struct Node_800E75AC { u8 pad[0x2c]; void *child; };

struct Obj_800E75AC { u8 pad[0x34]; Node_800E75AC *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

struct Sub_800E750C { f32 f0; u8 pad4[4]; f32 f8; f32 fC; f32 f10; s32 f14; s32 f18; };

struct Obj_800E750C { u8 pad0[0x60]; s32 f60; u8 pad1[0xA4 - 0x64]; Sub_800E750C *fA4; };

struct Obj_800E750C;
struct E_800E728C { u8 pad[0x60]; s32 f60; u8 pad64[0x390 - 0x64]; s32 f390; u8 pad394[0x3AC - 0x394]; f32 f3ac; u8 pad3b0[0x3C4 - 0x3B0]; s32 f3c4; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 fn_800B91F4(void *);
s32 objInBand__FP7GameObjf(void *, f32);
s32 play_sound_effect(s32, u32, s16, s32);
M2C_UNK TObjEneDD__sub_800BA438(void *, void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA608;
extern const f32 lbl_805DA640;
extern const f32 lbl_805DA644;
extern const f32 lbl_805DA648;
void TObjEneMe3ShinowaMirage__sub_800E7378(u8 *arg0);
s32 update_player_state__9TObjEneDDFPv(void *, void *, int);
extern RecoveredGlobal_800E7324_lbl_8043CF94 lbl_8043CF94;
void TObjEneMe3ShinowaMirage__sub_800E7324(u8 *arg0);
s32 push_matrix_from(void *);
void TObjPlayer__sub_803D7B68(s32, f32);
s32 TObjPlayer__sub_803D7CA4(void *);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 pop_matrix();
extern u8 lbl_8058D490[];
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
f32 TObjEneMe3ShinowaMirage__sub_800E75AC(Obj_800E75AC *self);
void fn_8002B630(void *, void *, s32);
void check_enemy_body_collisions(void *, s32, f32, f32);
extern u8 lbl_80495BFC[];
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 lbl_805DA64C;
extern const f32 lbl_805DA650;
u8 TObjEneMe3ShinowaMirage__sub_800E750C(Obj_800E750C *arg0, s32 arg1, f32 farg0);
u8 TObjEneMe3ShinowaMirage__sub_800E750C(Obj_800E750C *arg0, s32 arg1, f32 farg0);
s32 get_stat_by_key_state__10TObjPlayerFPv(int);
extern f32 TObjEneMe3ShinowaMirage__data_805DA5EC;
extern const f32 lbl_805DA638;
extern const f32 lbl_805DA63C;
u8 TObjEneMe3ShinowaMirage__sub_800E728C(E_800E728C *arg0);
}

extern "C" {

s32 check_in_range__23TObjEneMe3ShinowaMirageFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 TObjEneMe3ShinowaMirage__data_805DA5E4;

typedef char RecoveredGlobal_800E7324_lbl_8043CF94_size[sizeof(RecoveredGlobal_800E7324_lbl_8043CF94) == 0xC ? 1 : -1];

u8 TObjEneMe3ShinowaMirage__sub_800E728C(E_800E728C *arg0) {
    s16 mine;
    s32 ret;
    s16 theirs;
    ret = 0;
    if (!(arg0->f3c4 & 0x10000)) {
        if (arg0->f3ac > lbl_805DA638 && arg0->f3ac < lbl_805DA63C) {
            mine = get_stat_by_key_state__10TObjPlayerFPv((int)arg0);
            theirs = get_stat_by_key_state__10TObjPlayerFPv(arg0->f390);
            if (theirs == mine && ((s32 (*)(void *, s32, f32))TObjEneMe3ShinowaMirage__sub_800E750C)(arg0, arg0->f60, arg0->f3ac - TObjEneMe3ShinowaMirage__data_805DA5EC) == 0) {
                ret = 1;
            }
        }
    }
    return (u8)ret;
}

void TObjEneMe3ShinowaMirage__sub_800E7324(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800E7324, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800E7324, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800E7324, sp10) == 0x8) ? 1 : -1];
    Stack_800E7324 stack;
    if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        stack.sp8 = M2C_FIELD(&lbl_8043CF94.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8043CF94.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_8043CF94.value, s32 *, 8);
        update_player_state__9TObjEneDDFPv((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
}

#pragma push
#pragma fp_contract on
void TObjEneMe3ShinowaMirage__sub_800E7378(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    temp_r31 = objInBand__FP7GameObjf(arg0, lbl_805DA640);
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA644) != 0) || (temp_r31 != 0)) {
        if (fn_800B91F4(arg0) != 0) {
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
            if (((VObj_18_c44252 *)(temp_r3))->m18(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC) != 0) {
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                ((VObj_18_c44252 *)(temp_r3_2))->m20(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC);
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                ((VObj_18_c44252 *)(temp_r3_3))->m23(arg0, TObjEneMe3ShinowaMirage__data_805DA608);
                if ((temp_r31 != 0) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= lbl_805DA648)) {
                    TObjEneDD__sub_800BA438((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x390)));
                }
            }
        }
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD13)), (u32) (arg0 + 0x38), 0, 0);
    }
}
#pragma pop

s32 check_in_range__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    f32 f31;

    if (M2C_FIELD(arg0, f32 *, 0x3AC) > TObjEneMe3ShinowaMirage__data_805DA5E4) {
        return 0;
    }
    f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    f31 += M2C_FIELD(arg0, f32 *, 0x3A0) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    return (s32)((u32)__cntlzw(f31 < TBoss8Dragon__sub_803D64DC(0x1E00)) >> 5);
}

u8 TObjEneMe3ShinowaMirage__sub_800E750C(Obj_800E750C *arg0, s32 arg1, f32 farg0) {
    f32 f2 = farg0 * lbl_805DA64C;
    Sub_800E750C *s = arg0->fA4;
    u8 res;
    s32 a = arg0->f60;
    s32 b = s->f18;
    s->f0 = TObjEneMe3ShinowaMirage__data_805DA5B8;
    s->f8 = f2;
    s->fC = f2;
    s->f10 = lbl_805DA650;
    s->f14 = 1;
    s->f18 = 0x9D01;
    arg0->f60 = arg1;
    check_enemy_body_collisions(arg0, arg1, TObjEneMe3ShinowaMirage__data_805DA5B8, f2);
    res = (s->f18 & 0x380000) != 0;
    fn_8002B630(s, lbl_80495BFC, s->f18 & 0x380000);
    s->f18 = b;
    arg0->f60 = a;
    return res;
}

f32 TObjEneMe3ShinowaMirage__sub_800E75AC(Obj_800E75AC *self) {
    Vec_800E75AC v;
    Node_800E75AC *node;
    v.x = TObjEneMe3ShinowaMirage__data_805DA5B8;
    v.y = TObjEneMe3ShinowaMirage__data_805DA5B8;
    v.z = TObjEneMe3ShinowaMirage__data_805DA5B8;
    push_matrix_from(lbl_8058D490);
    TObjPlayer__sub_803D7B68(self->ff8, self->fc0);
    node = self->node;
    TObjPlayer__sub_803D7CA4(node);
    TObjPlayer__sub_803D7CA4(node->child);
    TCameraCtrl__sub_803D8934(0, &v, &v);
    pop_matrix();
    return v.y;
}

}
