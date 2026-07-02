#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8018B820 { char pad[0x18]; };
struct VObj_8018B820 : Base_8018B820 {
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
    virtual void m20(s32, f32);
};

extern "C" {

f32 TContainerAncient01__vt20(void *arg0);
f32 TContainerAncient01__vt21(void *arg0, s32 arg1, s32 *arg2);
M2C_UNK fn_80154954(void *, s16 *);
s32 fn_80156A80(void *, s16 *, M2C_UNK);
M2C_UNK fn_8018B268();

extern f32 lbl_805DBD14;

f32 TContainerAncient01__vt20(void *arg0) {
    s16 sp8;

    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
        fn_8018B268();
        if (((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (fn_80156A80(arg0, &sp8, 1) != 0)) {
            sp8 = 1;
            fn_80156A80(arg0, &sp8, 0);
            fn_80154954(arg0, &sp8);
        }
    }
    return lbl_805DBD14;
}

extern f32 lbl_805DBD10;
extern f32 lbl_805DBD14;

f32 TContainerAncient01__vt21(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018B820 *o = (struct VObj_8018B820 *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, lbl_805DBD10);
    }
    return lbl_805DBD14;
}

}
