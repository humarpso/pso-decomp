#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800B9B84();
s32 fn_800BB780(void *);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
int VecCopy__FP3VecPC3Vec(void*, void*);
int TObjEneDD__sub_800BAAE4(void*, void*, void*);
void TObjEneBm3FlyNest__sub_800B3BE8(void);
void TObjEneBm3FlyNest__sub_800B3CBC(void);

void TObjEneBm3FlyNest__sub_800B3B94(void* p) { TObjEneDD__sub_800BAAE4(p, (char*)p + 0x2fc, (void*)0); }
void TObjEneBm3FlyNest__sub_800B3BBC(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneBm3FlyNest__sub_800B3BE8(void) {  }
void update_state__17TObjEneBm3FlyNestFPv(void *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) == 3) && (fn_800B9B84() != 0)) {
        fn_800BB780(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 == 4) {
        fn_800BB780(arg0);
        return;
    }
    if (temp_r0 != 7) {
        TObjEneDD__sub_800BBA18(arg0, 7);
    }
}
void TObjEneBm3FlyNest__sub_800B3C64(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 9) && (temp_r0 != 8) && (temp_r0 != 4)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 8);
    }
}
void TObjEneBm3FlyNest__sub_800B3CBC(void) {  }

}
