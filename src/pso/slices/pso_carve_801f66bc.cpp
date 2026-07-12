#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
M2C_UNK fn_801F6594(void *, s32, M2C_UNK);

void fn_801F66BC(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1E38(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        fn_801F6594(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C), 0);
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        fn_801F6594(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6B), 0);
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
    }
}

}
