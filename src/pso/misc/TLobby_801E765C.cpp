#include "types.h"

extern "C" {

void close_active_window__6TLobbyFi(int a0);
int TWindowCtrl__sub_800FD884(void);
int close_window_if_active(void*);
int set_flag_bit2__11TWindowCtrlFv(void);

    int request_active_window_close(void);
    extern int* TLobby__data_805D5E78;
    extern int lbl_805D53A0;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
void close_active_window__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = -1; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 12; set_flag_bit2__11TWindowCtrlFv(); close_window_if_active((void*)(lbl_805D53A0)); request_active_window_close(); TWindowCtrl__sub_800FD884(); }

}
