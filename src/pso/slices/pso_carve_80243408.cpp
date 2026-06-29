#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8002AE38(s32);
M2C_UNK TWindowHelpItem__sub_8025B08C(s32, f32, f32);
extern f32 lbl_805DCA1C;
extern f32 lbl_805DCA20;
extern f32 lbl_805DCA24;

void fn_80243408(s32 arg0, s32 arg1) {
    if (fn_8002AE38(arg1) != 0) {
        TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA20);
        return;
    }
    TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA24);
}

}
