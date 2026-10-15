#include "types.h"
#include "pso/misc/TEffIndirectCtrl.h"

extern "C" {
s32 read_disc_file(s32, u8 *);
s32 TObjPlayer__sub_802A841C();
s32 load_indirect_info();
u8 *xmalloc__FUl(u32);
s32 xfree__FPv(s32);
void *memcpy(void *, const void *, u32);
extern s32 TEffIndirectCtrl__source_buffers[];
extern s32 lbl_805D3E20;
void load_indirect_dat(void);
}

extern "C" {

s32 free_buffers__16TEffIndirectCtrlFv();
s32 TObjPlayer__sub_802A83F4();
s32 xfree__FPv(s32);

extern s32 TEffIndirectCtrl__source_buffers[];

void TEffIndirectCtrl::free_all() {
    s32 var_r28;
    s32 var_r30;
    s32 var_r31;
    s32 temp_r3;

    TObjPlayer__sub_802A83F4();
    free_buffers__16TEffIndirectCtrlFv();
    var_r31 = 0;
    var_r30 = var_r31;
    var_r28 = 0;
    do {
        temp_r3 = *(TEffIndirectCtrl__source_buffers + var_r31);
        if ((u32)temp_r3 != 0U) {
            xfree__FPv(temp_r3);
            *(TEffIndirectCtrl__source_buffers + var_r31) = var_r30;
        }
        var_r28 += 1;
        var_r31 += 1;
    } while (var_r28 < 8);
}
void load_indirect_dat(void) {
    s32 i;
    s32 fail;
    s32 j;
    u8 *buf;
    u8 *p;
    s32 k;
    fail = 0;
    for (i = 0; i < 8; i++) {
        TEffIndirectCtrl__source_buffers[i] = 0;
    }
    for (i = 0; i < 8; i++) {
        TEffIndirectCtrl__source_buffers[i] = (s32)xmalloc__FUl(0x1020);
        if ((u32)TEffIndirectCtrl__source_buffers[i] == 0) {
            fail = 1;
        }
    }
    if (fail != 0) {
        for (j = 0; j < 8; j++) {
            if ((u32)TEffIndirectCtrl__source_buffers[j] != 0) {
                xfree__FPv(TEffIndirectCtrl__source_buffers[j]);
                TEffIndirectCtrl__source_buffers[j] = 0;
            }
        }
    }
    p = xmalloc__FUl(0x8100);
    if (p != NULL) {
        buf = p;
        if (read_disc_file(lbl_805D3E20, p) == 0x8100) {
            for (k = 0; k < 8; k++) {
                memcpy((void *)TEffIndirectCtrl__source_buffers[k], p, 0x1020);
                p += 0x1020;
            }
            if (buf != NULL) {
                xfree__FPv((s32)buf);
            }
            load_indirect_info();
            TObjPlayer__sub_802A841C();
        }
    }
}

}
