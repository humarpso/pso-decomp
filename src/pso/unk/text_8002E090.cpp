#include "types.h"

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 vec3_add_to(void *, void *);
extern const f32 lbl_805D8204;
extern const f32 lbl_805D8208;
extern const f32 lbl_805D820C;
extern const f32 lbl_805D8210;
extern const f32 lbl_805D8214;
extern const f32 lbl_805D8218;
void run_task__13TObjBoss1RockFPv(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void run_task__13TObjBoss1RockFPv(u8 *arg0) {
    f32 temp_f2;
    *(s32 *)((s8 *)arg0 + 0x3C) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3C) > 0x28) {
        *(f32 *)((s8 *)arg0 + 0x40) = (f32) (*(f32 *)((s8 *)arg0 + 0x40) - lbl_805D8204);
        if (*(f32 *)((s8 *)arg0 + 0x40) < lbl_805D8208) {
            *(f32 *)((s8 *)arg0 + 0x40) = (f32) lbl_805D8208;
            queue_destruction__7TObjectFv(arg0);
        }
    }
    vec3_add_to((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x20);
    if (temp_f2 < lbl_805D8208) {
        *(f32 *)((s8 *)arg0 + 0x20) = (f32) (temp_f2 * lbl_805D820C);
        *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) * lbl_805D8210);
        *(f32 *)((s8 *)arg0 + 0x28) = (f32) (*(f32 *)((s8 *)arg0 + 0x28) * lbl_805D8214);
        *(f32 *)((s8 *)arg0 + 0x30) = (f32) (*(f32 *)((s8 *)arg0 + 0x30) * lbl_805D8214);
    }
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) (*(f32 *)((s8 *)arg0 + 0x2C) + lbl_805D8218);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) (*(s32 *)((s8 *)arg0 + 0x34) + 0x60);
    *(s32 *)((s8 *)arg0 + 0x38) = (s32) (*(s32 *)((s8 *)arg0 + 0x38) + 0x110);
}
#pragma pop

}
