#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int send_and_handle__6TLobbyFPvii(void *, int, int);
s32 create_message_window__6TLobbyFiiUis(s32, s32, s32, s32);
u8 * get_window_layout_position(s32);
extern M2C_UNK lbl_80477C98[];
u8 *fn_80339954(u8 *arg0, s32 arg1);
}

extern "C" {

u8 *fn_80339954(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)((void *) create_message_window__6TLobbyFiiUis((s32) get_window_layout_position(0x5B), (s32) lbl_80477C98, 1, M2C_FIELD(arg0, s32 *, 0x20)));
    send_and_handle__6TLobbyFPvii(temp_r3, arg1, 0x82);
    return temp_r3;
}

}
