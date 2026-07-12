#include "types.h"

extern "C" {

void reset_camera_if_fullscreen__6TLobbyFPv(void* p);
int TCameraCtrl__sub_80068958(void*);
int TLobby__sub_801F494C(void);
int is_not_split_screen__13TRaderMapCoreFv(void*);

void reset_camera_if_fullscreen__6TLobbyFPv(void* p) { if (is_not_split_screen__13TRaderMapCoreFv(p) == 1) { TCameraCtrl__sub_80068958((void*)0); TLobby__sub_801F494C(); } }

}
