#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1);
void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1);
void set_animated_target__20TWindowSubStatusDispFPvif(void *arg0, s32 arg1, f32 farg0);
M2C_UNK __dl__FPv(void *);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
f32 get_random_float__8TObjFishFv(f32, f32);

extern M2C_UNK lbl_804CF9C8[];

void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9C8;
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8044F010;
extern const f32 lbl_805DCF58;
extern const f32 lbl_805DCF5C;
extern const f32 lbl_805DCF60;

void set_animated_target__20TWindowSubStatusDispFPvif(void *arg0, s32 arg1, f32 farg0) {
    f32 temp_f2;
    f32 var_f31;

    if (M2C_FIELD(arg0, f32 *, 0x28) != (f32) arg1) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) arg1;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x28);
        var_f31 = temp_f2 - M2C_FIELD(arg0, f32 *, 0x24);
        var_f31 = var_f31 / farg0;
        if (get_random_float__8TObjFishFv(var_f31, temp_f2) < lbl_805DCF5C) {
            if (var_f31 > lbl_805DCF58) {
                var_f31 = lbl_805DCF5C;
            } else {
                var_f31 = lbl_805DCF60;
            }
        }
        M2C_FIELD(arg0, f32 *, 0x2C) = var_f31;
    }
}

extern M2C_UNK lbl_804CF9E0[];

void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9E0;
        TWindowSubStatusDisp__sub_80259CE4((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
