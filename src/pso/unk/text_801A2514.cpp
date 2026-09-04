#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u16 lbl_805D5CD2;
extern u16 lbl_805D5CD8;
void TLobby__sub_801A2514(s32 arg0);
extern u16 lbl_805D5CD4;
extern u16 lbl_805D5CD6;
void TLobby__sub_801A2528(s32 arg0);
}

extern "C" {

void TLobby__sub_801A2514(s32 arg0) {
    u16 temp_r0;
    temp_r0 = lbl_805D5CD2 + arg0;
    lbl_805D5CD2 = temp_r0;
    lbl_805D5CD8 = temp_r0;
}

void TLobby__sub_801A2528(s32 arg0) {
    u16 temp_r0;
    temp_r0 = lbl_805D5CD4 + arg0;
    lbl_805D5CD4 = temp_r0;
    lbl_805D5CD6 = temp_r0;
}

}
