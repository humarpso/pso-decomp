#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u32 lbl_805D66B0;
u16 get_indirect_tile_coord(u8 arg0, s32 arg1);
void read_disc_file(void *, void *);
s16 calc_i8_tiled_texel_offset(u8, u8, s32);
void *xmalloc__FUl(u32);
void *memset(void *, s32, u32);
extern void *lbl_805D3E24;
extern u32 lbl_805D66A8;
extern u32 lbl_805D66B0;
void load_indirect_info(void);
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

u16 get_indirect_tile_coord(u8 arg0, s32 arg1) {
    if ((u32) lbl_805D66B0 != 0U) {
        return M2C_FIELD((lbl_805D66B0 + ((arg0 + ((arg1 << 6) & 0x3FC0)) * 2)), u16 *, 0);
    }
    return 0U;
}

void load_indirect_info(void) {
    s32 i;
    s32 j;
    lbl_805D66A8 = (u32)xmalloc__FUl(0x200);
    memset((void *)lbl_805D66A8, 0, 0x200);
    lbl_805D66B0 = (u32)xmalloc__FUl(0x2000);
    if (lbl_805D66B0 != 0) {
        i = 0;
        do {
            j = 0;
            do {
                ((s16 *)lbl_805D66B0)[i * 0x40 + j] = calc_i8_tiled_texel_offset(j, i, 0x40);
                j++;
            } while (j < 0x40);
            i++;
        } while (i < 0x40);
    }
    read_disc_file(lbl_805D3E24, (void *)lbl_805D66A8);
}

void TEffIndirectCtrl__sub_802A9548(void* p) { *(s16*)((char*)p + 0x46) = 0; }
u8 TEffIndirectCtrl__sub_802A9554(void* p) { return *(u8*)((char*)p + 0x25); }
void TEffIndirectCtrl__sub_802A955C(void* p) { *(s16*)((char*)p + 0x46) = 1; }

}
