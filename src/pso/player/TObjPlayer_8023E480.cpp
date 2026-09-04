#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8023E734(u32 arg0);
s32 free_texture_if_valid(u32 arg0);
void init_buffers(void);
s32 notify_fish_if_valid__10TObjPlayerFUi(u32 arg0);
int TLobby__sub_803DA16C();
M2C_UNK TObjPlayer__sub_803DDC50();
M2C_UNK memset(M2C_UNK, M2C_UNK, M2C_UNK);
int set_global_param__8TObjFishFi();
s32 xmalloc__FUl(M2C_UNK);

s32 notify_fish_if_valid__10TObjPlayerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    set_global_param__8TObjFishFi();
    return 1;
}

s32 free_texture_if_valid(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    TLobby__sub_803DA16C();
    return 1;
}

s32 fn_8023E734(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    TObjPlayer__sub_803DDC50();
    return 1;
}

extern s32 lbl_805D63C0;
extern s32 lbl_805D63C4;

void init_buffers(void) {
    s32 p = xmalloc__FUl(0x1800);
    lbl_805D63C0 = p;
    memset(p, 0, 0x1800);
    lbl_805D63C4 = xmalloc__FUl(0x3800);
}

}
