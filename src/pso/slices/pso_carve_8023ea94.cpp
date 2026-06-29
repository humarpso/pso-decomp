#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8023F654();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdEnterSerialAccessGC__sub_8023EA94(void) {
    fn_8023F654();
    lbl_805D3848 = 0x10;
    lbl_805D63C8 = 1;
}

}
