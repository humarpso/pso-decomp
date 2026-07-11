#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_entry__9TWindowDDFi(s32 arg0);

extern s32 TWindowDD__data_805D6E30;
extern s32 lbl_805D6E3C;

s32 get_entry__9TWindowDDFi(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= (s32) lbl_805D6E3C)) {
        return 0;
    }
    return TWindowDD__data_805D6E30 + (arg0 * 8);
}

}
