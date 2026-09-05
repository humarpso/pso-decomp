#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual M2C_UNK m56();
};
extern "C" {
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
f32 fn_8013157C(void *, void *);
extern const f32 lbl_805DA080;
void TObjEneMe1GiGue__sub_800C73F4(u8 *arg0);
}

extern "C" {

u8 find_target_in_range__10TObjPlayerFPvf(void *arg0, f32 farg0);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
u8 TObjPlayer__sub_800C6FFC(void *, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 obj_testFlags30(void *, M2C_UNK);

u8 find_target_in_range__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    if (obj_testFlags30(arg0, 0x10) != 0) {
        return TObjPlayer__sub_800C6FFC(arg0, farg0);
    }
    M2C_FIELD(arg0, u16 *, 0x338) = TObjPlayer__sub_800115C4(arg0, 0, farg0);
    M2C_FIELD(arg0, s32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x338));
    return (u8) (M2C_FIELD(arg0, s32 *, 0x2A8) != 0);
}
void TObjEneMe1GiGue__sub_800C73F4(u8 *arg0) {
    if (fn_8013157C((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805DA080) {
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
        return;
    }
    ((VObj_18 *)(arg0))->m56();
}

}
