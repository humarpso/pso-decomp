#include "types.h"
#include "pso/unk/text_8023601C.h"

struct Stack_8023601C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 vec_squared_length(void *, f32);
s32 normalize_vector(void *);
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805DC88C;
#pragma push
#pragma fp_contract on
void offset_point_toward_camera(u8 *arg0, u8 *arg1, f32 farg0) {
    Stack_8023601C stack;
    f32 temp_f1;
    if ((void *) camera_ctrl_instance != NULL) {
        stack.sp8 = *(f32 *)((s8 *)camera_ctrl_instance + 0x178) - *(f32 *)((s8 *)arg0 + 0);
        stack.spC = *(f32 *)((s8 *)camera_ctrl_instance + 0x17C) - *(f32 *)((s8 *)arg0 + 4);
        temp_f1 = *(f32 *)((s8 *)camera_ctrl_instance + 0x180);
        stack.sp10 = temp_f1 - *(f32 *)((s8 *)arg0 + 8);
        if (lbl_805DC88C != vec_squared_length(&stack.sp8, temp_f1)) {
            normalize_vector(&stack.sp8);
        }
        *(f32 *)((s8 *)arg1 + 0) = (f32) ((stack.sp8 * farg0) + *(f32 *)((s8 *)arg0 + 0));
        *(f32 *)((s8 *)arg1 + 4) = (f32) ((stack.spC * farg0) + *(f32 *)((s8 *)arg0 + 4));
        *(f32 *)((s8 *)arg1 + 8) = (f32) ((stack.sp10 * farg0) + *(f32 *)((s8 *)arg0 + 8));
    }
}
#pragma pop

}
