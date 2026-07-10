#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Thanks__sub_8035CF18(void *arg0);
void mark_done__12TBoss6ThanksFPv(void* p);

void TBoss6Thanks__sub_8035CF18(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

int TBoss6Thanks__sub_8035CCD0(void*);

void mark_done__12TBoss6ThanksFPv(void* p) { if (TBoss6Thanks__sub_8035CCD0(p) != 0) { *(int*)((char*)p + 0x24) = 1; *(int*)((char*)p + 0x1c) = 1; } }

}
