#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_801B59F8(int, int, int, int, int, int);
s32 select_action_palette__10TObjPlayerFi(M2C_UNK, M2C_UNK);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 TWindowActionPalette__sub_801C1DE0(s32, s32, s32);
void TWindowSubCustomEquip__sub_802761BC(void *arg0, void *arg1);
s32 TObjPlayer__sub_801B59F8(int, int, int, int, int, int);
s32 select_action_palette__10TObjPlayerFi(M2C_UNK, M2C_UNK);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 TWindowActionPalette__sub_801C1DE0(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFPv(void *, u8);
s32 TWindowSubCustomEquip__sub_802760DC(void *, u8);
void TWindowSubCustomEquip__sub_802761BC(void *arg0, void *arg1);
void toggle_action_binding__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
}

extern "C" {

void get_cursor_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
s32 select_action_palette__10TObjPlayerFi(M2C_UNK, M2C_UNK);
u32 get_player_by_client_id(s16);
s16 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s16 TWindowActionPalette__sub_801C1DE0(s32, s32, s32);
s32 is_type_valid__21TWindowSubCustomEquipFPv(void *, u8);
s32 TWindowSubCustomEquip__sub_802760DC(void *, u8);

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
    temp_r3_2 = TWindowSubCustomEquip__sub_802760DC(arg0, M2C_FIELD(arg0, u8 *, 0x61));
    M2C_FIELD(arg1, s16 *, 0) = TWindowActionPalette__sub_801C1DE0(temp_r29, temp_r31, temp_r3_2);
    M2C_FIELD(arg1, s16 *, 2) = TWindowActionPalette__sub_801C1D7C(temp_r29, temp_r31, temp_r3_2);
}
void TWindowSubCustomEquip__sub_802761BC(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r29;
    if ((temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20)), (temp_r3 == 0U)) || (temp_r29 = select_action_palette__10TObjPlayerFi(temp_r3, 0), ((temp_r29 == 0) != 0))) {
        return;
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)TWindowActionPalette__sub_801C1DE0(temp_r29, 0, 1) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 1)) {
        TObjPlayer__sub_801B59F8(temp_r3, 0, 0, 1, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)TWindowActionPalette__sub_801C1DE0(temp_r29, 0, 3) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 3)) {
        TObjPlayer__sub_801B59F8(temp_r3, 0, 0, 3, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)TWindowActionPalette__sub_801C1DE0(temp_r29, 0, 2) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 0, 2)) {
        TObjPlayer__sub_801B59F8(temp_r3, 0, 0, 2, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)TWindowActionPalette__sub_801C1DE0(temp_r29, 1, 1) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 1)) {
        TObjPlayer__sub_801B59F8(temp_r3, 0, 1, 1, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)TWindowActionPalette__sub_801C1DE0(temp_r29, 1, 3) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 3)) {
        TObjPlayer__sub_801B59F8(temp_r3, 0, 1, 3, 0, 0);
    }
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)TWindowActionPalette__sub_801C1DE0(temp_r29, 1, 2) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, 1, 2)) {
        TObjPlayer__sub_801B59F8(temp_r3, 0, 1, 2, 0, 0);
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
    idx = TWindowSubCustomEquip__sub_802760DC(arg0, M2C_FIELD(arg0, u8 *, 0x61));
    if (M2C_FIELD(arg1, u16 *, 0) == (u16)TWindowActionPalette__sub_801C1DE0(temp_r29, valid, idx) && M2C_FIELD(arg1, u16 *, 2) == (u16)TWindowActionPalette__sub_801C1D7C(temp_r29, valid, idx)) {
        TObjPlayer__sub_801B59F8(temp_r3, 0, valid, idx, 0, 0);
        return;
    }
    TWindowSubCustomEquip__sub_802761BC(arg0, arg1);
    TObjPlayer__sub_801B59F8(temp_r3, 0, valid, idx, M2C_FIELD(arg1, u16 *, 0), M2C_FIELD(arg1, u16 *, 2));
}

}
