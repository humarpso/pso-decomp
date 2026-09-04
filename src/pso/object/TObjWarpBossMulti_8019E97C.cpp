#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_8019e97c { char pad[0x18]; };
struct V_A_8019e97c : Base_A_8019e97c {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(s32);
};

extern "C" {

void update_state__17TObjWarpBossMultiFPv(void *arg0);
s32 TObjWarpBossMulti__sub_8019E4B4();
s32 TObjWarpBossMulti__sub_8019E570(void *, f32);
M2C_UNK notify_player__17TObjWarpBossMultiFPvi(void *, s32);

extern s32 lbl_805D53A0;
extern s32 lbl_805D5C94;
extern s32 lbl_805D5C9C;

void update_state__17TObjWarpBossMultiFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x17C) = 0x96;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) | 1);
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (TObjWarpBossMulti__sub_8019E4B4() == 0) {
            temp_r3 = TObjWarpBossMulti__sub_8019E570(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
            if (temp_r3 != 0) {
                notify_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
                ((V_A_8019e97c *)arg0)->m17(temp_r3);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x17C) - 1;
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
        }
        break;
    case -1:
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s16 *, 0xDC) = 3;
        break;
    }
}

}
