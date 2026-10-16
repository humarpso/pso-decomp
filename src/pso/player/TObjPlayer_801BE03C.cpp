#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TPlayerFootStamp.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TWindowSnapShot.h"

extern "C" {

int load_target_cursor_models(void);
int set_player_count__6TLobbyFi(void*);
int TLobby__sub_802A7BD8(void);
int copy_if_space(void);
int load_player_motion_data(void);
int load_player_footstamp(void);
int TObjPlayer__sub_80354E7C(void);

    extern unsigned char lobby_rule_settings[];
    extern int lbl_805D5D7C;
    extern int shared_state_flags;
void TObjPlayer::finalize_shared() { set_player_count__6TLobbyFi((void*)0); TObjPlayer::set_shared_count((int)((void*)0)); TObjPlayer::set_shared_flag((int)((void*)0)); lbl_805D5D7C = 0; ((TLobby *)lobby_rule_settings)->reset_settings_to_default(); shared_state_flags = 0; TLockOnCursor::free_cursor_resources(); TLobby__sub_802A7BD8(); TPlayerFootStamp::free_instance(); TObjPlayer::free_shared_data(); }

    extern int lbl_805D5D7C;
    extern int shared_state_flags;
void TObjPlayer::init_shared() { TObjPlayer::alloc_shared_buffers(); set_player_count__6TLobbyFi((void*)0); TObjPlayer::set_shared_count((int)((void*)1)); TObjPlayer::set_shared_flag((int)((void*)0)); lbl_805D5D7C = 0; TLobby::alloc_snapshot_buffer(); load_player_motion_data(); copy_if_space(); TWindowSnapShot::init_default(); TWindowSnapShot::free_shared_instance(); load_target_cursor_models(); load_player_footstamp(); TObjPlayer__sub_80354E7C(); shared_state_flags = 0; }

}
