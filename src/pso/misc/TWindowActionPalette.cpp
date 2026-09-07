#include "pso/misc/TWindowActionPalette.h"
#include <stddef.h>

typedef char palette_children_offset[offsetof(TWindowActionPalette, children) == 0x24 ? 1 : -1];
typedef char palette_resources_offset[offsetof(TWindowActionPalette, resources) == 0x60 ? 1 : -1];
typedef char palette_state_offset[offsetof(TWindowActionPalette, state) == 0x6C ? 1 : -1];
typedef char palette_scale_offset[offsetof(TWindowActionPalette, scale) == 0x70 ? 1 : -1];
typedef char palette_size[sizeof(TWindowActionPalette) == 0x78 ? 1 : -1];

extern "C" {
void TWindowActionPalette__sub_80243B6C(void *, int);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
void TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
u8 *destroy_window_base__9TWindowDDFPvs(void *, s16);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void free_if_valid__14TPlyDispConfigFis(void *, s16);
extern u32 __vt__20TWindowActionPalette[6];
}

void TWindowActionPalette::render() {
    s32 context = TWindowSubComCard__sub_80244C0C(this, &scale);
    TWindowSubStatusDisp__sub_80257BC0(this, &children, context);
    TWindowActionPalette__sub_80243B6C(this, context);
}

extern "C" u8 *__dt__20TWindowActionPaletteFv(u8 *self, s16 delete_flag) {
    if (self != NULL) {
        *(u32 **)(self + 0x18) = __vt__20TWindowActionPalette;
        __destroy_arr(self + 0x60,
                               (void *)free_if_valid__14TPlyDispConfigFis, 4, 3);
        destroy_window_base__9TWindowDDFPvs(self, 0);
        if (delete_flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
