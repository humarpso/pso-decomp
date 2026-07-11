#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8007BCF4(void);
M2C_UNK fn_8007BC5C(M2C_UNK *);
M2C_UNK fn_801DA7DC(s32, M2C_UNK *);

extern s32 TLobby__data_805D5580;

void TLobby__sub_8007BCF4(void) {
    char sp8[0x84];

    fn_8007BC5C((M2C_UNK *) sp8);
    fn_801DA7DC(TLobby__data_805D5580, (M2C_UNK *) sp8);
}

}
