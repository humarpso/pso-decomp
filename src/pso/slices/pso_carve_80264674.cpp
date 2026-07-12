#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
int TWindow__close(void*);
int window_request_show(void*);
int fn_802AD90C(void*);
int TWindowMainMenu__sub_802AD980(void*);
int TWindowMainMenu__sub_802ADB0C(void*);
int TWindowMainMenu__sub_802ADE78(void*);
int TWindowMainMenu__sub_802646E4(void* a0 = 0, void* a1 = 0);
void TWindowMainMenu__sub_802644D4(void* p);
void TWindowMainMenu__sub_80264594(void* p, void* a1);
void TWindowMainMenu__sub_802645E4(void* p, void* a1);
void close__15TWindowMainMenuFPv(void* p);
void TWindowMainMenu__sub_80264514(void* p);
int TWindowSubTradeMain__sub_80244A4C(void*);

int TWindowMainMenu__sub_80264674(void) { return 0; }
int TWindowMainMenu__sub_802646E4(void*, void*) { return 0; }

}
