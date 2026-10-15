#include "types.h"

extern "C" {

void clear_selected_and_update_entry__14TWindowSubItemFPv(void *arg0);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32, s32);

void clear_selected_and_update_entry__14TWindowSubItemFPv(void *arg0) {
    *(u16 *)((s8 *)arg0 + 0x70) = (u16) (*(u16 *)((s8 *)arg0 + 0x70) & 0xFFFFFFFD);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(*(s32 *)((s8 *)arg0 + 0x80), 1);
    }
}

}
