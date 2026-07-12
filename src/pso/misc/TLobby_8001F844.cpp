#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8001F844(void);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
M2C_UNK fn_800FE2D8();
void xfree__FPv(void*);

extern s32 lbl_805D4ACC;
extern u32 lbl_805D4AD8;

void TLobby__sub_8001F844(void) {
    if ((u32) lbl_805D4AD8 != 0U) {
        xfree__FPv((void*)lbl_805D4AD8);
        lbl_805D4AD8 = 0U;
    }
    fn_800FE2D8();
    safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D4ACC);
    lbl_805D4ACC = 0;
}

}
