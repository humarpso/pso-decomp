#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct E_A_8003fde8 { char pad[0x18]; };
struct E_V_8003fde8 : E_A_8003fde8 {
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
    virtual void m56();
};

extern "C" {

s32 TObjPlayer__sub_8003FD90(void *arg0);
void TObjPlayer__sub_8003FDE8(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_8003FCD0(void *);

extern const f64 lbl_80436350;
extern const f32 lbl_805D86B4;

s32 TObjPlayer__sub_8003FD90(void *arg0) {
    return (s32) (lbl_805D86B4 * (f32) ((((s32) (u16) M2C_FIELD(arg0, s32 *, 0x390) / 10922) * 0x3C) + 0x78));
}

void TObjPlayer__sub_8003FDE8(void *arg0) {
    s32 temp_r3;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000);
        M2C_FIELD(arg0, s32 *, 0x390) = 0x4000;
        M2C_FIELD(arg0, s32 *, 0x394) = -0x1555;
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFF;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x10000);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        TObjPlayer__sub_8003FCD0(arg0);
        M2C_FIELD(arg0, s32 *, 0x398) = TObjPlayer__sub_8003FD90((void *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x398);
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x5A;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x33C) - 1;
        M2C_FIELD(arg0, s16 *, 0x33C) = temp_r3;
        if ((s16) temp_r3 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            ((E_V_8003fde8 *) arg0)->m56();
        }
        break;
    case -1:
        break;
    }
}

}
