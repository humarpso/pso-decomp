#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80102DD4(void *, u16);
u32 TPhotonMylla__sub_80154CB4(u16);

s32 fn_8036CDA8(void *arg0) {
    if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2)) == 0U) {
        return 0;
    }
    return (u32) __cntlzw(TLobby__sub_80102DD4(arg0, M2C_FIELD(arg0, u16 *, 2))) >> 5;
}

}
