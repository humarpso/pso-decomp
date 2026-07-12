#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual s32 m34();
    virtual void m35(s32);
};

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(s32, s16);
M2C_UNK TItem__sub_80102424(void *, s16, s32, M2C_UNK);
s16 TObjPlayer__sub_801A1EB0(s32);
M2C_UNK TObjPlayer__sub_801B9D50(s32, void *);
s32 TObjPlayer__sub_801C1A70(void *);
s32 TObjPlayer__sub_801D4F14(void *, s32);
void *TObjPlayer__sub_801D5764();

s32 fn_801D48F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 temp_r4;
    void *temp_r3_2;
    s32 temp_r3;

    if (arg4 < 0) {
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801D4F14(arg0, arg2);
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r3_2 = TObjPlayer__sub_801D5764();
    if (temp_r3_2 == NULL) {
        return 0;
    }
    if ((((V_A *) temp_r3_2)->m34() - arg4) > 0) {
        ((V_A *) temp_r3_2)->m35(arg4);
        return 1;
    }
    if (TObjPlayer__sub_801C1A70(temp_r3_2) != 0) {
        TObjPlayer__sub_801B9D50(arg1, temp_r3_2);
    }
    M2C_FIELD(temp_r3_2, s16 *, 0x28) = TObjPlayer__sub_801A1EB0(arg1);
    TItem__sub_80102424(temp_r3_2, arg5, arg3, 0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
    queue_destruction__7TObjectFv(temp_r3, temp_r4);
    return 1;
}

}
