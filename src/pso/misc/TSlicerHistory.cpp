#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__ct__14TSlicerHistoryFv(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);
M2C_UNK TObjPlayer__sub_80020898(void *, void *);
M2C_UNK TRaderMapCore__sub_8002F588(void *, void *);
s32 TTecSlicer__sub_8023BE28(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject();

extern M2C_UNK __vt__14TSlicerHistory[];
extern s32 lbl_805D382C;
extern const f32 lbl_805DC948;
extern const f32 lbl_805DC950;

u8 *__ct__14TSlicerHistoryFv(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TSlicerHistory;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D382C;
    TObjPlayer__sub_80020898((void *) (arg0 + 0x1C), (void *) (arg1 + 0x5C));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg1 + 0x38));
    M2C_FIELD(arg0, s32 *, 0x38) = arg2;
    if (arg3 != 0U) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 1;
        TRaderMapCore__sub_8002F588((void *) (arg0 + 0x3C), (void *) (arg3));
    } else {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC948;
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DC950;
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DC950;
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DC950;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = TTecSlicer__sub_8023BE28((void *) (arg1));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x4C), (void *) (arg1 + 0x68));
    M2C_FIELD(arg0, s32 *, 0x58) = arg4;
    return arg0;
}

}
