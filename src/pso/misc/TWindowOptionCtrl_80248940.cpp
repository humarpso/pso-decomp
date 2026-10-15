#include "types.h"

extern "C" {

void update_selected_item__17TWindowOptionCtrlFPv(void *arg0);
s32 get_cursor_pos__14TWindowSubItemFPv();
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void update_selected_item__17TWindowOptionCtrlFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, *(s16 *)((s8 *)arg0 + 0x88));
    get_cursor_pos__14TWindowSubItemFPv();
}

}
