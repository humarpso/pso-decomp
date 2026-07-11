#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B7FB4(void);
void TObjEneBm5Wolf__sub_800B7FB8(void* p);
void TObjEneBm5Wolf__sub_800B7FE8(void *arg0);
void TObjEneBm5Wolf__sub_800B8020(void);
int TObjEneDD__sub_800BBA18(void*, void*);

void TObjEneBm5Wolf__sub_800B7FB4(void) {  }
void TObjEneBm5Wolf__sub_800B7FB8(void* p) { if (*(short*)((char*)p + 0x326) != 15) { TObjEneDD__sub_800BBA18(p, (void*)15); } }
void TObjEneBm5Wolf__sub_800B7FE8(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x10) && (temp_r0 != 0x11)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x10));
    }
}
void TObjEneBm5Wolf__sub_800B8020(void) {  }

}
