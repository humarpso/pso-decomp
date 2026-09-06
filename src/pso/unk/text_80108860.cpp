#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_7128e8 { char pad[0x18]; };

struct VObj_18_7128e8 : VBase_18_7128e8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

extern "C" {
u16 obj_getField1c(void *);
s32 TBoss8Dragon__sub_8008741C(s32, s32, s32);
void TObjPlayer__sub_80087638(void *, u16);
void fn_80108860(u8 *arg0, s32 arg1);
}

extern "C" {

void fn_80108860(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x20) = TBoss8Dragon__sub_8008741C(((VObj_18_7128e8 *)(temp_r3))->m7(), arg1, 0x10);
    if ((u32) M2C_FIELD(arg0, s32 *, 0x20) != 0U) {
        TObjPlayer__sub_80087638((void *) M2C_FIELD(arg0, s32 *, 0x20), obj_getField1c(M2C_FIELD(arg0, u8 **, 0x1C)));
    }
}

}
