#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)

struct Base_A { char pad[0x18]; };
struct V_A : public Base_A {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m7(int, int);
    virtual s32 m8();
};

extern "C" {

M2C_UNK fn_80073DC4(void *, M2C_UNK);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

void THunterGuildSeqOffline__sub_8021383C(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x38);
    if (p != 0) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0) {
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            fn_80073DC4(arg0, 0xC);
        }
    }
}

}
