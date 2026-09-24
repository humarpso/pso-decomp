#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 TAdSinglePlyChrSelectGC__sub_8007C3E0(void *self);
u16 TAdSinglePlyChrSelectGC__sub_8007C584(void *self, u16 x);
}

extern "C" {

s32 init_single_player_chr_select__6TLobbyFPv(void* arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(void*, int);

s32 init_single_player_chr_select__6TLobbyFPv(void* arg0) {
    TAdSinglePlyChrSelectGC__sub_8007C48C(arg0, 0);
    return (s32)arg0;
}
u16 TAdSinglePlyChrSelectGC__sub_8007C584(void *self, u16 x) {
    return (x * (TAdSinglePlyChrSelectGC__sub_8007C3E0(self) >> 16)) >> 16;
}

}
