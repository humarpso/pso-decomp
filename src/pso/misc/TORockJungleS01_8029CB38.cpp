#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TORockJungleS01__sub_8029CB38(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D65D0;
extern u32 lbl_805D65D4;

void TORockJungleS01__sub_8029CB38(void) {
    if ((u32) lbl_805D65D4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65D4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D65D4);
        lbl_805D65D4 = 0U;
    }
    if ((u32) lbl_805D65D0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D65D0, 1);
        lbl_805D65D0 = 0U;
    }
}

}
