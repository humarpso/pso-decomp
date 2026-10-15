#include "types.h"

struct Win_80266CF8 { u8 p0[0x72]; s16 f72; s16 f74; u8 p76[2]; s16 f78; };

extern "C" {
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 is_flag_4_set__20TWindowSubStatusDispFPv(void *);
void clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(Win_80266CF8 *w);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void reset__20TWindowSubStatusDispFPv(void *);
void reset_list__20TShopArmorListWindowFPv(u8 *arg0);
}

extern "C" {

void save_cursor_selection__20TShopArmorListWindowFPv(void *arg0);
s32 select_cursor_entry__6TLobbyFPv();

void clamp_selection_to_valid_entry__20TShopArmorListWindowFPv(Win_80266CF8 *w) {
    void *e;
    if (w->f72 >= 0) {
        if (w->f78 >= w->f72) {
            w->f74 = w->f72 - 1;
            return;
        }
        e = get_array_entry__20TWindowSubStatusDispFPvi(w, w->f78);
        while (is_flag_4_set__20TWindowSubStatusDispFPv(e) == 0) {
            w->f78 = w->f78 - 1;
            e = get_array_entry__20TWindowSubStatusDispFPvi(w, w->f78);
        }
        w->f74 = w->f78;
    }
}

void save_cursor_selection__20TShopArmorListWindowFPv(void *arg0) {
    *(s16 *)((s8 *)arg0 + 0x78) = (s16) *(s16 *)((s8 *)arg0 + 0x74);
    *(s32 *)((s8 *)arg0 + 0x7C) = select_cursor_entry__6TLobbyFPv();
}
void reset_list__20TShopArmorListWindowFPv(u8 *arg0) {
    u32 i;
    *(s16 *)((s8 *)arg0 + 0x72) = 0;
    *(s16 *)((s8 *)arg0 + 0x74) = 0;
    for (i = 0; i < (u32)*(s16 *)((s8 *)arg0 + 0x76); i++) {
        reset__20TWindowSubStatusDispFPv(get_array_entry__20TWindowSubStatusDispFPvi(arg0, i));
    }
}

}
