#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK fn_80278518(void *, int);
extern s32 TLobby__data_805D5EBC;
extern u32 TLobby__data_805D5EC0;
void TLobby__sub_801E76A8(s32 arg0);
}

extern "C" {

void close_active_window__6TLobbyFi(int a0);
int set_close_flag__11TWindowCtrlFv(void);
int close_window_if_active(void*);
int set_flag_bit2__11TWindowCtrlFv(void);

    int request_active_window_close(void);
    extern int* TLobby__data_805D5E78;
    extern int lbl_805D53A0;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
void close_active_window__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = -1; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 12; set_flag_bit2__11TWindowCtrlFv(); close_window_if_active((void*)(lbl_805D53A0)); request_active_window_close(); set_close_flag__11TWindowCtrlFv(); }
void TLobby__sub_801E76A8(s32 arg0) {
    if ((u32) TLobby__data_805D5EC0 != 0U) {
        fn_80278518((void *) (TLobby__data_805D5EBC), (int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
    }
}

}
