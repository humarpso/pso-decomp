#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_8023A434(void *, f32, f32);
void fn_8023A694(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8023A70C(void* p);
int TTecBarta__sub_8023A674(void* p);
void advance_lifetime_or_destroy(void *arg0);
void render__11TTecGiZondeFv(void);
int TObjPlayer__sub_8023A510(void*);
s32 queue_destruction__7TObjectFv();

void render__11TTecGiZondeFv(void) {  }
void advance_lifetime_or_destroy(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f1 > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x64));
}

int TTecBarta__sub_8023A674(void* p) { return TObjPlayer__sub_8023A510(p); }

#pragma push
#pragma fp_contract on
void fn_8023A694(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x78), (void *) (arg0 + 0x20));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((M2C_FIELD(arg0, f32 *, 0x48) * M2C_FIELD(arg0, f32 *, 0x64)) + M2C_FIELD(arg0, f32 *, 0x20));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((M2C_FIELD(arg0, f32 *, 0x4C) * M2C_FIELD(arg0, f32 *, 0x64)) + M2C_FIELD(arg0, f32 *, 0x24));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x50);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((temp_f2 * temp_f1) + M2C_FIELD(arg0, f32 *, 0x28));
    fn_8023A434((void *) (arg0), (f32) (temp_f1), (f32) (temp_f2));
}
#pragma pop

void TObjPlayer__sub_8023A70C(void* p) { fn_8023A694((u8 *)((void*)(p))); advance_lifetime_or_destroy((void *)(p)); }

}
