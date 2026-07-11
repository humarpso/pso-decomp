#include "types.h"

extern "C" {

void TLobby__sub_801E765C(int a0);
int fn_800FD884(void);
int fn_8024AB18(void*);
int set_flag_bit2__11TWindowCtrlFv(void);

    int request_active_window_close(void);
    extern int* TLobby__data_805D5E78;
    extern int lbl_805D53A0;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
void TLobby__sub_801E765C(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = -1; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 12; set_flag_bit2__11TWindowCtrlFv(); fn_8024AB18((void*)(lbl_805D53A0)); request_active_window_close(); fn_800FD884(); }

}
