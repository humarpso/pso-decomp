#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DDA0C;
extern const f32 lbl_805DDA10;
void run_task__13TObjCMHexTileFv(u8 *arg0);
}

extern "C" {

void run_task__13TObjCMHexTileFv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x50) / (f32) M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x4C) = temp_f1;
        temp_f1_2 = lbl_805DDA0C - temp_f1;
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f1_2 * M2C_FIELD(arg0, f32 *, 0x2C));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f1_2 * M2C_FIELD(arg0, f32 *, 0x30));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DDA0C;
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DDA0C;
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDA10;
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDA10;
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + M2C_FIELD(arg0, f32 *, 0x44));
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x28);
        temp_f2 = (f32) (temp_r5 - M2C_FIELD(arg0, s32 *, 0x50)) / (f32) (temp_r5 - M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (temp_f2 * temp_f2);
        temp_f1_3 = -(lbl_805DDA0C - temp_f2);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f1_3 * M2C_FIELD(arg0, f32 *, 0x2C));
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f1_3 * M2C_FIELD(arg0, f32 *, 0x30));
        break;
    }
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x50) + 1;
    M2C_FIELD(arg0, s32 *, 0x50) = temp_r6;
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r6 >= ((s32 *)(arg0 + 0x20))[temp_r5_2]) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r5_2 + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 3) {
            queue_destruction__7TObjectFv(arg0);
        }
    }
}

}
