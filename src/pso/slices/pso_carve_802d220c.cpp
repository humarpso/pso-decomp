#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * fn_802D2334(void);
void fn_802D22F0(void* p, void* q);
void* fn_802D2304(void* p);

s32 TWindowSubTradeMain__sub_802D220C(void) {
    void *temp_r3;

    temp_r3 = fn_802D2334();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 4);
    }
    return 0;
}
int fn_802D2240(void) { return 0; }
void fn_802D22F0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void* fn_802D2304(void* p) { return (char*)p + 0xf0; }
int fn_802D230C(void) { return 0; }
void * fn_802D2334(void) { return 0; }
int fn_802D2358(void) { return 0; }

}
