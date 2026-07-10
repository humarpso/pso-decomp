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
struct VObj_CE : Base_VT {
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
    virtual void m87();
    PADV4
    PADV
    PADV
    virtual void m95();
};

extern "C" {

s32 TObjEneMe3ShinowaReal__sub_8002ADD8();
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK fn_800D086C(void *);
M2C_UNK fn_800D08E4(void *);
M2C_UNK fn_800D0FDC(void *, s32);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
M2C_UNK fn_800F5EB4(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK fn_80143504(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK fn_8022675C(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DA178;

void fn_800CE560(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        ((VObj_CE *)arg0)->m95();
        TObjEneDD__sub_800BBA04(arg0, 8);
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        TObjEneBm5GibonU__sub_800D17E8(M2C_FIELD(arg0, s32 *, 0x46C));
        return;
    case 3:
        if (TObjEneMe3ShinowaReal__sub_8002ADD8() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 8);
        }
    case 5:
        return;
    case 0:
        fn_80143504(arg0);
        fn_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, lbl_805DA178) != 0) {
            fn_8022675C((void *)fn_800F5EB4(arg0, 0x3AA22), arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
        if (temp_r0 == 0x1E) {
            fn_800D08E4(arg0);
        } else if (temp_r0 == 0x28) {
            fn_800D086C(arg0);
        }
        ((VObj_CE *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

}
