#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

struct Base_Sub { char pad[0x14]; };
struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
};

extern "C" {

M2C_UNK fn_80040B3C(void *, M2C_UNK, s32);
M2C_UNK fn_800D758C(void *);
M2C_UNK fn_800D8E80(void *, s32);
M2C_UNK fn_80143504(void *);
M2C_UNK fn_80156698(void *);

void fn_800DA0B8(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        fn_800D8E80(arg0 + 0x2FC, temp_r4);
        fn_800D758C(arg0 + 0x3E8);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        fn_80143504(arg0);
        if (((V_Sub *) (arg0 + 0x3E8))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        fn_80156698(arg0);
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        fn_80040B3C(arg0, 0, temp_r5);
        break;
    }
}

}
