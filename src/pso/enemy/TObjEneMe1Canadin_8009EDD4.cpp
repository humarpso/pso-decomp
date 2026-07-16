#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe1Canadin__sub_8009EE18(void);
void TObjEneMe1Canadin__sub_8009EE84(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *);
void set_state_12__17TObjEneMe1CanadinFPv(void* p);

#include "types.h"
extern "C" {

void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0));
}

}

}
