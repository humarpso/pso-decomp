#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_texture__12TItemTexLoadFPv(u8 *arg0);
M2C_UNK TLobby__sub_803CCE9C(s32);
M2C_UNK free_texture_if_valid(void *);

void unload_texture__12TItemTexLoadFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
        free_texture_if_valid(arg0 + 0x2C);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        TLobby__sub_803CCE9C(M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
}

}
