#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void disable_window_flags__6TLobbyFPv(void* a0);
void handle_state__6TLobbyFi(s32 arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200B28();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200C00();
s32 TLobby__sub_80146740();
M2C_UNK close_and_set_state_13__6TLobbyFv(M2C_UNK);
M2C_UNK send_server_time_request__9TProtocolFv(s32);
M2C_UNK reset_state__6TLobbyFv(M2C_UNK);
int set_window_flags_off__11TWindowCtrlFPvi(void*, void*);

    extern int lbl_805D53A0;
void disable_window_flags__6TLobbyFPv(void* a0) { set_window_flags_off__11TWindowCtrlFPvi((void*)(lbl_805D53A0), a0); }

extern s32 TLobby__data_805D5580;

void handle_state__6TLobbyFi(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        TAdSinglePlyChrSelectGC__sub_80200C00();
        temp_r3 = TLobby__sub_80146740();
        switch (temp_r3) {
        case 0:
            send_server_time_request__9TProtocolFv(TLobby__data_805D5580);
            return;
        case 1:
            close_and_set_state_13__6TLobbyFv(0x13);
            return;
        case 2:
            close_and_set_state_13__6TLobbyFv(0x14);
            return;
        }
    } else {
        reset_state__6TLobbyFv(0x20);
        TAdSinglePlyChrSelectGC__sub_80200B28();
        TAdSinglePlyChrSelectGC__sub_80200C00();
    }
}

}
