#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4Type2__sub_80086C44(void *);
int TObjEneIllGill__vt59(void* p);
int obj_clearFlags30(void*, int);

int TObjEneIllGill__vt59(void* p) { return obj_clearFlags30(p, 256); }
void TObjEneIllGill__sub_80366A74(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) != 0U) {
        TBoss4Type2__sub_80086C44(M2C_FIELD(arg0, void **, 0x414));
        M2C_FIELD(arg0, u32 *, 0x414) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) != 0U) {
        TBoss4Type2__sub_80086C44(M2C_FIELD(arg0, void **, 0x418));
        M2C_FIELD(arg0, u32 *, 0x418) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) != 0U) {
        TBoss4Type2__sub_80086C44(M2C_FIELD(arg0, void **, 0x41C));
        M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
    }
}

}
