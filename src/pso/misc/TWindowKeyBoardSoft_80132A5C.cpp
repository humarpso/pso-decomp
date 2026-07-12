#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Inner_80132A5C { char pad8[0x8]; u32 f8; };
struct Outer_80132A5C { struct Inner_80132A5C *f0; };

extern "C" {

void TWindowKeyBoardSoft__sub_80132A5C(void);
M2C_UNK TLobby__sub_803DA16C(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern struct Outer_80132A5C *lbl_805D5540;

void TWindowKeyBoardSoft__sub_80132A5C(void) {
    if (lbl_805D5540 != NULL) {
        struct Inner_80132A5C *inner = lbl_805D5540->f0;
        if (inner->f8 != 0U) {
            TLobby__sub_803DA16C(lbl_805D5540);
        }
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5540);
        lbl_805D5540 = NULL;
    }
}

}
