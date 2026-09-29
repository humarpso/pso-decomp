#include "types.h"

extern "C" {

void reset_camera_if_fullscreen__6TLobbyFPv(void* p);
int TCameraCtrl__sub_80068958(void*);
void TLobby__sub_801F494C(u16 arg0);
u32 get_card_window__17TWindowSubComCardFUi(u32);
void *memcpy(void *, void *, u32);
extern u8 lbl_805127F8[0x200];
int is_not_split_screen__13TRaderMapCoreFv(void*);

void reset_camera_if_fullscreen__6TLobbyFPv(void* p) { if (is_not_split_screen__13TRaderMapCoreFv(p) == 1) { TCameraCtrl__sub_80068958((void*)0); ((int (*)(void))TLobby__sub_801F494C)(); } }

void TLobby__sub_801F494C(u16 arg0) {
    u32 temp_r3;
    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != 0U) {
        memcpy(lbl_805127F8, (void *)(temp_r3 + 0x44), 0x200);
    }
}

}
