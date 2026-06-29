#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdStorySelectGC__sub_80207D64(s32 arg0);
M2C_UNK fn_80207BB0();
M2C_UNK fn_80207C60();

extern s32 lbl_805D6060;

void TAdStorySelectGC__sub_80207D64(s32 arg0) {
    lbl_805D6060 = arg0;
    switch (arg0) {
    case 0:
        fn_80207C60();
        return;
    case 1:
        fn_80207BB0();
        return;
    }
}

}
