#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_load__9TItemLoadFPvi(void *arg0, s32 arg1);
M2C_UNK TLobby__sub_803CCB5C(s32, s32, s32, void *);

void request_load__9TItemLoadFPvi(void *arg0, s32 arg1) {
    TLobby__sub_803CCB5C(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC), arg1, arg0);
}

}
