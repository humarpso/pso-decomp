#include "types.h"

extern "C" {

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6);
s32 init_state__12TObjEneReconFv(void *);
f32 get_field_4d4__12TObjEneReconFv(void *);
f32 get_field_4d0__12TObjEneReconFv(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 init_common__18TObjEneMe3SinowZoaFv(void *);
s32 init_common_from__9TObjEneDDFPvPv(void *, void *);
s32 init_object__9TObjEneDDFv();
s16 obj_getField1c(void *);

extern s32 __vt__12TObjEneRecon[];
extern s32 lbl_805D4130;

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6) {
    init_object__9TObjEneDDFv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjEneRecon;
    init_common__18TObjEneMe3SinowZoaFv((void *) (arg0 + 0x480));
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D4130;
    *(s16 *)((s8 *)arg0 + 0x434) = obj_getField1c((void *) (arg2));
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    *(s16 *)((s8 *)arg0 + 0x1C) = arg3;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x438), (void *) (arg2 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x428), (void *) (arg6));
    init_state__12TObjEneReconFv((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0x460) = (f32) (*(f32 *)((s8 *)arg0 + 0x460) + get_field_4d0__12TObjEneReconFv((void *) (arg2)));
    *(f32 *)((s8 *)arg0 + 0x468) = (f32) (*(f32 *)((s8 *)arg0 + 0x468) + get_field_4d4__12TObjEneReconFv((void *) (arg2)));
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    return arg0;
}

}
