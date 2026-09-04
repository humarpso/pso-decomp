#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowFukidasi__sub_8024695C(void* p);
int TWindowSubAreaMapDisp__sub_80246948(void);
void free_window__15TWindowCtrlMainFv(void);
int get_visible_flag__15TWindowFukidasiFPv(void* p);
int is_bit10_set__15TWindowFukidasiFPv(void* p);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D63F0;

void free_window__15TWindowCtrlMainFv(void) {
    if ((u32) lbl_805D63F0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D63F0);
        lbl_805D63F0 = 0U;
    }
}

int TWindowSubAreaMapDisp__sub_80246948(void) { return 0; }

int TWindowFukidasi__sub_8024695C(void* p) { return (*(u32*)((char*)p + 0x2c) >> 8) & 0x1; }

int get_visible_flag__15TWindowFukidasiFPv(void* p) { return (*(u32*)((char*)p + 0x2c) >> 9) & 0x1; }

int is_bit10_set__15TWindowFukidasiFPv(void* p) { return (*(u32*)((char*)p + 0x2c) >> 10) & 0x1; }

}
