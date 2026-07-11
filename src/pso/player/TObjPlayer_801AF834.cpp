#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801AF834(void);
s32 fn_801AEECC();
M2C_UNK TLobby__sub_801C2678();
M2C_UNK fn_803100FC();

void TObjPlayer__sub_801AF834(void) {
    if (fn_801AEECC() != 0) {
        fn_803100FC();
        return;
    }
    TLobby__sub_801C2678();
}

}
