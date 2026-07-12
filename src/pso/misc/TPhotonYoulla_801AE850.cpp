#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TPhotonYoullaFv(void *arg0);
M2C_UNK TObjEnePanarms__sub_8002AE74(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK fn_801A7680(void *);
M2C_UNK TObjPlayer__sub_801A7748(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f64 lbl_80446F18;
extern const f32 lbl_805DC264;
extern const f32 lbl_805DC268;
extern const f32 lbl_805DC26C;
extern const f32 lbl_805DC270;
extern const f32 lbl_805DC274;

void run_task__13TPhotonYoullaFv(void *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
    }
    if ((lbl_805DC264 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TObjPlayer__sub_801A7748(arg0, 6);
        M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
        TObjEnePanarms__sub_8002AE74(arg0, 0);
    }
    M2C_FIELD(arg0, s16 *, 0x194) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    TBoss1Dragon__sub_80143504(arg0);
    fn_801A7680(arg0);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A4) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1A4) > lbl_805DC268) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x184);
        if (temp_f1 > lbl_805DC26C) {
            M2C_FIELD(arg0, f32 *, 0x184) = (f32) (temp_f1 - lbl_805DC270);
        }
    }
    if (lbl_805DC274 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
