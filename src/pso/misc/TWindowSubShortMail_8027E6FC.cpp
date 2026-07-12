#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_mail_count__19TWindowSubShortMailFPv(void *arg0);
s32 TWindowSubShortMail__sub_8027FAF0();
u32 TLobby__sub_80225924(s32);
s32 TLobby__sub_80266E0C(s32);
M2C_UNK TLobby__sub_80269C6C(u32, s32, M2C_UNK);

void update_mail_count__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        temp_r3 = TLobby__sub_80266E0C(M2C_FIELD(arg0, s32 *, 0x38));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != temp_r3) {
            M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
            if (TLobby__sub_80225924(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
                TLobby__sub_80269C6C(M2C_FIELD(arg0, u32 *, 0x3C), TWindowSubShortMail__sub_8027FAF0(), 0x482);
            }
        }
    }
}

}
