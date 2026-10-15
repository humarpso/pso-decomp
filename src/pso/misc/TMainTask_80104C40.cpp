#include "types.h"
#include "pso/item/TItemDisconnectCtrl.h"

extern "C" {

void cleanup_game_objects__9TMainTaskFv(void);
s32 TEnding__sub_8008C9F8();
s32 refresh_drop_table_if_changed__9TItemDropFv();
s32 create__9TItemLoadFv();
s32 respawn_missing_floor_items__6TLobbyFi(s32);
s32 clear_object_count__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_current_floor();
u32 __nw__7TObjectFUl(s32);
s32 set_flags__10TObjPlayerFPvUi(s32 *, s32);
s32 get_game_play_mode();
s32 create_cleanup_object__10TObjPlayerFPv(s32);
s32 spawn_cleanup_helper__10TObjPlayerFPv(s32);

s32 get_main_phase();
extern s32 item_ground_placement_enabled;
extern s32 lbl_805D5440;
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
    item_ground_placement_enabled = 0;
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
    if (temp_r30 == 0xF) {
        new TItemDisconnectCtrl;
    }
    item_ground_placement_enabled = 1;
}

}
