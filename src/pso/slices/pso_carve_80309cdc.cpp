#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __ct__7TObjectFP7TObject();
extern M2C_UNK __vt__22TChCrTagInformationStr[];
extern s32 lbl_805D40B8;
extern const f32 lbl_805DF108;

void *__ct__22TChCrTagInformationStrFv(void *arg0, M2C_UNK arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TChCrTagInformationStr;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40B8;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) <= 2) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x11;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) * 7);
    } else {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x12;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((M2C_FIELD(arg0, s32 *, 0x20) - 3) * 7);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 5;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DF108;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
