#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_802644D4(void* p);
void TWindowMainMenu__sub_80264514(void* p);
void TWindowMainMenu__sub_80264540(void *arg0);
void TWindowMainMenu__sub_80264594(void* p, void* a1);
void TWindowMainMenu__sub_802645E4(void* p, void* a1);
int TWindowMainMenu__sub_802646E4(void* a0 = 0, void* a1 = 0);
int TWindowSubTradeMain__sub_80244A4C(void*);
int TWindow__close(void*);
void close__15TWindowMainMenuFPv(void* p);
int fn_80244B64(void*);
int fn_802AD90C(void*);
int fn_802AD980(void*);
int fn_802ADB0C(void*);
int fn_802ADE78(void*);
s32 is_split_screen();

void TWindowMainMenu__sub_802644D4(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { fn_80244B64(*(void**)((char*)p + 0x1c)); fn_802ADE78(*(void**)((char*)p + 0x1c)); } }
void TWindowMainMenu__sub_80264514(void* p) { void* m = *(void**)((char*)p + 0x1c); if (m) TWindowSubTradeMain__sub_80244A4C(m); }
void TWindowMainMenu__sub_80264540(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        fn_802AD980((void*)(M2C_FIELD(arg0, void **, 0x1C)));
        fn_802ADE78((void*)(M2C_FIELD(arg0, u32 *, 0x1C)));
    }
    if (is_split_screen() != 0) {
        TWindowMainMenu__sub_80264514((void*)((void*)(arg0)));
    }
}
void TWindowMainMenu__sub_80264594(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { fn_802AD90C(*(void**)((char*)p + 0x1c)); fn_802ADB0C(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4(p, a1); } }
void TWindowMainMenu__sub_802645E4(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { fn_802AD980(*(void**)((char*)p + 0x1c)); fn_802ADB0C(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4(p, a1); } }

}
