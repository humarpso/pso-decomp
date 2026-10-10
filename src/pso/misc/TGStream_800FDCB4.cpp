#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void read_sectors_sync__8TGStreamFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK reset_read_state__6TLobbyFv();
M2C_UNK set_read_params__6TLobbyFiii(void *, s32, s32);
M2C_UNK run_frame__6TLobbyFv();
s32 TLobby__sub_803CC4C0(s32);
M2C_UNK read_checked_align__6TLobbyFiii(s32);

extern s32 gstream_read_offset;

void read_sectors_sync__8TGStreamFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    read_checked_align__6TLobbyFiii(M2C_FIELD(arg0, s32 *, 0x20));
    set_read_params__6TLobbyFiii(arg0 + 0x20, arg1, arg2);
loop_1:
    if (TLobby__sub_803CC4C0(M2C_FIELD(arg0, s32 *, 0x20)) != 3) {
        run_frame__6TLobbyFv();
        goto loop_1;
    }
    reset_read_state__6TLobbyFv();
    gstream_read_offset += arg1 << 0xB;
}

}
