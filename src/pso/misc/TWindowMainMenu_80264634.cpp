#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
int TWindow__close(void*);
int fn_80244B64(void*);
int fn_802AD90C(void*);
int fn_802AD980(void*);
int fn_802ADB0C(void*);
int fn_802ADE78(void*);
int TWindowMainMenu__sub_802646E4(void* a0 = 0, void* a1 = 0);
void fn_802644D4(void* p);
void fn_80264594(void* p, void* a1);
void fn_802645E4(void* p, void* a1);
void close__15TWindowMainMenuFPv(void* p);
void fn_80264514(void* p);
int TWindowSubTradeMain__sub_80244A4C(void*);

void close__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindow__close(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

}
