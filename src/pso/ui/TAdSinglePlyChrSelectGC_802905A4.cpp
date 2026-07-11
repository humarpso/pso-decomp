#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
int TAdSinglePlyChrSelectGC__sub_802905B8(void);
u8 TAdSinglePlyChrSelectGC__sub_802905C0(void);

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

    extern int lbl_805D6534;
int TAdSinglePlyChrSelectGC__sub_802905B8(void) {  return lbl_805D6534; }

extern s32 lbl_805D6530;

u8 TAdSinglePlyChrSelectGC__sub_802905C0(void) {
    return (u8) (lbl_805D6530 == 1);
}

}
