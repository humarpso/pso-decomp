#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* TObjPlayer__sub_80018F5C(void* p);
void *destroy_motion_object__10TObjPlayerFPvs(void *arg0, s16 arg1);
void get_pos__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);

void* TObjPlayer__sub_80018F5C(void* p) { return (char*)p + 0x2fc; }

extern M2C_UNK lbl_804806E8[];

void *destroy_motion_object__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804806E8;
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void get_pos__10TObjPlayerFii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x2FC, arg0);
}

}
