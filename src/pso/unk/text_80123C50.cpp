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
    virtual s16 m14();
};

extern "C" {
s32 TObjPlayer__sub_800112A4(void *, s32);
s16 obj_getS16_32E(void *);
extern const f32 lbl_805DAD20;
void TObjPlayer__sub_80123D3C(u8 *arg0);
u8 * init_state__10TObjPlayerFPv(void *, M2C_UNK, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80123C50(s32 arg0);
}

extern "C" {

u8 *TObjPlayer__sub_80123C50(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_state__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

void TObjPlayer__sub_80123D3C(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r3_3;
    s32 temp_r3;
    s32 temp_r3_2;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1FE) == 1) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (temp_r3 == 7) {
            M2C_FIELD(arg0, s16 *, 0x1FE) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (temp_r3 + 1);
        }
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1FE) == 2) {
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (temp_r3_2 == 0) {
            M2C_FIELD(arg0, s16 *, 0x1FE) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (temp_r3_2 - 1);
        }
    }
    temp_r3_3 = obj_getS16_32E(M2C_FIELD(arg0, u8 **, 0xF0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1FC) - temp_r3_3;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s16 *, 0x1FC) = temp_r3_3;
        return;
    }
    if (temp_r0 > 0) {
        TObjPlayer__sub_800112A4(M2C_FIELD(arg0, u8 **, 0xF0), (s32) (lbl_805DAD20 * (f32) temp_r0));
        M2C_FIELD(arg0, s16 *, 0x1FC) = obj_getS16_32E(M2C_FIELD(arg0, u8 **, 0xF0));
    }
}

}
