#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TBoss4Type3__sub_8005254C(int);
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;
void run_task__11TObjDFYutaiFv(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void run_task__11TObjDFYutaiFv(u8 *arg0) {
    f32 temp_f1;
    if (TBoss4Type3__sub_8005254C((int) (M2C_FIELD(arg0, u16 *, 0x20))) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(arg0, f32 *, 0x28));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
    if (temp_f1 <= lbl_805D8A30) {
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D8A30;
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (temp_f1 >= lbl_805D8A34) {
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D8A34;
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

}
