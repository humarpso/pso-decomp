#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindow__close(void *);
extern s32 TAdPlyStatusGC__data_805D6DB0;

void fn_802E1178(void *arg0, s32 arg1) {
    TAdPlyStatusGC__data_805D6DB0 = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
}

}
