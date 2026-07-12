#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8023E944(void);
M2C_UNK TAdMultiChgGameModeGC__sub_8023F654();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void TAdMultiChgGameModeGC__sub_8023E944(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 0x1A;
    lbl_805D63C8 = 1;
}

}
