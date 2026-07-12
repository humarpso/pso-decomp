#include "types.h"

extern "C" {

void finalize_shared__10TObjPlayerFv(void);
void init_shared__10TObjPlayerFv(void);
int TLockOnCursor__sub_8013DBF4(void);
int TLockOnCursor__sub_8013DC38(void);
int free_shared_data__10TObjPlayerFv(void);
int TObjPlayer__sub_801BDFC4(void);
int TObjPlayer__sub_801BEC98(void*);
int TObjPlayer__sub_801BECA0(void*);
int TLobby__sub_8013A4A0(void*);
int reset_settings_to_default__6TLobbyFPv(void*);
int TLobby__sub_802A7BD8(void);
int copy_if_space(void);
int TLobby__sub_802A7C5C(void);
int TWindowSnapShot__sub_802A7D68(void);
int free_shared_instance__15TWindowSnapShotFv(void);
int TWindowSnapShot__sub_802A7E28(void);
int free_instance__16TPlayerFootStampFv(void);
int load_player_footstamp(void);
int TObjPlayer__sub_80354E7C(void);

    extern unsigned char lbl_8050EA40[];
    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void finalize_shared__10TObjPlayerFv(void) { TLobby__sub_8013A4A0((void*)0); TObjPlayer__sub_801BECA0((void*)0); TObjPlayer__sub_801BEC98((void*)0); lbl_805D5D7C = 0; reset_settings_to_default__6TLobbyFPv(lbl_8050EA40); lbl_805D5D88 = 0; TLockOnCursor__sub_8013DBF4(); TLobby__sub_802A7BD8(); free_instance__16TPlayerFootStampFv(); free_shared_data__10TObjPlayerFv(); }

    extern int lbl_805D5D7C;
    extern int lbl_805D5D88;
void init_shared__10TObjPlayerFv(void) { TObjPlayer__sub_801BDFC4(); TLobby__sub_8013A4A0((void*)0); TObjPlayer__sub_801BECA0((void*)1); TObjPlayer__sub_801BEC98((void*)0); lbl_805D5D7C = 0; TLobby__sub_802A7C5C(); TWindowSnapShot__sub_802A7E28(); copy_if_space(); TWindowSnapShot__sub_802A7D68(); free_shared_instance__15TWindowSnapShotFv(); TLockOnCursor__sub_8013DC38(); load_player_footstamp(); TObjPlayer__sub_80354E7C(); lbl_805D5D88 = 0; }

}
