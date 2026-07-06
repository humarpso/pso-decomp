#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TWindowSimpleStatusFv(s32 arg0);
M2C_UNK fn_80246258(s32);
M2C_UNK fn_8024664C(s32);
M2C_UNK fn_80257C28(s32, s32);
s32 fn_8026CBB8(M2C_UNK);
M2C_UNK fn_8026F9F4(s32, s32);
M2C_UNK fn_8026FDC0(s32);
M2C_UNK fn_8026FEA8();
M2C_UNK fn_80270014(s32);
M2C_UNK fn_802701F0(s32);

void run_task__19TWindowSimpleStatusFv(s32 arg0) {
    fn_8026FEA8();
    fn_80270014(arg0);
    fn_802701F0(arg0);
    fn_8026F9F4(arg0, fn_8026CBB8(0x1D));
    fn_8024664C(arg0);
    fn_80246258(arg0);
    fn_80257C28(arg0, arg0 + 0x24);
    fn_8026FDC0(arg0);
}

}
