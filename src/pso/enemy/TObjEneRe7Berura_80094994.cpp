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
    virtual void m86();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};
struct Base_Sub { char pad[0x14]; };
struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {

void TObjEneRe7Berura__sub_80094994(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK, s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe7Berura__sub_80094EA8(void *);
M2C_UNK fn_800A0554(void *);
M2C_UNK fn_800D8C48(void *);

void TObjEneRe7Berura__sub_80094994(u8 *arg0, s32 arg1) {
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((V_En *) arg0)->m93();
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x3C0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        TObjEneDD__sub_800BBA04(arg0, 3, temp_r5);
        fn_800A0554(arg0 + 0x3D8);
        fn_800D8C48(arg0 + 0x38);
        TObjEneRe7Berura__sub_80094EA8(arg0);
        return;
    case 3:
        if (((V_Sub *) (arg0 + 0x3D8))->m5() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        return;
    case 0:
        ((V_En *) arg0)->m100();
        ((V_En *) arg0)->m86();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
        break;
    }
}

}
