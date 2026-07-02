#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80258D38 { char pad[0x18]; };
struct VObj_80258D38 : Base_80258D38 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual s32 m10();
};

extern "C" {

s32 TObjPlayer__sub_8001972C(void *);
s32 fn_800FFE1C(void *);
s32 fn_80100DA4(void *);
s32 TOSwitchItem__sub_80102C44(void *);
s32 fn_801C1AC8(void *);
M2C_UNK fn_8025829C(void *, s32);
M2C_UNK fn_802582C4(void *, void *);
M2C_UNK fn_802586FC(void *, s32, s32, s32, s32);
s32 fn_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DCF08;

void fn_80258D38(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r29;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = fn_80100DA4(arg1);
    fn_802586FC(arg0, temp_r29, TOSwitchItem__sub_80102C44(arg1), TObjPlayer__sub_8001972C(arg1), fn_800FFE1C(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = fn_80259268(arg0, ((VObj_80258D38 *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (fn_801C1AC8(arg1) != 0) {
        fn_8025829C(arg0, arg2);
    }
    fn_802582C4(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
