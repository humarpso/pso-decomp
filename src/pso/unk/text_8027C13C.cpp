#include "types.h"
#include "pso/misc/TWindowSubMagPhoton.h"
struct Win_8027C188 { u8 pad[0x64]; s32 pb[3]; void *mag; };

struct Win_8027C13C { u8 pad[0x61]; s8 sel; };

extern "C" {
void *get_array_entry__20TWindowSubStatusDispFi(void *w, s32 i);
void *initialize_mag_data__9TItemDataFv(void *p);
void deserialize_mag__9TItemDataFPvPv(void *src, void *dst);
s32 get_photon_blast_at_slot__8TItemMagFl(void *mag, s32 slot);
void draw_action_palette_icon(void *e, s32 a, u16 b);
extern s8 lbl_805DD678[3];
void init_photon_blast_entries__19TWindowSubMagPhotonFPv(Win_8027C188 *w);
void *get_array_entry__20TWindowSubStatusDispFi(void *w, s32 i);
void set_relative_pos__21TWindowSubCustomEquipFPv(void *arg0, void *arg1);
extern u8 lbl_805DD67C[3];
}

extern "C" {

void TWindowSubMagPhoton::get_cursor_origin(void *xy) {
    Win_8027C13C *w = (Win_8027C13C *)this;
    void *e = get_array_entry__20TWindowSubStatusDispFi(w, lbl_805DD67C[w->sel]);
    set_relative_pos__21TWindowSubCustomEquipFPv(xy, e);
}

void init_photon_blast_entries__19TWindowSubMagPhotonFPv(Win_8027C188 *w) {
    u8 mag[16];
    s32 i;
    initialize_mag_data__9TItemDataFv(mag);
    deserialize_mag__9TItemDataFPvPv(w->mag, mag);
    for (i = 0; i < 3; i++) {
        s32 blast = get_photon_blast_at_slot__8TItemMagFl(mag, i);
        w->pb[lbl_805DD678[i]] = blast;
        void *e = get_array_entry__20TWindowSubStatusDispFi(w, i + 1);
        if (blast != -1) {
            draw_action_palette_icon(e, 5, blast);
        } else {
            draw_action_palette_icon(e, 0, 0);
        }
    }
}

}
