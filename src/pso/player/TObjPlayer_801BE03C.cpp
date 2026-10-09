#include "types.h"

extern "C" {

void finalize_shared__10TObjPlayerFv(void);
void init_shared__10TObjPlayerFv(void);
int free_cursor_resources__13TLockOnCursorFv(void);
int load_target_cursor_models(void);
int free_shared_data__10TObjPlayerFv(void);
int alloc_shared_buffers__10TObjPlayerFv(void);
int set_shared_flag__10TObjPlayerFi(void*);
int set_shared_count__10TObjPlayerFi(void*);
int set_player_count__6TLobbyFi(void*);
int reset_settings_to_default__6TLobbyFPv(void*);
int TLobby__sub_802A7BD8(void);
int copy_if_space(void);
int alloc_snapshot_buffer__6TLobbyFv(void);
int init_default__15TWindowSnapShotFv(void);
int free_shared_instance__15TWindowSnapShotFv(void);
int load_player_motion_data(void);
int free_instance__16TPlayerFootStampFv(void);
int load_player_footstamp(void);
int TObjPlayer__sub_80354E7C(void);

    extern unsigned char lobby_rule_settings[];
    extern int lbl_805D5D7C;
    extern int shared_state_flags;
void finalize_shared__10TObjPlayerFv(void) { set_player_count__6TLobbyFi((void*)0); set_shared_count__10TObjPlayerFi((void*)0); set_shared_flag__10TObjPlayerFi((void*)0); lbl_805D5D7C = 0; reset_settings_to_default__6TLobbyFPv(lobby_rule_settings); shared_state_flags = 0; free_cursor_resources__13TLockOnCursorFv(); TLobby__sub_802A7BD8(); free_instance__16TPlayerFootStampFv(); free_shared_data__10TObjPlayerFv(); }

    extern int lbl_805D5D7C;
    extern int shared_state_flags;
void init_shared__10TObjPlayerFv(void) { alloc_shared_buffers__10TObjPlayerFv(); set_player_count__6TLobbyFi((void*)0); set_shared_count__10TObjPlayerFi((void*)1); set_shared_flag__10TObjPlayerFi((void*)0); lbl_805D5D7C = 0; alloc_snapshot_buffer__6TLobbyFv(); load_player_motion_data(); copy_if_space(); init_default__15TWindowSnapShotFv(); free_shared_instance__15TWindowSnapShotFv(); load_target_cursor_models(); load_player_footstamp(); TObjPlayer__sub_80354E7C(); shared_state_flags = 0; }

}
