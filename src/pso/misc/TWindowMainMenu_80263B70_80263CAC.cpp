#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt80263D94_80263d94_80263B70 { s16 f0; s16 f2; s32 f4; };

extern "C" {

void add_menu_entry__15TWindowMainMenuFPvs(u8 *arg0, s16 arg1);
void close_and_clear_flags__15TWindowMainMenuFPv(void *arg0);
void open__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowMainMenu__sub_802646E4(void *, s32);
M2C_UNK close__15TWindowMainMenuFPv(void *);
M2C_UNK close_child_window__15TWindowMainMenuFPv(void *, s32);
M2C_UNK destroy_submenu__15TWindowMainMenuFPv(void *);
M2C_UNK init_parts__10TObjPlayerFPv();
M2C_UNK reset_equip_slots__10TObjPlayerFPv(s32);
M2C_UNK update_keyboard_card_state__15TWindowMainMenuFPv(void *, s32);

void close_and_clear_flags__15TWindowMainMenuFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r4 & ~5);
    close_child_window__15TWindowMainMenuFPv(arg0, temp_r4);
    destroy_submenu__15TWindowMainMenuFPv(arg0);
    close__15TWindowMainMenuFPv(arg0);
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(M2C_FIELD(arg0, s32 *, 0x54))) != 0U) {
        init_parts__10TObjPlayerFPv();
    }
}

void open__15TWindowMainMenuFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(M2C_FIELD(arg0, s32 *, 0x54)));
    if (temp_r3 != 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C) | 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
        M2C_FIELD(arg0, s16 *, 0x50) = 0;
        update_keyboard_card_state__15TWindowMainMenuFPv(arg0, temp_r4);
        TWindowMainMenu__sub_802646E4(arg0, M2C_FIELD(arg0, s32 *, 0x5C));
        reset_equip_slots__10TObjPlayerFPv(temp_r3);
    }
}

void add_menu_entry__15TWindowMainMenuFPvs(u8 *arg0, s16 arg1) {
    struct Elt80263D94_80263d94_80263B70 *arr = (struct Elt80263D94_80263d94_80263B70 *)arg0;
    struct Elt80263D94_80263d94_80263B70 *e = (struct Elt80263D94_80263d94_80263B70 *)((char *)&arr[M2C_FIELD(arg0, s16 *, 0x50)] + 0x28);
    e->f0 = (s16) M2C_FIELD(arg0, s16 *, 0x52);
    e->f2 = arg1;
    e->f4 = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
}

}
