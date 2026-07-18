#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_mail_count__19TWindowSubShortMailFPv(void *arg0);
s32 get_mail_ptr__19TWindowSubShortMailFPv();
u32 TLobby__sub_80225924(s32);
s32 select_cursor_entry__6TLobbyFPv(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);

void update_mail_count__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        temp_r3 = select_cursor_entry__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0x38));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != temp_r3) {
            M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
            if (TLobby__sub_80225924(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
                send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x3C), get_mail_ptr__19TWindowSubShortMailFPv(), 0x482);
            }
        }
    }
}

}
