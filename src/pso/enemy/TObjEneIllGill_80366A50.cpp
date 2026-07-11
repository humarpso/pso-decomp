#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__14TObjEneIllGillFPv(void *arg0);
int TObjEneIllGill__vt59(void* p);
s32 request_destroy__11TBoss4Type2FUi(void *);

int obj_clearFlags30(void*, int);

int TObjEneIllGill__vt59(void* p) { return obj_clearFlags30(p, 256); }
void free_resources__14TObjEneIllGillFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x414) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x414));
        M2C_FIELD(arg0, u32 *, 0x414) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x418) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x418));
        M2C_FIELD(arg0, u32 *, 0x418) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) != 0U) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x41C));
        M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
    }
}

}
