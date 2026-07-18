#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, int, int, int);
s32 is_open__20TWindowSubSymbolChatFPv();

void close_when_chat_closed__28TWindowSubSymbolChatFaceTypeFPv(u8 *arg0) {
    if (is_open__20TWindowSubSymbolChatFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

}
