#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D8664(s32, s16, s16);
s32 fn_801D86D8(s32, s16);
void *fn_801D8E1C();
s32 fn_801D84A8(void* p);
int fn_801D84CC(void* p);
s32 fn_801D84F0(void* p);
int bswap_16__FPUs(void*);

int fn_801D8474(void) { return 0; }
s32 fn_801D84A8(void* p) { return *(s32*)((char*)p + 0x0); }
int fn_801D84B0(void) { return 0; }
int fn_801D84CC(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
s32 fn_801D84F0(void* p) { return *(s32*)((char*)p + 0x4); }
void fn_801D84F8(s32 arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = fn_801D8E1C();
    fn_801D8664(arg0, M2C_FIELD(temp_r3, s16 *, 0), M2C_FIELD(temp_r3, s16 *, 2));
    fn_801D86D8(arg0, arg1);
}

}
