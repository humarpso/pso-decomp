#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801ABD90 { char pad[0x18]; };
struct VObj_801ABD90 : Base_801ABD90 {
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
};

extern "C" {

M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK fn_80156720(void *);
M2C_UNK fn_801A771C(void *);
M2C_UNK fn_801A7D38(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804C35F4[];

void *fn_801ABD90(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C35F4;
        ((VObj_801ABD90 *)arg0)->m13();
        fn_801A771C(arg0);
        TObjPlayer__sub_80154A00(arg0);
        fn_80156720(arg0);
        fn_801A7D38(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
