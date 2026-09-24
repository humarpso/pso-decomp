#include "types.h"
struct Win_8027C188 { u8 pad[0x64]; s32 pb[3]; void *mag; };

struct Win_8027C13C { u8 pad[0x61]; s8 sel; };

extern "C" {
void *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void *initialize_mag_data__9TItemDataFPv(void *p);
void TItemData__sub_8010D614(void *src, void *dst);
s32 TItemMag__sub_801143E8(void *mag, s32 slot);
void TWindowHelpItem__sub_80243630(void *e, s32 a, u16 b);
extern s8 lbl_805DD678[3];
void fn_8027C188(Win_8027C188 *w);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *w, s32 i);
void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
extern u8 lbl_805DD67C[3];
void fn_8027C13C(Win_8027C13C *w, void *xy);
}

extern "C" {

void fn_8027C13C(Win_8027C13C *w, void *xy) {
    void *e = get_array_entry__20TWindowSubStatusDispFPvi(w, lbl_805DD67C[w->sel]);
    set_relative_pos__21TWindowSubCustomEquipFPvPv(xy, e);
}

void fn_8027C188(Win_8027C188 *w) {
    u8 mag[16];
    s32 i;
    initialize_mag_data__9TItemDataFPv(mag);
    TItemData__sub_8010D614(w->mag, mag);
    for (i = 0; i < 3; i++) {
        s32 blast = TItemMag__sub_801143E8(mag, i);
        w->pb[lbl_805DD678[i]] = blast;
        void *e = get_array_entry__20TWindowSubStatusDispFPvi(w, i + 1);
        if (blast != -1) {
            TWindowHelpItem__sub_80243630(e, 5, blast);
        } else {
            TWindowHelpItem__sub_80243630(e, 0, 0);
        }
    }
}

}
