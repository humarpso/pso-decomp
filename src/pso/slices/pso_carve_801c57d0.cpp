#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801C57D0 { char pad[0x18]; };
struct VObj_801C57D0 : Base_801C57D0 {
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
    virtual void m11(s32);
};

extern "C" {

s32 obj_getField1c(void *);
M2C_UNK queue_destruction__7TObjectFv(s32);
void *fn_8013DFD4(s32);
M2C_UNK fn_8013E308(s32);
void *TPhotonMylla__sub_80154CB4();
s32 TObjPlayer__sub_801B487C();
s32 TObjPlayer__sub_801B58DC(void *);
s32 fn_801C6DAC(s32);

void TForceOperate__vt1(s32 arg0) {
    void *temp_r31;
    void *temp_r3;

    if (fn_801C6DAC(arg0 + 0x1C) != 0) {
        temp_r31 = fn_8013DFD4(arg0 + 0x1C);
        if ((TObjPlayer__sub_801B487C() != 0) && (TObjPlayer__sub_801B58DC(temp_r31) != 0)) {
            fn_8013E308(M2C_FIELD(temp_r31, s32 *, 0x424) + 0x4F8);
            temp_r3 = TPhotonMylla__sub_80154CB4();
            if (temp_r3 != NULL) {
                ((VObj_801C57D0 *)temp_r3)->m11(obj_getField1c(temp_r31));
                queue_destruction__7TObjectFv(arg0);
            }
        }
    }
}

}
