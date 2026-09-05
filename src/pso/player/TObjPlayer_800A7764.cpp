#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void set_flags_B0__10TObjPlayerFPvUi(void* p, u32 v);
void TObjPlayer__sub_800A7798(u8 *arg0, f32 farg0);
void set_param__12TObjEneLappyFPvi(void *, s32);
void TObjPlayer__sub_800A7B54(u8 *arg0);
}

extern "C" {

struct A7B00Base_800a7b00_800A7764 { char pad[0x14]; };
struct A7B00Obj_800a7b00_800A7764 : A7B00Base_800a7b00_800A7764 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

s16 TObjPlayer__sub_800A776C(void* p);
int TObjPlayer__sub_800A7774(void* p);
void TObjPlayer__sub_800A77D0(void);
int TObjPlayer__sub_800A77D4(void);
int TObjPlayer__sub_800A7820(void);
int TObjPlayer__sub_800A786C(void);
int TObjPlayer__sub_800A78B8(void);
s16 get_field_2c8__10TObjPlayerFPv(void* p);
void play_hit_sound__10TObjPlayerFi(s32 arg0);
void set_dead_and_check_destroy__10TObjPlayerFPv(u8 *arg0);
void set_flags_B0__10TObjPlayerFPvUi(void* p, u32 v);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
int VecCopy__FP3VecPC3Vec(void*);
f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(s32, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

s16 get_field_2c8__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c8); }
s16 TObjPlayer__sub_800A776C(void* p) { return *(s16*)((char*)p + 0x2ca); }
int TObjPlayer__sub_800A7774(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

void TObjPlayer__sub_800A7798(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
    set_flags_B0__10TObjPlayerFPvUi((void*)(arg0), (u32)(0x100U));
}

void set_flags_B0__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xb0) |= v; }
void TObjPlayer__sub_800A77D0(void) {  }

int TObjPlayer__sub_800A77D4(void) { return 0; }
int TObjPlayer__sub_800A7820(void) { return 0; }
int TObjPlayer__sub_800A786C(void) { return 0; }
int TObjPlayer__sub_800A78B8(void) { return 0; }

extern f32 lbl_805D9AA0;

void play_hit_sound__10TObjPlayerFi(s32 arg0) {
    M2C_UNK temp_r3;
    if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9AA0) {
        temp_r3 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B23B);
        TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
    } else {
        temp_r3 = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B23C);
        TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
    }
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}

void set_dead_and_check_destroy__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x390) = 1;
    if (((A7B00Obj_800a7b00_800A7764*)(arg0 + 0x3A8))->m4() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}
void TObjPlayer__sub_800A7B54(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x334) = 0;
    } else if (temp_r0 > 2) {
        M2C_FIELD(arg0, s32 *, 0x334) = 2;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0_2) {
    case 2:
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 0x2B);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 0x2A);
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0x368) = 2;
        set_param__12TObjEneLappyFPvi(arg0, 0x29);
        return;
    }
}

}
