#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_80137CC8();
M2C_UNK TLobby__sub_80138858();
M2C_UNK send_text_list__9TProtocolFv(s32);
extern s32 lbl_805D5580;

void TLobby__sub_80137FEC(void) {
    TLobby__sub_80138858();
    TLobby__sub_80137CC8();
    send_text_list__9TProtocolFv(lbl_805D5580);
}

}
