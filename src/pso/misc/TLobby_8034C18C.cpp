#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Body_8034C1D0 { u32 w[0x234]; };

struct Big_8034C1D0 { u32 a; Body_8034C1D0 b; };

extern "C" {
extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;
void *TLobby__sub_8034C1FC(void);
s32 TLobby__sub_8034C1D0(u32 dst, s32 src);
}

extern "C" {

void init_once__6TLobbyFi(s32 arg0);

extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;

void init_once__6TLobbyFi(s32 arg0) {
    if (!(lbl_805D6E98 & 2) && (lbl_805D6E9C != 0U)) {
        lbl_805D6E98 |= 2;
        TLobby__sub_8034C1D0((u32)(lbl_805D6E9C), (s32)(arg0));
    }
}

s32 TLobby__sub_8034C1D0(u32 dst, s32 src) {
    *(Big_8034C1D0 *)dst = *(Big_8034C1D0 *)src;
}

void *TLobby__sub_8034C1FC(void) {
    void *p;
    if (!(lbl_805D6E98 & 2)) {
        return NULL;
    }
    p = (void *)lbl_805D6E9C;
    if (p != NULL) {
        return p;
    }
    return NULL;
}

}
