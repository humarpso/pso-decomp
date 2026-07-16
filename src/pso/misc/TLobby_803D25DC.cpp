#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D25DC(void);
M2C_UNK memset(void *, int, int);

extern M2C_UNK lbl_80587400[];
extern s32 lbl_805D7640;

void TLobby__sub_803D25DC(void) {
    if ((s32) lbl_805D7640 == 0) {
        memset((void *) (lbl_80587400), (int) (0), (int) (0x480));
    }
    lbl_805D7640 += 1;
}

}
