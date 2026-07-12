#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);
extern u32 lbl_805D66D0;

void fn_802A9CD8(void) {
    if ((u32) lbl_805D66D0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D66D0);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D66D0);
        lbl_805D66D0 = 0U;
    }
}

}
