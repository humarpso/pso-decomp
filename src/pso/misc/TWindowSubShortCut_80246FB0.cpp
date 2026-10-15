#include "types.h"

extern "C" {

void close_and_clear_flag__18TWindowSubShortCutFPv(void *arg0);
void free_icon__18TWindowSubShortCutFPv(void* p);
s32 open_next_input_window__11TWindowChatFv(void *);
int TWindowChat__sub_80247D2C(void*);
s32 close_all_children__11TWindowChatFv();

void close_and_clear_flag__18TWindowSubShortCutFPv(void *arg0) {
    close_all_children__11TWindowChatFv();
    *(u16 *)((s8 *)arg0 + 0x1E) = (u16) (*(u16 *)((s8 *)arg0 + 0x1E) & 0xFFFFFFFD);
    open_next_input_window__11TWindowChatFv(arg0);
}

void free_icon__18TWindowSubShortCutFPv(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) TWindowChat__sub_80247D2C(m); }

}
