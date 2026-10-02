#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_f8ef8c { char pad[0x18]; };

struct VObj_18_f8ef8c : VBase_18_f8ef8c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5();
};

#include <stddef.h>
struct VBase_18_f2ea1e { char pad[0x18]; };

struct VObj_18_f2ea1e : VBase_18_f2ea1e {
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
    virtual s32 m19(void *, s32, M2C_UNK, f32);
    virtual f32 m20(void *, f32);
    virtual void m21();
    virtual M2C_UNK m22(void *, s32);
    virtual M2C_UNK m23(void *, f32);
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
    virtual M2C_UNK m73();
};

struct Stack_802E456C {
    u8 sp8;
    u8 sp9;
    u8 pad_A[0x2];
    u8 * spC;
    u8 pad_10[0x4];
    u8 * sp14;
    s32 sp18;
};

typedef struct S_802E451C {
    f32 f0, f4, f8, fC;
    s32 f10;
    u16 f14;
    s16 f16;
    s32 f18;
    f32 f1C, f20;
    s32 f24;
} S_802E451C;

struct VBase_802E3C4C { char pad[0x18]; };
struct VObj_802E3C4C : VBase_802E3C4C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58();
    virtual void m59(u8 *, s32, s32, f32, s32);
};

typedef void (*Cb_802E3C4C)(s32, s32 *, void *);
struct Obj_802E3C4C {
    u8 pad0[0xA8];
    u16 fA8;
    u8 padAA[2];
    s32 fAC;
    u8 padB0[4];
    f32 fB4;
    s32 fB8;
    u8 padBC[0xD0 - 0xBC];
    u8 fD0[0xE4 - 0xD0];
    s32 fE4;
    u8 padE8[0x13C - 0xE8];
    Cb_802E3C4C cb;
};

typedef s32 M2C_UNK;
struct Hit_802E3D8C { s32 pad; void *pos; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 disallow_rendering__7TObjectFv(void *);
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 copy_position__15TEffStarLight2DFPv(int, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
f32 TObjPlayer__sub_8014241C(void *, void *);
void shift_collision_bounds__14TItemAttackColFPv(void *arg0);
s32 has_game_join_id(void *);
s32 TItemAttackCol__sub_802E4918(void *);
void run_task__14TItemAttackColFv(u8 *arg0);
u8 get_field_ed__10TObjPlayerFPv(int);
u32 find_item_by_id(int);
u8 get_slot_count__14TItemProShieldFPv(int);
s32 TObjPlayer__sub_8011C620(void *);
s32 reset_status_block__10TObjPlayerFPv(void *);
s32 apply_camera_shake__10TObjPlayerFiii(int, int, int);
u8 *get_player_by_client_id(s32);
f32 TObjPlayer__sub_801CBF08(int, int);
extern const f32 lbl_805DE914;
extern const f32 lbl_805DE928;
s32 TObjPlayer__sub_802E456C(u8 *arg0, u8 *arg1);
extern const f32 lbl_805DE914;
extern const float lbl_805DE918;
extern const f32 lbl_805DE924;
void TObjPlayer__sub_802E451C(S_802E451C *arg0);
Hit_802E3D8C *csnVector(void *, void *, s32);
void set_flags__10TObjPlayerFPvUi(void *, u32);
M2C_UNK VecCopy__FP3VecPC3Vec(M2C_UNK *, s32);
void TItemAttackCol__sub_802E3D8C(u8 *arg0, void *arg1);
extern const f32 lbl_805DE910;
}

extern "C" {

void TItemAttackCol__vt5(s32 arg0);
void* TObjPlayer__sub_802E449C(void* a0);
void *__dt__14TItemAttackColFv(void *arg0, s16 arg1);
void add_to_active_list__14TItemAttackColFPv(void* a0);
void create__14TItemAttackColFPvPv(void *arg0, void *arg1);
void shift_collision_bounds__14TItemAttackColFPv(void *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(M2C_UNK *, s32);
void *TItemAttackCol__ct(void *, void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(M2C_UNK *, s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);
int fn_802E3BA8(void*, void*);
void queue_destruction__7TObjectFv(void *);

    extern int lbl_805D68E8;
    extern int lbl_805D68EC;
void add_to_active_list__14TItemAttackColFPv(void* a0) { fn_802E3BA8((void*)(lbl_805D68E8), a0); lbl_805D68EC = (lbl_805D68EC + 0x1); }

void shift_collision_bounds__14TItemAttackColFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x104) = (s32) (M2C_FIELD(arg0, s32 *, 0x104) + 0xCCC);
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) (M2C_FIELD(arg0, s32 *, 0x11C) - 0xCCC);
}

void TItemAttackCol__vt4(Obj_802E3C4C *o, s32 *a) {
    if (!(o->fE4 & 0x80)) {
        if (TObjPlayer__sub_802E456C((u8 *)o, (u8 *)a) != 0) {
            if (o->cb != NULL) {
                o->cb(o->fAC, a, o->fD0);
            }
            if (o->fE4 & 0x100) {
                o->fB4 = o->fB4 * lbl_805DE910;
            }
        }
    } else {
        if (o->cb != NULL) {
            o->cb(o->fAC, a, o->fD0);
        }
        if (o->fE4 & 0x200) {
            VObj_802E3C4C *p = (VObj_802E3C4C *)find_item_by_id(o->fAC);
            u8 *b = get_player_by_client_id(o->fA8);
            if (p != NULL) {
                p->m59(b, a[0], o->fB8, o->fB4, a[1]);
            }
        }
    }
}

void TItemAttackCol__vt5(s32 arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0xD0);
    TBoss4Zako__sub_803D8910(&sp8, arg0 + 0x24);
    TItemAttackCol__sub_802E3D8C((u8 *)(arg0), (void *)(&sp8));
}

extern M2C_UNK __vt__14TItemAttackCol[];

typedef void (*Cb_802E3D8C)(s32, void *, void *);
void TItemAttackCol__sub_802E3D8C(u8 *arg0, void *arg1) {
    Hit_802E3D8C *hit;
    Cb_802E3D8C cb;
    hit = csnVector(arg0 + 0x24, arg1, 0x8100);
    if (hit != NULL) {
        set_flags__10TObjPlayerFPvUi(arg0 + 0xE0, 1);
        VecCopy__FP3VecPC3Vec((M2C_UNK *)(arg0 + 0x24), (s32)(hit->pos));
        cb = M2C_FIELD(arg0, Cb_802E3D8C *, 0x138);
        if (cb != NULL) {
            cb(M2C_FIELD(arg0, s32 *, 0xAC), arg0 + 0x24, arg0 + 0xD0);
        }
    } else {
        VecCopy__FP3VecPC3Vec((M2C_UNK *)(arg0 + 0x24), (s32)(arg1));
    }
}

void run_task__14TItemAttackColFv(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    if (has_game_join_id((void *) (arg0)) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        disallow_rendering__7TObjectFv((void *) (arg0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xE4) & 4) {
        shift_collision_bounds__14TItemAttackColFPv((void *) (arg0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xE4) & 0x20) {
        M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) + 0x888);
    }
    ((VObj_18_f8ef8c *)(arg0))->m5();
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x12C);
    if (temp_r3 != 0U) {
        copy_position__15TEffStarLight2DFPv((int) (temp_r3), (void *) (arg0 + 0x24));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x130);
    if (temp_r3_2 != 0U) {
        copy_pos__11TNowLoadingFPvPv((int) (temp_r3_2), (void *) (arg0 + 0x24));
    }
    temp_r3_3 = M2C_FIELD(arg0, u32 *, 0x134);
    if (temp_r3_3 != 0U) {
        copy_pos__11TNowLoadingFPvPv((int) (temp_r3_3), (void *) (arg0 + 0x24));
    }
    temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x140);
    if (temp_r3_4 != 0U) {
        copy_pos__11TNowLoadingFPvPv((int) (temp_r3_4), (void *) (arg0 + 0x24));
    }
    TItemAttackCol__sub_802E4918((void *) (arg0));
    if ((M2C_FIELD(arg0, f32 *, 0xDC) <= TObjPlayer__sub_8014241C((void *) (arg0 + 0x24), (void *) (arg0 + 0xC4))) || (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0xE0), (int) (1)) != 0)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *__dt__14TItemAttackColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemAttackCol;
        if (M2C_FIELD(arg0, void **, 0x12C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x12C)); M2C_FIELD(arg0, M2C_UNK *, 0x12C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x130) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x130)); M2C_FIELD(arg0, M2C_UNK *, 0x130) = 0; }
        if (M2C_FIELD(arg0, void **, 0x134) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x134)); M2C_FIELD(arg0, M2C_UNK *, 0x134) = 0; }
        if (M2C_FIELD(arg0, void **, 0x140) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x140)); M2C_FIELD(arg0, M2C_UNK *, 0x140) = 0; }
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void create__14TItemAttackColFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x144);
    if (o != NULL) {
        TItemAttackCol__ct(o, arg0, arg1);
    }
}

    extern const float lbl_805DE918;
    extern const float lbl_805DE920;
void* TObjPlayer__sub_802E449C(void* a0) { TObjPlayer__sub_802E451C((S_802E451C *)(a0)); *(int*)((char*)a0 + 0x40) = 0; *(int*)((char*)a0 + 0x44) = 0; *(int*)((char*)a0 + 0x48) = 0; *(float*)((char*)a0 + 0x4c) = lbl_805DE918; *(int*)((char*)a0 + 0x50) = 0; *(int*)((char*)a0 + 0x54) = 0; *(int*)((char*)a0 + 0x58) = 0; *(float*)((char*)a0 + 0x5c) = lbl_805DE920; *(float*)((char*)a0 + 0x60) = lbl_805DE918; *(float*)((char*)a0 + 0x64) = lbl_805DE918; *(float*)((char*)a0 + 0x68) = lbl_805DE918; *(float*)((char*)a0 + 0x6c) = lbl_805DE918; *(int*)((char*)a0 + 0x70) = 0; *(int*)((char*)a0 + 0x74) = 0; *(int*)((char*)a0 + 0x78) = -1; *(int*)((char*)a0 + 0x7c) = -1; return a0; }

void TObjPlayer__sub_802E451C(S_802E451C *arg0) {
    arg0->f0 = lbl_805DE914;
    arg0->f4 = lbl_805DE914;
    arg0->f8 = lbl_805DE914;
    arg0->fC = lbl_805DE924;
    arg0->f10 = 1;
    arg0->f14 = 0xFFFF;
    arg0->f16 = -1;
    arg0->f18 = -1;
    arg0->f1C = lbl_805DE914;
    arg0->f20 = (*(const f32 *)&lbl_805DE918);
    arg0->f24 = 0;
}

s32 TObjPlayer__sub_802E456C(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_802E456C, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_802E456C, sp9) == 0x1) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802E456C, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802E456C, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_802E456C, sp18) == 0x10) ? 1 : -1];
    Stack_802E456C stack;
    s32 temp_r31;
    s32 temp_r31_2;
    u8 *temp_r30;
    u8 *temp_r29;
    u32 temp_r28;
    s32 temp_r0;
    f32 var_f31;
    temp_r30 = (u8 *)(M2C_FIELD(arg1, u8 **, 0));
    temp_r29 = (u8 *)(get_player_by_client_id((s32) M2C_FIELD(arg0, u16 *, 0xA8)));
    temp_r28 = find_item_by_id((int) (M2C_FIELD(arg0, s32 *, 0xAC)));
    temp_r31 = M2C_FIELD(M2C_FIELD(arg1, u8 **, 0), s32 *, 0xA4) + (M2C_FIELD(arg1, s32 *, 4) * 0x2C);
    if ((temp_r29 != NULL) && (temp_r28 != 0U) && (((VObj_18_f2ea1e *)(temp_r30))->m19(temp_r29, temp_r31, 0, M2C_FIELD(arg0, f32 *, 0xB0)) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
        var_f31 = lbl_805DE914;
        switch (temp_r0) {
        case 0:
            var_f31 = ((VObj_18_f2ea1e *)(temp_r30))->m20(temp_r29, M2C_FIELD(arg0, f32 *, 0xB4));
            break;
        case 1:
            var_f31 = ((VObj_18_f2ea1e *)(temp_r30))->m20(temp_r29, M2C_FIELD(arg0, f32 *, 0xB4));
            ((VObj_18_f2ea1e *)(temp_r30))->m23(temp_r29, lbl_805DE928 * var_f31);
            break;
        case 2:
            ((VObj_18_f2ea1e *)(temp_r30))->m22(temp_r29, temp_r31);
            break;
        }
        temp_r31_2 = (s32) var_f31;
        TObjPlayer__sub_801CBF08((int) (temp_r29), (int) (temp_r31_2));
        ((VObj_18_f2ea1e *)(temp_r29))->m73();
        apply_camera_shake__10TObjPlayerFiii((int) (temp_r29), (int) (temp_r30), (int) (temp_r31_2));
        reset_status_block__10TObjPlayerFPv((void *) (&stack.sp8));
        stack.sp8 = get_field_ed__10TObjPlayerFPv((int) (temp_r28));
        stack.sp9 = get_slot_count__14TItemProShieldFPv((int) (temp_r28));
        stack.spC = (u8 *)(temp_r29);
        stack.sp14 = (u8 *)(temp_r30);
        stack.sp18 = M2C_FIELD(arg1, s32 *, 4);
        TObjPlayer__sub_8011C620((void *) (&stack.sp8));
        return 1;
    }
    return 0;
}

}
