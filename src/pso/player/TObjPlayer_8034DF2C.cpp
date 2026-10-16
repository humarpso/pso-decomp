#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u32 get_player_by_client_id(s32);
s32 notify_field1c__10TObjPlayerFl();
s32 send_item_pickup_request__10TObjPlayerFl();

void TObjPlayer::notify_all_battle_players() {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (get_player_by_client_id(var_r31) != 0U) {
            notify_field1c__10TObjPlayerFl();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void TObjPlayer::update_4p_battle_ctrls() {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (get_player_by_client_id(var_r31) != 0U) {
            send_item_pickup_request__10TObjPlayerFl();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
