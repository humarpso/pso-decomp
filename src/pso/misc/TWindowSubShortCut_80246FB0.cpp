#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_clear_flag__18TWindowSubShortCutFPv(void *arg0);
s32 TWindowChat__sub_8024792C(void *);
int TWindowChat__sub_80247D2C(void*);
s32 close_all_children__11TWindowChatFPv();
void free_icon__18TWindowSubShortCutFPv(void* p);

void close_and_clear_flag__18TWindowSubShortCutFPv(void *arg0) {
    close_all_children__11TWindowChatFPv();
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFFFFFD);
    TWindowChat__sub_8024792C(arg0);
}

}
