#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowChatSymbol__sub_80248774(void);
void TWindowChatSymbol__sub_80248778(void *arg0);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 set_from_key__20TWindowSubSymbolChatFii(s32, s32);

void TWindowChatSymbol__sub_80248774(void) {  }
void TWindowChatSymbol__sub_80248778(void *arg0) {
    set_from_key__20TWindowSubSymbolChatFii(M2C_FIELD(arg0, s32 *, 0x20), TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x1C)));
}

}
