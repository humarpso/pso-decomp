#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801004DC(s32, s32, s32, s32);
s32 fn_8010069C();
void fn_80123F70(void* p);
void fn_80123F7C(void* p);

void fn_80123F70(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void fn_80123F7C(void* p) { *(s16*)((char*)p + 0x1fc) = -1; }
void fn_80123F88(void *arg0) {
    void *temp_r3;

    fn_8010069C();
    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        fn_801004DC(M2C_FIELD(temp_r3, s32 *, 0x2C), 2, 0, 1);
    }
}

}
