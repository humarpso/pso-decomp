#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802165D8 { char pad[0x18]; };
struct VObj_802165D8 : Base_802165D8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(s32, s32);
};

extern "C" {

void exec_heal__22TMedicalCenterSequenceFPv(void *arg0);
s32 TObjPlayer__sub_801AF790(s32);
M2C_UNK TObjPlayer__sub_801AF7E0(s32);
M2C_UNK TObjPlayer__sub_801B1390(s32);
M2C_UNK TObjPlayer__sub_801B4630(s32);
M2C_UNK fn_80011138(s32, M2C_UNK);
M2C_UNK fn_80073DC4(void *, M2C_UNK);
M2C_UNK fn_801B44EC(s32);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 obj_getPtr2B0_20(s32);

void exec_heal__22TMedicalCenterSequenceFPv(void *arg0) {
    if (obj_getPtr2B0_20(M2C_FIELD(arg0, s32 *, 0x24)) < 0xA) {
        ((VObj_802165D8 *)arg0)->m4(0xF, 1);
        fn_80073DC4(arg0, 0xA);
        return;
    }
    fn_8022675C(0x42D08, 0, 0, 0);
    TObjPlayer__sub_801B4630(M2C_FIELD(arg0, s32 *, 0x24));
    fn_801B44EC(M2C_FIELD(arg0, s32 *, 0x24));
    if (TObjPlayer__sub_801AF790(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        TObjPlayer__sub_801AF7E0(M2C_FIELD(arg0, s32 *, 0x24));
    }
    TObjPlayer__sub_801B1390(M2C_FIELD(arg0, s32 *, 0x24));
    fn_80011138(M2C_FIELD(arg0, s32 *, 0x24), 0xA);
    ((VObj_802165D8 *)arg0)->m4(0x22, 1);
    fn_80073DC4(arg0, 0xA);
}

}
