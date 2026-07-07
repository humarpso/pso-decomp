#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

struct Base_VT { char pad[0x18]; };
struct VObj_DD : Base_VT {
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
    PADV4
    PADV4
    PADV
    virtual void m93();
    PADV4
    PADV
    PADV
    virtual void m100();
};

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 fn_800B9B84();
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void fn_800E6C8C(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        TObjEneDD__sub_800BBA04(arg0, 1);
        ((VObj_DD *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 2);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFE);
        if (fn_800B9B84() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFCFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
            M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) > 5) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (M2C_FIELD(arg0, s32 *, 0x404) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj_DD *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

}
