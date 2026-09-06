#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801B7AC8_801B3FD8 { char pad[0x18]; };
struct VObj_801B7AC8_801B3FD8 : Base_801B7AC8_801B3FD8 {
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
    virtual void m16(s32);
};

struct Stack_801B7998 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 TObjPlayer__sub_803D89C0();
void TObjPlayer__sub_801B7930(void *arg0, void *arg1, void *arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *csnVectorUnder(f32 *, void *, M2C_UNK, void *, f32);
M2C_UNK TObjPlayer__sub_801BF3A0(void *, void *);
M2C_UNK TObjPlayer__sub_801BF3C4(void *, void *);
M2C_UNK test_flag_16__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BF840(void *);
M2C_UNK set_flag_4__10TObjPlayerFPv(void *);
M2C_UNK check_flag_2__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BF8AC(void *);
s32 TObjPlayer__sub_802032AC();
u8 *TObjPlayer__vt16(u8 *arg0, u8 *arg1);
}

extern "C" {

int TObjPlayer__sub_801B7B58(void);
void TObjPlayer__vt15(void *arg0);
void calc_move_velocity__10TObjPlayerFPvPvf(void *arg0, void *arg1, f32 farg0);
s32 can_destroy_with_parents__10TObjPlayerFUi(u32 arg0);
void close_sub_window__10TObjPlayerFPv(void *arg0);
void handle_6x98(void);
void handle_6x99(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32, f32);
s32 TLobby__sub_800822E8(s32, s32);
s32 TObjPlayer__sub_80019248(void * a0 = 0);
s32 TObjPlayer__sub_801D4368(void * a0 = 0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 check_player_flag1__6TLobbyFPv(s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_position_ptr__10TObjPlayerFPv();
u32 is_action_active__10TObjPlayerFPv();
s32 obj_testFlags30(s32, s32);

extern const f64 lbl_80446F68;
extern const f32 TObjPlayer__data_805DC278;

void calc_move_velocity__10TObjPlayerFPvPvf(void *arg0, void *arg1, f32 farg0) {
    f32 temp_f1;
    s32 temp_r31;

    temp_r31 = (s32) (lbl_80446F68 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 8)));
    temp_f1 = farg0 * TBoss8Dragon__sub_803D64C0(temp_r31);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (farg0 * TBoss8Dragon__sub_803D64DC(temp_r31, temp_f1));
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_801B7930(void *arg0, void *arg1, void *arg2) {
    f32 temp_f2;
    temp_f2 = -TObjPlayer__sub_803D89C0();
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f2 * M2C_FIELD(arg1, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_f2 * M2C_FIELD(arg1, f32 *, 4)) + M2C_FIELD(arg0, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f2 * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(arg0, f32 *, 8));
}
#pragma pop

u8 *TObjPlayer__vt16(u8 *arg0, u8 *arg1) {
    Stack_801B7998 stack;
    f32 temp_f1;
    s32 temp_r31;
    u8 *temp_r3;
    u8 *temp_r6;
    stack.sp8 = M2C_FIELD(arg1, f32 *, 0);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    stack.spC = temp_f1 + M2C_FIELD(temp_r6, f32 *, 0x10);
    stack.sp10 = M2C_FIELD(arg1, f32 *, 8);
    temp_r3 = (u8 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x5F, temp_r6, temp_f1));
    if (temp_r3 == NULL) {
        return NULL;
    }
    TObjPlayer__sub_801BF8AC((void *) (arg0 + 0x360));
    temp_r31 = M2C_FIELD(temp_r3, s32 *, 0);
    if (temp_r31 & 0x10) {
        check_flag_2__10TObjPlayerFPv((void *) (arg0 + 0x360));
        TObjPlayer__sub_801BF3C4((void *) (arg0 + 0x384), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0x1C));
    }
    if ((temp_r31 & 4) && (TObjPlayer__sub_802032AC() != 0)) {
        set_flag_4__10TObjPlayerFPv((void *) (arg0 + 0x360));
        TObjPlayer__sub_801BF3A0((void *) (arg0 + 0x384), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0x38));
    }
    if ((temp_r31 & 2) && (TObjPlayer__sub_802032AC() != 0)) {
        TObjPlayer__sub_801BF840((void *) (arg0 + 0x360));
        TObjPlayer__sub_801BF3A0((void *) (arg0 + 0x384), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0x54));
    }
    if (temp_r31 & 8) {
        test_flag_16__10TObjPlayerFPv((void *) (arg0 + 0x360));
    }
    if (!(temp_r31 & 1)) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), f32 *, 4);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x410), (void *) (M2C_FIELD(temp_r3, u8 **, 4) + 0xC));
    return temp_r3;
}

void TObjPlayer__vt15(void *arg0) {
    struct VObj_801B7AC8_801B3FD8 *o = (struct VObj_801B7AC8_801B3FD8 *)arg0;
    o->m16(get_position_ptr__10TObjPlayerFPv());
}

void handle_6x99(void) {  }

void close_sub_window__10TObjPlayerFPv(void *arg0) {
    void *p;
    if (TObjPlayer__sub_80019248(arg0) != 0) {
        p = M2C_FIELD(arg0, void **, 0xD00);
        if (p != 0) {
            TObjPlayer__sub_801D4368(p);
        }
    }
}

void handle_6x98(void) {  }
int TObjPlayer__sub_801B7B58(void) { return 0; }

s32 can_destroy_with_parents__10TObjPlayerFUi(u32 arg0) {
    if ((arg0 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
        return 1;
    }
    return 0;
}

}
