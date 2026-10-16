#include "types.h"
#include "pso/misc/TWindowSubCustomEquip.h"

extern "C" {
s32 set_action_palette_entry__10TObjPlayerFiiiiii(int, int, int, int, int, int);
s32 select_action_palette__10TObjPlayerFi(s32, s32);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 get_slot_type__20TWindowActionPaletteFlll(s32, s32, s32);
s32 set_action_palette_entry__10TObjPlayerFiiiiii(int, int, int, int, int, int);
s32 select_action_palette__10TObjPlayerFi(s32, s32);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 get_slot_type__20TWindowActionPaletteFlll(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFv(void *, u8);
s32 get_saved_slot_for_index__21TWindowSubCustomEquipFlSc(void *, u8);
}

extern "C" {

s32 select_action_palette__10TObjPlayerFi(s32, s32);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 get_slot_type__20TWindowActionPaletteFlll(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFv(void *, u8);
s32 get_saved_slot_for_index__21TWindowSubCustomEquipFlSc(void *, u8);

void TWindowSubCustomEquip::get_cursor_pos(void *arg1) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r29;

    if ((temp_r3 = get_player_by_client_id(this->m_20), (temp_r3 == 0U)) || (temp_r29 = select_action_palette__10TObjPlayerFi(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        *(s16 *)((s8 *)arg1 + 0) = 0;
        *(s16 *)((s8 *)arg1 + 2) = 0;
        return;
    }
    temp_r31 = is_type_valid__21TWindowSubCustomEquipFv(this, this->m_62);
    temp_r3_2 = get_saved_slot_for_index__21TWindowSubCustomEquipFlSc(this, this->m_61);
    *(s16 *)((s8 *)arg1 + 0) = get_slot_type__20TWindowActionPaletteFlll(temp_r29, temp_r31, temp_r3_2);
    *(s16 *)((s8 *)arg1 + 2) = TWindowActionPalette__sub_801C1D7C(temp_r29, temp_r31, temp_r3_2);
}
void TWindowSubCustomEquip::remove_duplicate_bindings(void *arg1) {
    s32 temp_r3;
    s32 temp_r29;
    if ((temp_r3 = get_player_by_client_id(this->m_20), (temp_r3 == 0U)) || (temp_r29 = select_action_palette__10TObjPlayerFi(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        return;
    }
    if (*(u16 *)((s8 *)arg1 + 0) == (u16)get_slot_type__20TWindowActionPaletteFlll(temp_r29, 0, 1) && *(u16 *)((s8 *)arg1 + 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 1)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 0, 1, 0, 0);
    }
    if (*(u16 *)((s8 *)arg1 + 0) == (u16)get_slot_type__20TWindowActionPaletteFlll(temp_r29, 0, 3) && *(u16 *)((s8 *)arg1 + 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 3)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 0, 3, 0, 0);
    }
    if (*(u16 *)((s8 *)arg1 + 0) == (u16)get_slot_type__20TWindowActionPaletteFlll(temp_r29, 0, 2) && *(u16 *)((s8 *)arg1 + 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 2)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 0, 2, 0, 0);
    }
    if (*(u16 *)((s8 *)arg1 + 0) == (u16)get_slot_type__20TWindowActionPaletteFlll(temp_r29, 1, 1) && *(u16 *)((s8 *)arg1 + 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 1)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 1, 1, 0, 0);
    }
    if (*(u16 *)((s8 *)arg1 + 0) == (u16)get_slot_type__20TWindowActionPaletteFlll(temp_r29, 1, 3) && *(u16 *)((s8 *)arg1 + 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 3)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 1, 3, 0, 0);
    }
    if (*(u16 *)((s8 *)arg1 + 0) == (u16)get_slot_type__20TWindowActionPaletteFlll(temp_r29, 1, 2) && *(u16 *)((s8 *)arg1 + 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 2)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 1, 2, 0, 0);
    }
}
void TWindowSubCustomEquip::toggle_action_binding(void *arg1) {
    s32 temp_r3;
    s32 temp_r29;
    s32 valid;
    s32 idx;
    if ((temp_r3 = get_player_by_client_id(this->m_20), (temp_r3 == 0U)) || (temp_r29 = select_action_palette__10TObjPlayerFi(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        return;
    }
    valid = is_type_valid__21TWindowSubCustomEquipFv(this, this->m_62);
    idx = get_saved_slot_for_index__21TWindowSubCustomEquipFlSc(this, this->m_61);
    if (*(u16 *)((s8 *)arg1 + 0) == (u16)get_slot_type__20TWindowActionPaletteFlll(temp_r29, valid, idx) && *(u16 *)((s8 *)arg1 + 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, valid, idx)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, valid, idx, 0, 0);
        return;
    }
    remove_duplicate_bindings(arg1);
    set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, valid, idx, *(u16 *)((s8 *)arg1 + 0), *(u16 *)((s8 *)arg1 + 2));
}

}
