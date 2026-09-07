#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8009A704_lbl_8048FE7C {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void fn_8009A598(void *);
void fn_8009A640(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8009A704_lbl_8048FE7C lbl_8048FE7C;
extern s32 lbl_805D29AC;
extern const f32 lbl_805D9850;
extern const f32 lbl_805D9864;
u8 *fn_8009A704(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_8009A704_lbl_8048FE7C_size[sizeof(RecoveredGlobal_8009A704_lbl_8048FE7C) == 0x18 ? 1 : -1];
u8 *fn_8009A704(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8048FE7C.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29AC;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D9850;
    M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805D9864;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    fn_8009A640(arg0);
    fn_8009A598(arg0);
    return arg0;
}

}
