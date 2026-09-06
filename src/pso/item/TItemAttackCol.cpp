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
M2C_UNK TItemAttackCol__sub_802E3D8C(s32, M2C_UNK *);
int TObjPlayer__sub_802E451C(void);
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

void TItemAttackCol__vt5(s32 arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0xD0);
    TBoss4Zako__sub_803D8910(&sp8, arg0 + 0x24);
    TItemAttackCol__sub_802E3D8C(arg0, &sp8);
}

extern M2C_UNK __vt__14TItemAttackCol[];

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
void* TObjPlayer__sub_802E449C(void* a0) { TObjPlayer__sub_802E451C(); *(int*)((char*)a0 + 0x40) = 0; *(int*)((char*)a0 + 0x44) = 0; *(int*)((char*)a0 + 0x48) = 0; *(float*)((char*)a0 + 0x4c) = lbl_805DE918; *(int*)((char*)a0 + 0x50) = 0; *(int*)((char*)a0 + 0x54) = 0; *(int*)((char*)a0 + 0x58) = 0; *(float*)((char*)a0 + 0x5c) = lbl_805DE920; *(float*)((char*)a0 + 0x60) = lbl_805DE918; *(float*)((char*)a0 + 0x64) = lbl_805DE918; *(float*)((char*)a0 + 0x68) = lbl_805DE918; *(float*)((char*)a0 + 0x6c) = lbl_805DE918; *(int*)((char*)a0 + 0x70) = 0; *(int*)((char*)a0 + 0x74) = 0; *(int*)((char*)a0 + 0x78) = -1; *(int*)((char*)a0 + 0x7c) = -1; return a0; }

}
