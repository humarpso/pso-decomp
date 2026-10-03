#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u16 * get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
M2C_UNK TWindowSubComCard__sub_8024503C(s32, u16 *, s32);
extern s32 lbl_805D53A4;
void TWindowSubComCard__sub_802665C0(u8 *arg0, u8 *arg1);
}

extern "C" {

void draw_card_icon__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2);
void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1);
int create_yes_no_window(void*, int, int, int);
M2C_UNK TWindowSubComCard__sub_8024503C(s32, u16 *, s32);
int create_titled_window_menu(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
int init_shop_judgment_window(void* p);
s32 is_visible__17TWindowSubComCardFPv(void *);

void draw_card_icon__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    create_titled_window_menu((void*)(arg0), (void*)(arg1), (void*)(arg2), (void*)(4));
}

void TWindowSubComCard__sub_802665C0(u8 *arg0, u8 *arg1) {
    s16 temp_r4;
    u16 *temp_r3;
    if (!(lbl_805D53A4 & 0x10)) {
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x7A);
        if (temp_r4 >= 0) {
            temp_r3 = (u16 *)(((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) temp_r4)));
            if (*temp_r3 & 1) {
                TWindowSubComCard__sub_8024503C((s32)(arg1), (u16 *)(temp_r3), (s32)(1));
            }
        }
    }
}

void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x78));
    if (*temp_r3 & 1) {
        TWindowSubComCard__sub_8024503C(arg1, temp_r3, is_visible__17TWindowSubComCardFPv(arg0));
    }
}

}
