#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjContainerItem__sub_80189C90(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_8010567C(s32, void *, s32, void *);

void TObjContainerItem__sub_80189C90(u8 *arg0, s32 arg1) {
    TLobby__sub_8010567C(arg1, arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x360), arg0);
}

}
