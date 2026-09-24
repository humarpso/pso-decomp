#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8031EE54 {
    M2C_UNK sp8;
    f32 spC;
};

struct T_8031EDBC { u8 pad[0x424]; u16 ids[30]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 lbl_805D53A4;
extern const f32 lbl_805DF448;
void TObjEneRecon__sub_8031EE54(u8 *arg0);
void TObjEneRecon__sub_8031EDBC(T_8031EDBC *self, s32 id);
}

extern "C" {

void TObjEneRecon__sub_8031EDBC(T_8031EDBC *self, s32 id) {
    s32 i;
    for (i = 0; i < 30; i++) {
        if (self->ids[i] == id) {
            self->ids[i] = 0xFFFF;
            return;
        }
    }
}

void TObjEneRecon__sub_8031EE54(u8 *arg0) {
    Stack_8031EE54 stack;
    u8 *temp_r3;
    if ((lbl_805D53A4 % 5) == 0) {
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        stack.spC += lbl_805DF448;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x3E0) = (s32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), s32 *, 0x18);
            VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, M2C_FIELD(temp_r3, u8 **, 4));
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, arg0 + 0x38);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x3E0) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

}
