#include "types.h"

extern "C" {

void reset_global__6TLobbyFv(void);
void set_and_notify__6TLobbyFi(int a0);
int TLobby__sub_8022614C(void*);
int update_music_stream_gain(void*);

    extern int lbl_805D6280;
    extern int lbl_805D6284;
void set_and_notify__6TLobbyFi(int a0) { lbl_805D6284 = a0; update_music_stream_gain((void*)(lbl_805D6280)); }

    extern int lbl_805D6294;
    extern int lbl_805D6298;
void reset_global__6TLobbyFv(void) { lbl_805D6298 = 0; TLobby__sub_8022614C((void*)(lbl_805D6294)); }

}
