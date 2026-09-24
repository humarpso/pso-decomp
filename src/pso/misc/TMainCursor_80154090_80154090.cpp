#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80154098 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct E_801540D8 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct E_801540B8 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct E_801540FC { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

extern "C" {
void TMainCursor__sub_80154098(void *self, E_80154098 *arr, s32 i);
void TMainCursor__sub_801540D8(E_801540D8 *arr, s32 n);
void TMainCursor__sub_801540B8(void *self, E_801540B8 *arr, s32 i);
void TMainCursor__sub_801540FC(E_801540FC *arr, s32 n);
}

extern "C" {

void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);
s32 TMainCursor__sub_80154288(void);
s32 TObjPlayer__sub_8001BEF8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 clear_flags__11TAdRicoRingFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 set_flags__10TObjPlayerFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void update_cursor_pair__11TMainCursorFPv(void* p);
void update_pair__11TMainCursorFPv(void* p);

void TMainCursor__sub_80154090(void) {  }
void TMainCursor__sub_80154094(void) {  }

void TMainCursor__sub_80154098(void *self, E_80154098 *arr, s32 i) {
    if (arr != 0) {
        arr[i].flags |= 0x80000000;
    }
}

void TMainCursor__sub_801540B8(void *self, E_801540B8 *arr, s32 i) {
    if (arr != 0) {
        arr[i].flags |= 0x40000000;
    }
}

void TMainCursor__sub_801540D8(E_801540D8 *arr, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        arr->flags &= ~1;
        arr++;
    }
}
void TMainCursor__sub_801540FC(E_801540FC *arr, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        arr->flags |= 1;
        arr++;
    }
}

}
