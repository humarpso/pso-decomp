#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 find_entity_by_id(int);
extern const f32 lbl_805DC844;
void grants_flash_update(u8 *arg0);
}

extern "C" {

void grants_flash_update(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x1C)));
    if (temp_r3 != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (temp_r3 + 0x38));
    }
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) >= 7) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0x38) <= lbl_805DC844) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
