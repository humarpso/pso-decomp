#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u32 lbl_805D66B0;
u16 TEffIndirectCtrl__sub_802A9478(u8 arg0, s32 arg1);
}

extern "C" {

void TEffIndirectCtrl__sub_802A9548(void* p);
u8 TEffIndirectCtrl__sub_802A9554(void* p);
void TEffIndirectCtrl__sub_802A955C(void* p);
void free_buffers__16TEffIndirectCtrlFv(void);
void xfree__FPv(void*);

extern u32 lbl_805D66A8;
extern u32 lbl_805D66B0;

void free_buffers__16TEffIndirectCtrlFv(void) {
    if ((u32) lbl_805D66A8 != 0U) {
        xfree__FPv((void*)lbl_805D66A8);
        lbl_805D66A8 = 0U;
    }
    if ((u32) lbl_805D66B0 != 0U) {
        xfree__FPv((void*)lbl_805D66B0);
        lbl_805D66B0 = 0U;
    }
}

u16 TEffIndirectCtrl__sub_802A9478(u8 arg0, s32 arg1) {
    if ((u32) lbl_805D66B0 != 0U) {
        return M2C_FIELD((lbl_805D66B0 + ((arg0 + ((arg1 << 6) & 0x3FC0)) * 2)), u16 *, 0);
    }
    return 0U;
}

void TEffIndirectCtrl__sub_802A9548(void* p) { *(s16*)((char*)p + 0x46) = 0; }
u8 TEffIndirectCtrl__sub_802A9554(void* p) { return *(u8*)((char*)p + 0x25); }
void TEffIndirectCtrl__sub_802A955C(void* p) { *(s16*)((char*)p + 0x46) = 1; }

}
