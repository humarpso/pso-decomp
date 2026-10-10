#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80084C10 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_80084C10_lbl_804393AC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct Stack_80084DD4 {
    f32 sp8;
    f32 spC;
    s8 sp10;
    s8 sp11;
    s8 sp12;
    s8 sp13;
    s32 sp14;
    u8 trailing_storage[0x4];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80084DD4_lbl_8048E640 { M2C_UNK value; u8 remaining[0x30]; };

struct Sprite_80084C64 {
    f32 x;
    f32 y;
    u8 a;
    u8 r;
    u8 g;
    u8 b;
    s32 flags;
    u8 pad14[4];
};

struct Eff_80084C64 {
    u8 pad0[0x38];
    u8 pos[0x30];
    f32 x;
    f32 y;
    f32 alpha;
    u8 pad74[0x10];
    s32 r;
    s32 g;
    s32 b;
    void *sub;
};

extern "C" {
s32 TObjRoomId__sub_80141CF4(void *, void *, int, int, int, void *, f32);
extern RecoveredGlobal_80084C10_lbl_804393AC lbl_804393AC;
extern const f32 lbl_805D9450;
void TEffStarLight2D_Base__sub_80084C10(s32 arg0);
u8 * __ct__15TEffStarLight2DFv(void *, s32, s32, s32);
u8 * construct_world_actor_base(void *);
void * __nw__7TObjectFUl(M2C_UNK, s32);
extern M2C_UNK lbl_8048E640[];
extern void *tl_particle;
u8 *TEffStarLight2D_Base__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
int copy_position__15TEffStarLight2DFPv(void* p);
void copy_from_subobject__15TEffStarLight2DFPvPv(void *, void *);
void sync_sub_sprite__20TEffStarLight2D_BaseFPv(Eff_80084C64 *self);
}

extern "C" {

void *TEffStarLight2D_Base__create(void *arg0, s32 _w1);
void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_particle;

void *TEffStarLight2D_Base__create(void *arg0, s32 _w1) {
    void *o = __nw__7TObjectFUl((M2C_UNK)(0x94), (s32)(_w1));
    if (o != NULL) {
        o = TEffStarLight2D_Base__ct((u8 *)(o), (M2C_UNK)(tl_particle), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_8048E640[];

typedef char RecoveredGlobal_80084C10_lbl_804393AC_size[sizeof(RecoveredGlobal_80084C10_lbl_804393AC) == 0x14 ? 1 : -1];
void TEffStarLight2D_Base__sub_80084C10(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80084C10, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80084C10, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80084C10, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80084C10, sp14) == 0xC) ? 1 : -1];
    Stack_80084C10 stack;
    stack.sp8 = M2C_FIELD(&lbl_804393AC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804393AC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804393AC.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_804393AC.value, s32 *, 0xC);
    TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&stack.sp8), (int) (M2C_FIELD(&lbl_804393AC.value, s32 *, 8)), (int) (M2C_FIELD(&lbl_804393AC.value, s32 *, 4)), (int) (M2C_FIELD(&lbl_804393AC.value, s32 *, 0)), (void *) (&lbl_804393AC.value), (f32) (lbl_805D9450));
}

void sync_sub_sprite__20TEffStarLight2D_BaseFPv(Eff_80084C64 *self) {
    Sprite_80084C64 s;
    if (self->sub == NULL) {
        return;
    }
    ((void (*)(void *, void *))copy_position__15TEffStarLight2DFPv)(self->sub, self->pos);
    s.x = self->x;
    s.y = self->y;
    s.a = self->alpha;
    s.r = (f32)self->r;
    s.g = (f32)self->g;
    s.b = (f32)self->b;
    s.flags = 0;
    copy_from_subobject__15TEffStarLight2DFPvPv(self->sub, &s);
}

void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E640;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x90)); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TEffStarLight2D_Base__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_80084DD4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80084DD4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80084DD4, sp10) == 0x8) ? 1 : -1];
    typedef char sp11_offset[(offsetof(Stack_80084DD4, sp11) == 0x9) ? 1 : -1];
    typedef char sp12_offset[(offsetof(Stack_80084DD4, sp12) == 0xA) ? 1 : -1];
    typedef char sp13_offset[(offsetof(Stack_80084DD4, sp13) == 0xB) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80084DD4, sp14) == 0xC) ? 1 : -1];
    Stack_80084DD4 stack;
    s32 temp_r4;
    u8 *temp_r3;
    u8 *var_r0;
    construct_world_actor_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80084DD4_lbl_8048E640 *)&lbl_8048E640).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x68);
    stack.spC = M2C_FIELD(arg0, f32 *, 0x6C);
    stack.sp10 = (s8) M2C_FIELD(arg0, f32 *, 0x70);
    stack.sp11 = (s8) M2C_FIELD(arg0, s32 *, 0x84);
    stack.sp12 = (s8) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x8C);
    stack.sp13 = (s8) temp_r4;
    stack.sp14 = 0;
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((M2C_UNK)(0x4C), (s32)(temp_r4))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__15TEffStarLight2DFv(temp_r3, (s32) (arg0 + 0x38), (s32) &stack.sp8, (*(s32 *)&tl_particle)));
    }
    M2C_FIELD(arg0, u8 **, 0x90) = var_r0;
    return arg0;
}

}

#include "types.h"

extern "C" {

int copy_position__15TEffStarLight2DFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int copy_position__15TEffStarLight2DFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x2c); }

struct N_800850CC { u8 pad[0xc]; N_800850CC *next; u8 pad10[0x10]; };
struct T_800850CC { u8 pad[0x14]; N_800850CC *head; };
struct S_80084EBC;
struct V2_80084EBC;
void TEffStarLight2D__sub_80084EBC(S_80084EBC *s, V2_80084EBC *p0, V2_80084EBC *p1, V2_80084EBC *p2, V2_80084EBC *p3, s32 i);
void reset_transform_state__10TObjPlayerFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

#pragma opt_propagation off
void render__15TEffStarLight2DFv(T_800850CC *arg0) {
    s32 n = 0;
    N_800850CC *nx;
    N_800850CC *p;

    for (p = arg0->head; p != NULL; p = p->next) {
        if (p != NULL && p->next != NULL) {
            nx = p->next;
            if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 0 &&
                all_parents_unqueued_for_destruction__7TObjectFv(nx) != 0) {
                TEffStarLight2D__sub_80084EBC((S_80084EBC *)arg0, (V2_80084EBC *)((u8 *)p + 0x20), (V2_80084EBC *)((u8 *)p + 0x28), (V2_80084EBC *)((u8 *)nx + 0x28), (V2_80084EBC *)((u8 *)nx + 0x20), n);
                n++;
            }
        }
    }
    reset_transform_state__10TObjPlayerFv();
}
#pragma opt_propagation reset

}
