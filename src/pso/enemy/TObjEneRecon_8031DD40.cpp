#include "types.h"

extern "C" {

void update_position_from_offsets__12TObjEneReconFPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *, void *);

void update_position_from_offsets__12TObjEneReconFPv(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x2FC) = (f32) *(f32 *)((s8 *)arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x304) = (f32) *(f32 *)((s8 *)arg0 + 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC, arg0);
}

}
