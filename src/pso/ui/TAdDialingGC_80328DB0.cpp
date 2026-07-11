#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TAdDialingGC__ct(void *arg0);
M2C_UNK __ct__7TObjectFP7TObject();
s32 fn_80145E90();
s32 fn_8014618C();

extern M2C_UNK __vt__12TAdDialingGC[];
extern s32 lbl_805D41B0;
extern void *TAdDialingGC__data_805D6C78;

void *TAdDialingGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdDialingGC;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D41B0;
    TAdDialingGC__data_805D6C78 = arg0;
    if (fn_80145E90() != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    } else if (fn_8014618C() == 1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    return arg0;
}

}
