#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A { char pad[0x18]; };
struct F_V : F_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m87();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m94();
};

extern "C" {

void update_fade__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK set_guard_state__19TObjEneEpsilonGuardFPv(void *, s32);
M2C_UNK fn_800BB780();
M2C_UNK fn_80143504();

void update_fade__19TObjEneEpsilonGuardFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        TObjEneDD__sub_800BBA04(arg0, 2);
        ((F_V *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x10);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r4 & ~0x243);
        set_guard_state__19TObjEneEpsilonGuardFPv(arg0, temp_r4);
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        M2C_FIELD(arg0, u32 *, 0x44C) = -0x22U;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        break;
    case 0:
        fn_80143504();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, u32 *, 0x44C) = (u32) (M2C_FIELD(arg0, u32 *, 0x44C) + 0x22);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x44C) > 0xFFU) {
                M2C_FIELD(arg0, u32 *, 0x44C) = 0xFFU;
                M2C_FIELD(arg0, s32 *, 0x4E4) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, u32 *, 0x44C) = (u32) (M2C_FIELD(arg0, u32 *, 0x44C) - 0x22);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x44C) <= 0x22U) {
                M2C_FIELD(arg0, u32 *, 0x44C) = 0U;
                M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
            }
            break;
        default:
            M2C_FIELD(arg0, u32 *, 0x44C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
            break;
        }
        ((F_V *) arg0)->m87();
        return;
    case 5:
        fn_800BB780();
        break;
    }
}

}
