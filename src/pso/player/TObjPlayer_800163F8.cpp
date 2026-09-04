#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800163F8 { char pad[0x18]; };
struct VObj_800163F8 : Base_800163F8 {
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
    virtual s32 m25();
};

extern "C" {

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80010128(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800101B0(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800162B0(void *, s32);
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
s32 TObjPlayer__sub_80156844(s32, s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);

s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (((VObj_800163F8 *)arg0)->m25() != 0) {
        return 1;
    }
    TObjPlayer__sub_800162B0(arg0, arg2);
    return 0;
}

s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if (obj_testFlags30(arg0, 0x10) != 0) {
        temp_ret = TObjPlayer__sub_800194AC(arg0, 1, -1);
        if (temp_ret > 0) {
            obj_clearFlags30(arg0, 0x3C);
            obj_setFlags30(arg0, 0x10);
            if ((temp_ret % 45) == 0) {
                TObjPlayer__sub_80010128(arg0, 1);
            }
            return 1;
        }
        obj_clearFlags30(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        TObjPlayer__sub_800192DC(arg0 + 0x260);
        goto block_6;
    }
block_6:
    return 0;
}

s32 update_action_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if ((obj_testFlags30(arg0, 8) != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U)) {
        temp_ret = TObjPlayer__sub_800194AC(arg0, 1, -1);
        if (temp_ret > 0) {
            if ((temp_ret % 45) == 0) {
                TObjPlayer__sub_800101B0(arg0, 1);
            }
            return 1;
        }
        obj_clearFlags30(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        TObjPlayer__sub_800192DC(arg0 + 0x260);
        goto block_7;
    }
block_7:
    return 0;
}

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (TObjPlayer__sub_80156844(arg0, arg1, 0) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x290, arg0 + 0x38);
        return 1;
    }
    return 0;
}

extern const f64 TObjPlayer__data_804340B8;

void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), temp_r31, arg1);
    TObjPlayer__sub_80141F84(M2C_FIELD(arg0, s32 *, 0x60), temp_r31);
}

}
