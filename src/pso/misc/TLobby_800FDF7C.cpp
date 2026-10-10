#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 gstream_buffer_read_offset;
void TLobby__sub_800FDFEC(void *self, s32 n);
s32 fn_800FE0A8();
s32 fn_800FE0C8(s32);
M2C_UNK move_data__6TLobbyFv(s32, s32, s32);
extern s32 gstream_tmp_buffer;
extern s32 gstream_buffer_read_offset;
s32 read_data__8TGStreamFPvii(void *arg0, s32 dst, s32 size);
}

extern "C" {

void read_data_sync__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK reset_read_state__6TLobbyFv();
M2C_UNK set_read_params__6TLobbyFiii(s32 *, s32, s32);
M2C_UNK run_frame__6TLobbyFv();
s32 TLobby__sub_803CC4C0(s32);
M2C_UNK read_checked_align__6TLobbyFiii();

extern s32 gstream_read_offset;

void read_data_sync__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = arg0;
    read_checked_align__6TLobbyFiii();
    set_read_params__6TLobbyFiii(&sp8, arg1, arg2);
loop_1:
    if (TLobby__sub_803CC4C0(sp8) != 3) {
        run_frame__6TLobbyFv();
        goto loop_1;
    }
    reset_read_state__6TLobbyFv();
    gstream_read_offset += arg1 << 0xB;
}
void TLobby__sub_800FDFEC(void *self, s32 n) {
    gstream_buffer_read_offset = n * ((gstream_buffer_read_offset + n - 1) / n);
}
s32 read_data__8TGStreamFPvii(void *arg0, s32 dst, s32 size) {
    s32 total;
    s32 n;
    total = 0;
    while (size > 0) {
        if (fn_800FE0C8(M2C_FIELD(arg0, s32 *, 0x20)) <= 0) {
            break;
        }
        if (size < fn_800FE0A8()) {
            n = size;
        } else {
            n = fn_800FE0A8();
        }
        move_data__6TLobbyFv(dst, gstream_tmp_buffer + gstream_buffer_read_offset, n);
        dst += n;
        size -= n;
        total += n;
        gstream_buffer_read_offset += n;
    }
    return total;
}

}
