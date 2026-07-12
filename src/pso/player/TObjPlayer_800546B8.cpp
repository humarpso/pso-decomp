#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void snapshot_position__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_800546FC(void* p);
int TObjPlayer__sub_800531C8(void*);
int TObjPlayer__sub_80053E40(void*);
int render_effects__10TObjPlayerFPv(void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805D8B24;

void snapshot_position__10TObjPlayerFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8B24);
}

void TObjPlayer__sub_800546FC(void* p) { TObjPlayer__sub_80053E40(p); render_effects__10TObjPlayerFPv(p); TObjPlayer__sub_800531C8(p); }

}
