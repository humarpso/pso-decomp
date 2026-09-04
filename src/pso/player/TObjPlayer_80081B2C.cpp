#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 advance_hit_counter__10TObjPlayerFPvUi(void *arg0, u32 arg1);
int queue_destruction__10TObjPlayerFPv(void* p);
int queue_destruction__7TObjectFv(void*);

extern f32 lbl_805D9378;

f32 advance_hit_counter__10TObjPlayerFPvUi(void *arg0, u32 arg1) {
    if (arg1 != 0U) {
        M2C_FIELD(arg0, s32 *, 0x354) = (s32) (M2C_FIELD(arg0, s32 *, 0x354) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x354) >= 3) {
            M2C_FIELD(arg0, s32 *, 0x334) = 2;
        }
    }
    return lbl_805D9378;
}

int queue_destruction__10TObjPlayerFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
