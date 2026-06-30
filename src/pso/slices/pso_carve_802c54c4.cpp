#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001A430();
M2C_UNK fn_802C50EC(s32);
M2C_UNK fn_802C522C(s32);
M2C_UNK fn_802C5314(s32);
extern s32 lbl_805D67DC;

void fn_802C54C4(s32 arg0) {
    if (fn_8001A430() != 1) {
        fn_802C5314(arg0);
        switch ((s32) lbl_805D67DC) {
        case 0:
            fn_802C522C(arg0);
            return;
        case 1:
            fn_802C50EC(arg0);
            break;
        }
    }
}

}
