#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag_bit3__11TWindowCtrlFv(void);
s32 is_map_visible__11TWindowCtrlFv(void);
int is_player_flag_4000_set__11TWindowCtrlFPv(void* p);
s32 TLobby__sub_8030A770();
s32 get_game_play_mode();
u32 get_player_by_client_id(s32);
s32 has_player_active_menu__11TWindowCtrlFi(u16);
s32 is_slot_visible__11TWindowCtrlFi(u16);
int check_flag__10TObjPlayerFPvi(void*, int);
u32 get_card_window__17TWindowSubComCardFUi(s32);
s32 is_active__19THunterGuildWarningFv();
s32 is_level_capped__23TAdSinglePlyChrSelectGCFPv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 obj_getField1c();

extern void *TWindowCtrl__data_805D63F8;

s32 get_flag_bit3__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    return ((u16) M2C_FIELD(TWindowCtrl__data_805D63F8, u16 *, 0x1C) >> 3U) & 1;
}

int is_player_flag_4000_set__11TWindowCtrlFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 16384); }
s32 is_map_visible__11TWindowCtrlFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        return 1;
    }
    if (get_game_play_mode() != 1) {
        return 1;
    }
    return TLobby__sub_8030A770() != 0 ? 1 : 0;
}

}
