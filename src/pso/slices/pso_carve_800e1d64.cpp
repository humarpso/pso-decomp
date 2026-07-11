#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEnePanarms__sub_800E1A44();
int fn_800E1D94(void* p);
int fn_800E1DB8(void* p);
void fn_800E1E64(void* p);
int fn_800E1C98(void*, int);

void fn_800E1D64(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x378) != 0) {
        fn_800E1C98((void*)(arg0), 0);
    }
}
int fn_800E1D94(void* p) { return fn_800E1C98(p, 5); }
int fn_800E1DB8(void* p) { return fn_800E1C98(p, 2); }
void fn_800E1DDC(s32 arg0) {
    TObjEnePanarms__sub_800E1A44();
    fn_800E1C98((void*)(arg0), 3);
}
int fn_800E1E14(void) { return 0; }
void fn_800E1E64(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }
int fn_800E1E74(void) { return 0; }

}
