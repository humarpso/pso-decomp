#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__14TWindowMessageFPv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80246258(void *);
M2C_UNK fn_8024664C(void *);
M2C_UNK fn_80257C28(void *, void *);
M2C_UNK fn_802695A8(void *);
M2C_UNK fn_80269664(void *);
M2C_UNK fn_802697B4(void *);
M2C_UNK fn_802698C4(void *);

void draw__14TWindowMessageFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    fn_802698C4(arg0);
    fn_802697B4(arg0);
    fn_80269664(arg0);
    fn_802695A8(arg0);
    fn_8024664C(arg0);
    TWindowSubComCard__sub_80246258(arg0);
    fn_80257C28(arg0, arg0 + 0x24);
}

}
