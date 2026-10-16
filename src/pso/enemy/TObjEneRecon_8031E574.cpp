#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TUnk_80494938.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 init_object__12TObjEneDD_STFv();
s16 obj_getField1c(void *);

extern s32 __vt__12TObjEneRecon[];
extern s32 lbl_805D4130;

u8 *TObjEneRecon__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6) {
    init_object__12TObjEneDD_STFv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjEneRecon;
    ((TUnk_80494938 *)(arg0 + 0x480))->init_common();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D4130;
    *(s16 *)((s8 *)arg0 + 0x434) = obj_getField1c((void *) (arg2));
    ((TObjEneDD *)arg0)->init_common_from((u8 *)arg2);
    *(s16 *)((s8 *)arg0 + 0x1C) = arg3;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x438), (void *) (arg2 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x428), (void *) (arg6));
    ((TObjEneRecon *)arg0)->init_state();
    *(f32 *)((s8 *)arg0 + 0x460) = (f32) (*(f32 *)((s8 *)arg0 + 0x460) + ((TObjEneRecon *)arg2)->get_field_4d0());
    *(f32 *)((s8 *)arg0 + 0x468) = (f32) (*(f32 *)((s8 *)arg0 + 0x468) + ((TObjEneRecon *)arg2)->get_field_4d4());
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    return arg0;
}

}
