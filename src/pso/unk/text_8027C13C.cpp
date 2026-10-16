#include "types.h"
#include "pso/misc/TWindowSubMagPhoton.h"
#include "pso/item/TItemData.h"
#include "pso/item/TItemMag.h"
#include "pso/misc/TWindowSubCustomEquip.h"
struct Win_8027C188 { u8 pad[0x64]; s32 pb[3]; void *mag; };

struct Win_8027C13C { u8 pad[0x61]; s8 sel; };

extern "C" {
void *get_array_entry__20TWindowSubStatusDispFi(void *w, s32 i);
void deserialize_mag__9TItemDataFPvPv(void *src, void *dst);
void draw_action_palette_icon(void *e, s32 a, u16 b);
extern s8 lbl_805DD678[3];
void init_photon_blast_entries__19TWindowSubMagPhotonFPv(Win_8027C188 *w);
void *get_array_entry__20TWindowSubStatusDispFi(void *w, s32 i);
extern u8 lbl_805DD67C[3];
}

extern "C" {

void TWindowSubMagPhoton::get_cursor_origin(void *xy) {
    Win_8027C13C *w = (Win_8027C13C *)this;
    void *e = get_array_entry__20TWindowSubStatusDispFi(w, lbl_805DD67C[w->sel]);
    ((TWindowSubCustomEquip *)xy)->set_relative_pos(e);
}

void init_photon_blast_entries__19TWindowSubMagPhotonFPv(Win_8027C188 *w) {
    u8 mag[16];
    s32 i;
    ((TItemData *)mag)->initialize_mag_data();
    deserialize_mag__9TItemDataFPvPv(w->mag, mag);
    for (i = 0; i < 3; i++) {
        s32 blast = ((TItemMag *)mag)->get_photon_blast_at_slot(i);
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
