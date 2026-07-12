#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 close_all_children__11TWindowChatFPv();
s32 TWindowChat__sub_8024792C(void *);
void free_icon__18TWindowSubShortCutFPv(void* p);
int TWindowChat__sub_80247D2C(void*);

void free_icon__18TWindowSubShortCutFPv(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) TWindowChat__sub_80247D2C(m); }

}
