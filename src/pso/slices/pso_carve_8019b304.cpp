#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8019CAB0(void *);
f32 fn_801A0324(f32);
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE0;
extern const f32 lbl_805DBFE4;

void run_task__22TObjAreaWarpEndingJungFv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC4);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (temp_f1 + lbl_805DBFDC);
    if (M2C_FIELD(arg0, f32 *, 0xC4) > (fn_801A0324(temp_f1) - lbl_805DBFE0)) {
        M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    }
    fn_8019CAB0(arg0);
}

}
