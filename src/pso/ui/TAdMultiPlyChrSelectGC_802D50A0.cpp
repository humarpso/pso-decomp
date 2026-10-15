#include "types.h"

extern "C" {
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *);
void fn_802D50B8(void *arg0, void *arg1, void *arg2, void *arg3);
void update_trail_slot__11TItemWeaponFPvi(void *, s32);
void draw_weapon_at_joint(s32, s8);
void draw_twin_weapon_trails(s32 arg0);
}

extern "C" {

s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v);

s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x24); }
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }

void fn_802D50B8(void *arg0, void *arg1, void *arg2, void *arg3) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 132));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 140), arg2);
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 148), arg3);
}
void draw_twin_weapon_trails(s32 arg0) {
    u32 temp_r0;
    u32 temp_r31;
    draw_weapon_at_joint(arg0, 0x30);
    update_trail_slot__11TItemWeaponFPvi((void *) arg0, 0);
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x188);
    temp_r31 = *(u32 *)((s8 *)arg0 + 0xF4);
    if (temp_r0 != 0U) {
        *(u32 *)((s8 *)arg0 + 0xF4) = temp_r0;
    }
    draw_weapon_at_joint(arg0, 0x23);
    update_trail_slot__11TItemWeaponFPvi((void *) arg0, 1);
    *(u32 *)((s8 *)arg0 + 0xF4) = temp_r31;
}

}
