#include "types.h"

extern "C" {
s32 TLobby__sub_801F45FC(s32);
extern s32 lbl_80449D48[];
void TLobby__sub_801F48B0(void);
s32 TLobby__sub_801F45FC(s32);
void reset_camera_if_fullscreen__6TLobbyFPv(void* p);
extern s32 lbl_80449D48[];
void TLobby__sub_801F48FC(void);
}

extern "C" {

void reset_camera_if_fullscreen__6TLobbyFPv(void* p);
int TCameraCtrl__sub_80068958(void*);
void TLobby__sub_801F494C(u16 arg0);
u32 get_card_window__17TWindowSubComCardFUi(u32);
void *memcpy(void *, void *, u32);
extern u8 lbl_805127F8[0x200];
int is_not_split_screen__13TRaderMapCoreFv(void*);

void reset_camera_if_fullscreen__6TLobbyFPv(void* p) { if (is_not_split_screen__13TRaderMapCoreFv(p) == 1) { TCameraCtrl__sub_80068958((void*)0); ((int (*)(void))TLobby__sub_801F494C)(); } }

void TLobby__sub_801F48B0(void) {
    s32 i;
    for (i = 0; lbl_80449D48[i] != -1; i++) {
        TLobby__sub_801F45FC(lbl_80449D48[i]);
    }
}

void TLobby__sub_801F48FC(void) {
    s32 i;
    for (i = 0; lbl_80449D48[i] != -1; i++) {
        TLobby__sub_801F45FC(lbl_80449D48[i]);
    }
    ((void (*)(void))reset_camera_if_fullscreen__6TLobbyFPv)();
}

void TLobby__sub_801F494C(u16 arg0) {
    u32 temp_r3;
    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != 0U) {
        memcpy(lbl_805127F8, (void *)(temp_r3 + 0x44), 0x200);
    }
}

}
