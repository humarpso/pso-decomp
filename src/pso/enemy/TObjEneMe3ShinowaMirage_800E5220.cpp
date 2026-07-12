#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PAD_VIRT virtual void CAT(pv, __LINE__)();
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void m0();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m93();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m100();
};

extern "C" {

void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneEpsilon__sub_800B96D4(f32);
M2C_UNK TBoss1Dragon__sub_80143504(void *, s32);

extern const f32 TObjEneMe3ShinowaMirage__data_805DA5F4;

void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        TObjEneDD__sub_800BBA04(arg0, 0xB);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        ((V_A *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        return;
    case 3:
        if (TObjEneEpsilon__sub_800B96D4(TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x404) >= 0x5A) {
            TObjEneDD__sub_800BBA18(arg0, 9);
        }
        return;
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (temp_r4 + 1);
        TBoss1Dragon__sub_80143504(arg0, temp_r4);
        ((V_A *) arg0)->m100();
        break;
    case 5:
        break;
    }
}

}
