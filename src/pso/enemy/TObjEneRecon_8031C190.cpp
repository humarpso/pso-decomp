#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8031C190 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 actor_frame_tick;
extern const f32 TObjEneRecon__data_805DF3C0;
void update_ground_probe__12TObjEneReconFPv(u8 *arg0);
}

extern "C" {

void update_ground_probe__12TObjEneReconFPv(u8 *arg0) {
    Stack_8031C190 stack;
    u8 *temp_r3;
    if ((actor_frame_tick % 5) == 0) {
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        stack.spC += TObjEneRecon__data_805DF3C0;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x418) = (s32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), s32 *, 0x18);
            VecCopy__FP3VecPC3Vec(arg0 + 0x41C, M2C_FIELD(temp_r3, u8 **, 4));
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x41C, arg0 + 0x38);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

}
