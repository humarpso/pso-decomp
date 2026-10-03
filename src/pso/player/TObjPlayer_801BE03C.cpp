#include "types.h"

extern "C" {

void finalize_shared__10TObjPlayerFv(void);
void init_shared__10TObjPlayerFv(void);
int TLockOnCursor__sub_8013DBF4(void);
int TLockOnCursor__sub_8013DC38(void);
int free_shared_data__10TObjPlayerFv(void);
int TObjPlayer__sub_801BDFC4(void);
int set_shared_flag__10TObjPlayerFi(void*);
int set_shared_count__10TObjPlayerFi(void*);
int set_player_count__6TLobbyFi(void*);
int reset_settings_to_default__6TLobbyFPv(void*);
int TLobby__sub_802A7BD8(void);
int copy_if_space(void);
int TLobby__sub_802A7C5C(void);
int init_default__15TWindowSnapShotFv(void);
int free_shared_instance__15TWindowSnapShotFv(void);
int load_player_motion_data(void);
int free_instance__16TPlayerFootStampFv(void);
int load_player_footstamp(void);
int TObjPlayer__sub_80354E7C(void);

    extern unsigned char lbl_8050EA40[];
    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void finalize_shared__10TObjPlayerFv(void) { set_player_count__6TLobbyFi((void*)0); set_shared_count__10TObjPlayerFi((void*)0); set_shared_flag__10TObjPlayerFi((void*)0); lbl_805D5D7C = 0; reset_settings_to_default__6TLobbyFPv(lbl_8050EA40); lbl_805D5D88 = 0; TLockOnCursor__sub_8013DBF4(); TLobby__sub_802A7BD8(); free_instance__16TPlayerFootStampFv(); free_shared_data__10TObjPlayerFv(); }

    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void init_shared__10TObjPlayerFv(void) { TObjPlayer__sub_801BDFC4(); set_player_count__6TLobbyFi((void*)0); set_shared_count__10TObjPlayerFi((void*)1); set_shared_flag__10TObjPlayerFi((void*)0); lbl_805D5D7C = 0; TLobby__sub_802A7C5C(); load_player_motion_data(); copy_if_space(); init_default__15TWindowSnapShotFv(); free_shared_instance__15TWindowSnapShotFv(); TLockOnCursor__sub_8013DC38(); load_player_footstamp(); TObjPlayer__sub_80354E7C(); lbl_805D5D88 = 0; }

}
