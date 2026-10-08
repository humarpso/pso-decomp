#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_clear_flag__18TWindowSubShortCutFPv(void *arg0);
void free_icon__18TWindowSubShortCutFPv(void* p);
s32 open_next_input_window__11TWindowChatFPv(void *);
int TWindowChat__sub_80247D2C(void*);
s32 close_all_children__11TWindowChatFPv();

void close_and_clear_flag__18TWindowSubShortCutFPv(void *arg0) {
    close_all_children__11TWindowChatFPv();
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFFFFFD);
    open_next_input_window__11TWindowChatFPv(arg0);
}

void free_icon__18TWindowSubShortCutFPv(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) TWindowChat__sub_80247D2C(m); }

}
