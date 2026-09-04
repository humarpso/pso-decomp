#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80227220(s32 arg0);
void release_bgm_resource__6TLobbyFv(void);
int send_neg30__6TLobbyFv(void);
int set_and_notify_default__6TLobbyFv(void);
void set_target_id__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_803C9CBC(s32);
M2C_UNK init_layout_positions__6TLobbyFv();
int set_and_notify__6TLobbyFi(void*);

int set_and_notify_default__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(0)); }
int send_neg30__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(-30)); }

extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;

void release_bgm_resource__6TLobbyFv(void) {
    if ((s32) lbl_805D6330 != 0) {
        TLobby__sub_803C9CBC(M2C_FIELD(lbl_804CB850, s32 *, 4));
        lbl_805D6330 = 0;
        init_layout_positions__6TLobbyFv();
    }
}

extern s32 lbl_805D6300;
extern s32 lbl_805D631C;

void TLobby__sub_80227220(s32 arg0) {
    if ((s32) lbl_805D6300 == 4) {
        lbl_805D631C = arg0;
    }
}

extern s32 lbl_805D6300;
extern s32 lbl_805D631C;

void set_target_id__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D6300 != 4) {
        lbl_805D631C = arg0;
    }
}

}
