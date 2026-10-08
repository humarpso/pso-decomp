#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 set_action_palette_entry__10TObjPlayerFiiiiii(int, int, int, int, int, int);
s32 select_action_palette__10TObjPlayerFi(M2C_UNK, M2C_UNK);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 get_slot_type__20TWindowActionPaletteFiii(s32, s32, s32);
void remove_duplicate_bindings__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
s32 set_action_palette_entry__10TObjPlayerFiiiiii(int, int, int, int, int, int);
s32 select_action_palette__10TObjPlayerFi(M2C_UNK, M2C_UNK);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 get_slot_type__20TWindowActionPaletteFiii(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFPv(void *, u8);
s32 get_saved_slot_for_index__21TWindowSubCustomEquipFic(void *, u8);
void remove_duplicate_bindings__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
void toggle_action_binding__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
}

extern "C" {

void get_cursor_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
s32 select_action_palette__10TObjPlayerFi(M2C_UNK, M2C_UNK);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 get_slot_type__20TWindowActionPaletteFiii(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFPv(void *, u8);
s32 get_saved_slot_for_index__21TWindowSubCustomEquipFic(void *, u8);

void get_cursor_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r29;

    if ((temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20)), (temp_r3 == 0U)) || (temp_r29 = select_action_palette__10TObjPlayerFi(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        M2C_FIELD(arg1, s16 *, 0) = 0;
        M2C_FIELD(arg1, s16 *, 2) = 0;
        return;
    }
    temp_r31 = is_type_valid__21TWindowSubCustomEquipFPv(arg0, M2C_FIELD(arg0, u8 *, 0x62));
    temp_r3_2 = get_saved_slot_for_index__21TWindowSubCustomEquipFic(arg0, M2C_FIELD(arg0, u8 *, 0x61));
    M2C_FIELD(arg1, s16 *, 0) = get_slot_type__20TWindowActionPaletteFiii(temp_r29, temp_r31, temp_r3_2);
    M2C_FIELD(arg1, s16 *, 2) = TWindowActionPalette__sub_801C1D7C(temp_r29, temp_r31, temp_r3_2);
}
void remove_duplicate_bindings__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r29;
    if ((temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20)), (temp_r3 == 0U)) || (temp_r29 = select_action_palette__10TObjPlayerFi(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        return;
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)get_slot_type__20TWindowActionPaletteFiii(temp_r29, 0, 1) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 1)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 0, 1, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)get_slot_type__20TWindowActionPaletteFiii(temp_r29, 0, 3) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 3)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 0, 3, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)get_slot_type__20TWindowActionPaletteFiii(temp_r29, 0, 2) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 2)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 0, 2, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)get_slot_type__20TWindowActionPaletteFiii(temp_r29, 1, 1) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 1)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 1, 1, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)get_slot_type__20TWindowActionPaletteFiii(temp_r29, 1, 3) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 3)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 1, 3, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)get_slot_type__20TWindowActionPaletteFiii(temp_r29, 1, 2) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 2)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, 1, 2, 0, 0);
    }
}
void toggle_action_binding__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r29;
    s32 valid;
    s32 idx;
    if ((temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20)), (temp_r3 == 0U)) || (temp_r29 = select_action_palette__10TObjPlayerFi(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        return;
    }
    valid = is_type_valid__21TWindowSubCustomEquipFPv(arg0, M2C_FIELD(arg0, u8 *, 0x62));
    idx = get_saved_slot_for_index__21TWindowSubCustomEquipFic(arg0, M2C_FIELD(arg0, u8 *, 0x61));
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)get_slot_type__20TWindowActionPaletteFiii(temp_r29, valid, idx) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, valid, idx)) {
        set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, valid, idx, 0, 0);
        return;
    }
    remove_duplicate_bindings__21TWindowSubCustomEquipFPvPv(arg0, arg1);
    set_action_palette_entry__10TObjPlayerFiiiiii(temp_r3, 0, valid, idx, M2C_FIELD(arg1, u16 *, 0), M2C_FIELD(arg1, u16 *, 2));
}

}
