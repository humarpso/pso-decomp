#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TLobby__sub_80226308(void);
void update_lobby_subsystems__6TLobbyFv(void);
int init_layout_positions__6TLobbyFv(void);
    extern int lbl_805D62B0;
    extern int lbl_805D62B4;
    extern int lbl_805D62B8;
int TLobby__sub_80226B64(void);
int set_and_notify__6TLobbyFi(void*);
int set_and_notify_default__6TLobbyFv(void);
int set_and_notify__6TLobbyFi(void*);
int send_neg30__6TLobbyFv(void);
M2C_UNK TLobby__sub_803C9CBC(s32);
int init_layout_positions__6TLobbyFv(void);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;
void release_bgm_resource__6TLobbyFv(void);
extern s32 lbl_805D6300;
extern s32 lbl_805D631C;
void TLobby__sub_80227220(s32 arg0);
extern s32 lbl_805D6300;
extern s32 lbl_805D631C;
void set_target_id__6TLobbyFi(s32 arg0);
}

extern "C" {

void update_lobby_subsystems__6TLobbyFv(void);
int TLobby__sub_8022644C(void);
int TLobby__sub_80227248(void);

void update_lobby_subsystems__6TLobbyFv(void) { TLobby__sub_8022644C(); TLobby__sub_80227248(); }
int TLobby__sub_80226B64(void) { update_lobby_subsystems__6TLobbyFv(); init_layout_positions__6TLobbyFv(); TLobby__sub_80226308(); lbl_805D62B4 = 0; lbl_805D62B8 = 0; lbl_805D62B0 = 1; return 0; }
int set_and_notify_default__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(0)); }
int send_neg30__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(-30)); }
void release_bgm_resource__6TLobbyFv(void) {
    if ((s32) lbl_805D6330 != 0) {
        TLobby__sub_803C9CBC(M2C_FIELD(lbl_804CB850, s32 *, 4));
        lbl_805D6330 = 0;
        init_layout_positions__6TLobbyFv();
    }
}
void TLobby__sub_80227220(s32 arg0) {
    if ((s32) lbl_805D6300 == 4) {
        lbl_805D631C = arg0;
    }
}
void set_target_id__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D6300 != 4) {
        lbl_805D631C = arg0;
    }
}

}
