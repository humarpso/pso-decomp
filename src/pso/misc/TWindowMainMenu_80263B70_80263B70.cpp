#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80263b70 { char pad[0x18]; };
struct V_A_80263b70 : Base_A_80263b70 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual M2C_UNK m5();
};
struct Base_80263C24_80263B70 { char pad[0x18]; };
struct VObj_80263C24_80263B70 : Base_80263C24_80263B70 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0);
void try_open_battle_menu__15TWindowMainMenuFPvs(void *arg0, s16 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowMainMenu__sub_80263D7C(void *);
M2C_UNK TWindowMainMenu__sub_80263DBC(void *);
s32 TWindowMainMenu__sub_80263E40(void *, s16 *, s32 *);
M2C_UNK TWindowMainMenu__sub_80264674(void *, s16);
M2C_UNK TWindowSubEquip__sub_8026417C(void *, s16);
M2C_UNK close_submenu__15TWindowMainMenuFPvPv(void *, u32);
M2C_UNK destroy_submenu__15TWindowMainMenuFPv();
M2C_UNK reset_equip_slots__10TObjPlayerFPv(s32);

void try_open_battle_menu__15TWindowMainMenuFPvs(void *arg0, s16 arg1) {
    s32 spC;
    s16 sp8;
    s32 temp_r3;

    sp8 = arg1;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x54));
    if ((temp_r3 != 0) && !(M2C_FIELD(arg0, s32 *, 0x4C) & 1) && (TWindowMainMenu__sub_80263E40(arg0, &sp8, &spC) != 0) && (spC != 0)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) | 1);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        TWindowMainMenu__sub_80264674(arg0, sp8);
        TWindowSubEquip__sub_8026417C(arg0, sp8);
        reset_equip_slots__10TObjPlayerFPv(temp_r3);
        ((V_A_80263b70 *) arg0)->m5();
    }
}

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) & 0xFFFFFFFB);
    destroy_submenu__15TWindowMainMenuFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) == 0U) {
        ((VObj_80263C24_80263B70 *)arg0)->m6();
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0x1F;
    TWindowMainMenu__sub_80263D7C(arg0);
    TWindowMainMenu__sub_80263DBC(arg0);
    close_submenu__15TWindowMainMenuFPvPv(arg0, M2C_FIELD(arg0, u32 *, 0x5C));
    return 1;
}

}
