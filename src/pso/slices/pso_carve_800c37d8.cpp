#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
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
    PADV
    virtual void m94();
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};

extern "C" {

s32 TObjEneEpsilon__sub_800B96D4(void *, f32);
M2C_UNK fn_800B98C0(void *);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 check_hit_flag__16TObjEneRe2FlowerFPv();
M2C_UNK clear_child_flags__16TObjEneRe2FlowerFPv(void *);
M2C_UNK fn_80143504();
extern const f32 lbl_805D9FF0;

void fn_800C37D8(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((V_A *) arg0)->m94();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFF7);
        TObjEneDD__sub_800BBA04(arg0, 2);
        fn_800B98C0(arg0);
        return;
    case 3:
        if ((check_hit_flag__16TObjEneRe2FlowerFPv() == 0) && (TObjEneEpsilon__sub_800B96D4(arg0, lbl_805D9FF0) != 0)) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
    case 5:
    case 1:
        return;
    case 0:
        fn_80143504();
        ((V_A *) arg0)->m100();
        ((V_A *) arg0)->m86();
        break;
    }
}

}
