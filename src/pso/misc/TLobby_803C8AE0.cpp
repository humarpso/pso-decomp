#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803C8AE0(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_803CF100(int, int, int);
s32 TLobby__sub_803CF1A8(int);

s32 TLobby__sub_803C8AE0(u8 *arg0, s32 arg1) {
    TLobby__sub_803CF100((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10) + arg1), (int) (0));
    return TLobby__sub_803CF1A8((int) (M2C_FIELD(arg0, s32 *, 8))) - M2C_FIELD(arg0, s32 *, 0x10);
}

}
