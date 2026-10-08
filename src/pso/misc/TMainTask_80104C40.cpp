#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_game_objects__9TMainTaskFv(void);
M2C_UNK TEnding__sub_8008C9F8();
M2C_UNK TItemDisconnectCtrl__ct();
M2C_UNK refresh_drop_table_if_changed__9TItemDropFv();
M2C_UNK create__9TItemLoadFv();
M2C_UNK respawn_missing_floor_items__6TLobbyFi(s32);
M2C_UNK clear_object_count__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_current_floor();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);
s32 get_game_play_mode();
M2C_UNK create_cleanup_object__10TObjPlayerFPv(s32);
M2C_UNK spawn_cleanup_helper__10TObjPlayerFPv(s32);

s32 get_main_phase();
extern s32 lbl_805D543C;
extern M2C_UNK lbl_805D5440;
extern s32 tl_item_equip;
extern s32 tl_particlemodel;

void cleanup_game_objects__9TMainTaskFv(void) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;

    TEnding__sub_8008C9F8();
    create__9TItemLoadFv();
    spawn_cleanup_helper__10TObjPlayerFPv(tl_particlemodel);
    create_cleanup_object__10TObjPlayerFPv(tl_item_equip);
    temp_r30 = get_main_phase();
    temp_r31 = get_global_state__14TOKeyMachine01Fv();
    temp_r29 = get_current_floor();
    lbl_805D543C = 0;
    clear_object_count__6TLobbyFv();
    respawn_missing_floor_items__6TLobbyFi(temp_r29);
    if ((temp_r31 == 0) || (temp_r31 == 0x12)) {
        set_flags__10TObjPlayerFPvUi(&lbl_805D5440, 1);
        if ((temp_r30 != 0xE) && (temp_r30 == 0xF)) {
            refresh_drop_table_if_changed__9TItemDropFv();
        }
    }
    if (get_game_play_mode() == 1) {
        refresh_drop_table_if_changed__9TItemDropFv();
    }
    if ((temp_r30 == 0xF) && (__nw__7TObjectFUl(0x1C) != 0U)) {
        TItemDisconnectCtrl__ct();
    }
    lbl_805D543C = 1;
}

}
