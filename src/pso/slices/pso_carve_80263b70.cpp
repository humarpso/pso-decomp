#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual M2C_UNK m5();
};

extern "C" {

M2C_UNK reset_equip_slots__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_80263E40(void *, s16 *, s32 *);
M2C_UNK fn_8026417C(void *, s16);
M2C_UNK TWindowMainMenu__sub_80264674(void *, s16);

void fn_80263B70(void *arg0, s16 arg1) {
    s32 spC;
    s16 sp8;
    s32 temp_r3;

    sp8 = arg1;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x54));
    if ((temp_r3 != 0) && !(M2C_FIELD(arg0, s32 *, 0x4C) & 1) && (fn_80263E40(arg0, &sp8, &spC) != 0) && (spC != 0)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) | 1);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        TWindowMainMenu__sub_80264674(arg0, sp8);
        fn_8026417C(arg0, sp8);
        reset_equip_slots__10TObjPlayerFPv(temp_r3);
        ((V_A *) arg0)->m5();
    }
}

}
