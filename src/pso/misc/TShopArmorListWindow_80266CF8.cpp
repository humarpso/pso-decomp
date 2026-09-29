#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_80266CF8 { u8 p0[0x72]; s16 f72; s16 f74; u8 p76[2]; s16 f78; };

extern "C" {
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 is_flag_4_set__20TWindowSubStatusDispFPv(void *);
void TShopArmorListWindow__sub_80266CF8(Win_80266CF8 *w);
}

extern "C" {

void save_cursor_selection__20TShopArmorListWindowFPv(void *arg0);
s32 select_cursor_entry__6TLobbyFPv();

void TShopArmorListWindow__sub_80266CF8(Win_80266CF8 *w) {
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
    M2C_FIELD(arg0, s16 *, 0x78) = (s16) M2C_FIELD(arg0, s16 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x7C) = select_cursor_entry__6TLobbyFPv();
}

}
