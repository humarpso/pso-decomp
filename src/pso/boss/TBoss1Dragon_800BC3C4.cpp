#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_800BC3E8(u8 *arg0, u8 *arg1);
u8 TObjPlayer__sub_800BC3FC(void *arg0, u32 arg1);
}

extern "C" {

int get_position__12TBoss1DragonFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int get_position__12TBoss1DragonFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

void fn_800BC3E8(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, void **, 0xAC) = arg1;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0xAC), s16 *, 0x28);
}
u8 TObjPlayer__sub_800BC3FC(void *arg0, u32 arg1) {
    return !(arg1 & 0x04000000);
}

}
