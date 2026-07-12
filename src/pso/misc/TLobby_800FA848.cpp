#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800FA848(void *arg0);

extern void *lbl_805D5360;
extern void *lbl_805D5364;
extern s32 lbl_805D5368;
extern s32 lbl_805D5378;

void TLobby__sub_800FA848(void *arg0) {
    if ((void *) lbl_805D5360 == NULL) {
        lbl_805D5360 = arg0;
    }
    if ((void *) lbl_805D5364 != NULL) {
        M2C_FIELD(lbl_805D5364, void **, 0x38) = arg0;
    }
    lbl_805D5364 = arg0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    lbl_805D5368 += 1;
    M2C_FIELD(arg0, s32 *, 4) = lbl_805D5378++;
}

}
