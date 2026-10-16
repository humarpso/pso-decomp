#include "types.h"
#include "pso/misc/TEffIndirectCtrl.h"

extern "C" {
extern u32 indirect_effect_tile_buffer;
u16 get_indirect_tile_coord(u8 arg0, s32 arg1);
void read_disc_file(void *, void *);
s16 calc_i8_tiled_texel_offset(u8, u8, s32);
void *xmalloc__FUl(u32);
void *memset(void *, s32, u32);
extern void *lbl_805D3E24;
extern u32 indirect_recipe_buffer;
extern u32 indirect_effect_tile_buffer;
void load_indirect_info(void);
}

extern "C" {

void TEffIndirectCtrl__sub_802A9548(void* p);
u8 TEffIndirectCtrl__sub_802A9554(void* p);
void xfree__FPv(void*);

extern u32 indirect_recipe_buffer;
extern u32 indirect_effect_tile_buffer;

void TEffIndirectCtrl::free_buffers() {
    if ((u32) indirect_recipe_buffer != 0U) {
        xfree__FPv((void*)indirect_recipe_buffer);
        indirect_recipe_buffer = 0U;
    }
    if ((u32) indirect_effect_tile_buffer != 0U) {
        xfree__FPv((void*)indirect_effect_tile_buffer);
        indirect_effect_tile_buffer = 0U;
    }
}

u16 get_indirect_tile_coord(u8 arg0, s32 arg1) {
    if ((u32) indirect_effect_tile_buffer != 0U) {
        return *(u16 *)((s8 *)(indirect_effect_tile_buffer + ((arg0 + ((arg1 << 6) & 0x3FC0)) * 2)) + 0);
    }
    return 0U;
}

void load_indirect_info(void) {
    s32 i;
    s32 j;
    indirect_recipe_buffer = (u32)xmalloc__FUl(0x200);
    memset((void *)indirect_recipe_buffer, 0, 0x200);
    indirect_effect_tile_buffer = (u32)xmalloc__FUl(0x2000);
    if (indirect_effect_tile_buffer != 0) {
        i = 0;
        do {
            j = 0;
            do {
                ((s16 *)indirect_effect_tile_buffer)[i * 0x40 + j] = calc_i8_tiled_texel_offset(j, i, 0x40);
                j++;
            } while (j < 0x40);
            i++;
        } while (i < 0x40);
    }
    read_disc_file(lbl_805D3E24, (void *)indirect_recipe_buffer);
}

void TEffIndirectCtrl__sub_802A9548(void* p) { *(s16*)((char*)p + 0x46) = 0; }
u8 TEffIndirectCtrl__sub_802A9554(void* p) { return *(u8*)((char*)p + 0x25); }
void TEffIndirectCtrl::sub_802A955C() { *(s16 *)&this->m_46 = 1; }

}
