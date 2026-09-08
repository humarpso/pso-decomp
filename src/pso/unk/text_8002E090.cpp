#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D8204;
extern const f32 lbl_805D8208;
extern const f32 lbl_805D820C;
extern const f32 lbl_805D8210;
extern const f32 lbl_805D8214;
extern const f32 lbl_805D8218;
void fn_8002E090(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void fn_8002E090(u8 *arg0) {
    f32 temp_f2;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) > 0x28) {
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) - lbl_805D8204);
        if (M2C_FIELD(arg0, f32 *, 0x40) < lbl_805D8208) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8208;
            queue_destruction__7TObjectFv(arg0);
        }
    }
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x20);
    if (temp_f2 < lbl_805D8208) {
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) (temp_f2 * lbl_805D820C);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * lbl_805D8210);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * lbl_805D8214);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) * lbl_805D8214);
    }
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + lbl_805D8218);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 0x60);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 0x110);
}
#pragma pop

}
