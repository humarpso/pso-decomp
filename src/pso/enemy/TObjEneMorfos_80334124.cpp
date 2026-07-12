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
    virtual void m93();
    virtual void m94();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m100();
};

extern "C" {

void state_appear__13TObjEneMorfosFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
s32 TObjEneEpsilon__sub_800B96D4(f32);
s32 TObjEneMorfos__sub_803344F0();
f32 fn_8002ADE4(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK TObjPlayer__sub_8022602C(M2C_UNK);

extern const f32 TObjEneMorfos__data_805DF86C;
extern const f32 TObjEneMorfos__data_805DF874;
extern const f32 lbl_805DF894;

void state_appear__13TObjEneMorfosFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((F_V *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF8);
        TObjEneDD__sub_800BBA04(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        M2C_FIELD(arg0, f32 *, 0x4C4) = (f32) TObjEneMorfos__data_805DF874;
        return;
    case 3:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x4B0) == 2) && (TObjEneMorfos__sub_803344F0() == 0)) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        break;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B0);
        switch (temp_r0) {
        case 0:
            if (TObjEneEpsilon__sub_800B96D4(TObjEneMorfos__data_805DF86C) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 1;
                TObjEneEpsilon__sub_800B96A4(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
            }
            break;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x4C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C4) + lbl_805DF894);
            M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) fn_8002ADE4(M2C_FIELD(arg0, f32 *, 0x4C4));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3D4) >= 0xC) {
                M2C_FIELD(arg0, s32 *, 0x3D4) = 0xC;
                M2C_FIELD(arg0, s32 *, 0x4B0) = 2;
            }
            TObjPlayer__sub_8022602C(-0x100);
            break;
        }
        ((F_V *) arg0)->m100();
        ((F_V *) arg0)->m87();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3D4) = 0xC;
        ((F_V *) arg0)->m94();
        break;
    }
}

}
