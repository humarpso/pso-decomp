#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_message__17TMCFormatSequenceFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, s32, s32);

void show_message__17TMCFormatSequenceFPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 v = M2C_FIELD(arg0, u32 *, 0x34);
    if (v != 0U) {
        send_and_handle__6TLobbyFPvii(v, arg1, arg2 | 0x81);
    }
}

}
