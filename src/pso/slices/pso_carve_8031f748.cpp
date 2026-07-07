#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

struct Base_En { char pad[0x18]; };
struct V_En : Base_En {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
};

struct Base_Sub { char pad[0x14]; };
struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {

M2C_UNK TObjEneDD__sub_800BBA04(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK fn_800D758C(void *);
M2C_UNK fn_80143504();

void fn_8031F748(u8 *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) & 0xFFFFFFFE;
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((V_En *) arg0)->m93();
        TObjEneDD__sub_800BBA04(arg0, 0);
        fn_800D758C(arg0 + 0x3C0);
        return;
    case 3:
        if (((V_Sub *) (arg0 + 0x3C0))->m5() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 2);
        }
    case 5:
        return;
    case 0:
        fn_80143504();
        break;
    }
}

}
