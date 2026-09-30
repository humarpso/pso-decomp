#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800E1E74 { u8 pad[0x30]; u32 flags; u8 pad2[0x378 - 0x34]; s32 state; };

extern "C" {
int TObjEnePanarms__sub_800E1C98(void*, int);
void TObjEnePanarms__sub_800E1E74(Obj_800E1E74 *self);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
int TObjEnePanarms__sub_800E1C98(void*, int);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 lbl_8049591C[];
extern const f32 lbl_805DA588;
void TObjEnePanarms__sub_800E1ED0(u8 *arg0);
}

extern "C" {

s32 TObjEnePanarms__sub_800E1A44();
int TObjEnePanarms__sub_800E1D94(void* p);
int do_action_2__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800E1E64(void* p);
int TObjEnePanarms__sub_800E1C98(void*, int);

void TObjEnePanarms__sub_800E1E74(Obj_800E1E74 *self) {
    switch (self->state) {
    case 0:
    case 1:
    case 5:
    case 6:
        break;
    default:
        self->flags &= ~0x200;
        TObjEnePanarms__sub_800E1C98(self, 6);
        break;
    }
}
#pragma push
#pragma fp_contract on
void TObjEnePanarms__sub_800E1ED0(u8 *arg0) {
    s32 st = M2C_FIELD(arg0, s32 *, 0x378);
    switch (st) {
    case 7:
    case 8:
        return;
    default:
        if (st == 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60) + lbl_8049591C[M2C_FIELD(arg0, s32 *, 0x380)];
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, M2C_FIELD(arg0, u8 **, 0x39C) + 0x38);
            M2C_FIELD(arg0, f32 *, 0x38) += lbl_805DA588 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
            M2C_FIELD(arg0, f32 *, 0x40) += lbl_805DA588 * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
        }
        TObjEnePanarms__sub_800E1C98(arg0, 7);
        break;
    }
}
#pragma pop

}
