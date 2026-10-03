#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m77();
};

struct RecoveredGlobal_801889B8_lbl_804B63BC {
    M2C_UNK value;
    u8 remaining[0x158];
};

struct RecoveredGlobal_801889B8___vt__21TObjContainerAbeEnemy {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Obj_80188C8C { u8 pad0[0x38]; u8 pos[0x28]; s32 id; u8 pad1[0x326 - 0x64]; s16 state; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_item__17TObjContainerItemFPvi(void *, void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerBase__vt4(u8 *arg0, s16 *arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void reset_photon_effect__10TObjPlayerFPv(s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * fn_8018A150(void *, s32);
extern RecoveredGlobal_801889B8_lbl_804B63BC lbl_804B63BC;
extern M2C_UNK __vt__21TObjContainerAbeEnemy[];
extern s32 lbl_805D32F8;
u8 *TObjContainerAbeEnemy__ct(u8 *arg0, s32 arg1);
s32 set_global_param__8TObjFishFi(s32);
s32 push_matrix();
s32 post_translate_matrix(void *);
s32 rotate_matrix_y(s32, s32);
void dispatch_fish_event__6TLobbyFPv(void *a0);
void draw_ginja_box_tree(void);
s32 pop_matrix();
extern void *lbl_805D5B88;
extern s32 lbl_805D5B8C;
void TObjContainerBase__vt79(Obj_80188C8C *self);
}

extern "C" {

void TObjContainerAbeEnemy__vt78(void *arg0);
void *TObjContainerBase__create(void *arg0);
void *__dt__21TObjContainerAbeEnemyFv(void *arg0, s16 arg1);
void *TObjContainerBase__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

void TObjContainerAbeEnemy__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    case 1:
        return;
    }
}

extern M2C_UNK __vt__21TObjContainerAbeEnemy[];

void *__dt__21TObjContainerAbeEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjContainerAbeEnemy;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_801889B8_lbl_804B63BC_size[sizeof(RecoveredGlobal_801889B8_lbl_804B63BC) == 0x15C ? 1 : -1];
typedef char RecoveredGlobal_801889B8___vt__21TObjContainerAbeEnemy_size[sizeof(RecoveredGlobal_801889B8___vt__21TObjContainerAbeEnemy) == 0x14C ? 1 : -1];
u8 *TObjContainerAbeEnemy__ct(u8 *arg0, s32 arg1) {
    fn_8018A150(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801889B8___vt__21TObjContainerAbeEnemy *)&__vt__21TObjContainerAbeEnemy).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D32F8;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    init_collision_body_parts(arg0, (s32) &lbl_804B63BC.value, 1);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(&lbl_804B63BC.value, f32 *, 4));
    return arg0;
}

void *TObjContainerBase__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerBase__ct(o, tl_05, arg0);
    }
    return o;
}
void TObjContainerBase__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj_18 *)(arg0))->m77();
            spawn_item__17TObjContainerItemFPvi((void *) (arg0), (void *) (arg0));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}
void TObjContainerBase__vt79(Obj_80188C8C *self) {
    if (lbl_805D5B88 != 0) {
        switch (self->state) {
        case 0:
            set_global_param__8TObjFishFi(lbl_805D5B8C);
            push_matrix();
            post_translate_matrix(self->pos);
            rotate_matrix_y(0, self->id);
            dispatch_fish_event__6TLobbyFPv((void *)2);
            draw_ginja_box_tree();
            pop_matrix();
            break;
        case 1:
            break;
        }
    }
}

}
