#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001EEF4();
s32 fn_8001EEFC(M2C_UNK *);
M2C_UNK fn_80073DC4(s32, M2C_UNK);
extern M2C_UNK lbl_8044BEB0[];
extern s32 lbl_805D61E4;

void TQuestListOnline__sub_80217BA8(s32 arg0) {
    if (fn_8001EEF4() != 0) {
        lbl_805D61E4 = fn_8001EEFC(lbl_8044BEB0);
        fn_80073DC4(arg0, 6);
    }
}

}
