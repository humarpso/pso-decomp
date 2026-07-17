#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_page__26TWindowSubInformationBoardFPvi(void *arg0, s32 arg1);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, s32, M2C_UNK);
s32 TLobby__sub_8034C1FC();

void set_page__26TWindowSubInformationBoardFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) != arg1) && (arg1 != -1)) {
        temp_r3 = TLobby__sub_8034C1FC();
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x34), temp_r3 + (arg1 * 0xBC) + 0x14, 0x80);
        }
    }
}

}
