#include "types.h"

extern "C" {

void set_stream_and_load_file__6TLobbyFi(int a0);
void set_stream_state__6TLobbyFi(int a0);
int TGStream__sub_800FDBA8(void);
int load_file__8TGStreamFi(void);

    extern int lbl_805D5338;
void set_stream_and_load_file__6TLobbyFi(int a0) { lbl_805D5338 = a0; load_file__8TGStreamFi(); }

    extern int lbl_805D5338;
void set_stream_state__6TLobbyFi(int a0) { lbl_805D5338 = a0; TGStream__sub_800FDBA8(); }

}
