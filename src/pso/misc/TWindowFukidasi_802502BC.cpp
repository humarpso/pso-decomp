#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_card_match_enabled__15TWindowFukidasiFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_8039DAFC(s32, s32);
s32 TWindowSubComCard__sub_8024477C();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

s32 check_card_match_enabled__15TWindowFukidasiFPvi(void *arg0, s32 arg1) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x72) != 0) {
        return 0;
    }
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    return (u32) __cntlzw(TLobby__sub_8039DAFC(TWindowSubComCard__sub_8024477C(), arg1)) >> 5;
}

}
