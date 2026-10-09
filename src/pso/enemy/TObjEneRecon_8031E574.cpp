#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6);
M2C_UNK init_state__12TObjEneReconFPv(void *);
f32 get_field_4d4__12TObjEneReconFPv(void *);
f32 get_field_4d0__12TObjEneReconFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK init_common__18TObjEneMe3SinowZoaFPv(void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
M2C_UNK init_object__9TObjEneDDFPv();
s16 obj_getField1c(void *);

extern M2C_UNK __vt__12TObjEneRecon[];
extern s32 lbl_805D4130;

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6) {
    init_object__9TObjEneDDFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEneRecon;
    init_common__18TObjEneMe3SinowZoaFPv((void *) (arg0 + 0x480));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4130;
    M2C_FIELD(arg0, s16 *, 0x434) = obj_getField1c((void *) (arg2));
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x438), (void *) (arg2 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x428), (void *) (arg6));
    init_state__12TObjEneReconFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x460) = (f32) (M2C_FIELD(arg0, f32 *, 0x460) + get_field_4d0__12TObjEneReconFPv((void *) (arg2)));
    M2C_FIELD(arg0, f32 *, 0x468) = (f32) (M2C_FIELD(arg0, f32 *, 0x468) + get_field_4d4__12TObjEneReconFPv((void *) (arg2)));
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    return arg0;
}

}
