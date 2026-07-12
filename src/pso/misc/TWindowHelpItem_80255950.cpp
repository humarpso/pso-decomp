#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__sub_80255950(void *arg0, u32 arg1);
void TWindowHelpItem__sub_80255980(void* p, void* a1, void* a2);
int TWindowHelpItem__sub_80255440(void*);
int TWindowHelpItem__sub_80255AB4(void*);

void TWindowHelpItem__sub_80255950(void *arg0, u32 arg1) {
    M2C_UNK var_r5;

    var_r5 = -0x100;
    if (arg1 == 0U) {
        var_r5 = -1;
    }
    TWindowHelpItem__sub_80255980((void*)(arg0), (void*)(arg1), (void*)(var_r5));
}

void TWindowHelpItem__sub_80255980(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa4) = a2; *(void**)((char*)p + 0x70) = a1; TWindowHelpItem__sub_80255AB4(p); TWindowHelpItem__sub_80255440(p); }

}
