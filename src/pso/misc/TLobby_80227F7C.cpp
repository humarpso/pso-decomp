#include "types.h"

extern "C" {

void refresh_render_state__6TLobbyFv(void);
int TLobby__sub_80227B48(float);
int TLobby__sub_802405B0(void*, void*);
int render_tick__Fv(void);

    extern unsigned char lbl_80514F64[];
    extern float lbl_805DC76C;
void refresh_render_state__6TLobbyFv(void) { TLobby__sub_802405B0(lbl_80514F64, (void*)0); TLobby__sub_80227B48(lbl_805DC76C); render_tick__Fv(); }

}
