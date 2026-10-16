#include "types.h"

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
s32 TMainCursor__sub_80154288(u8 *arg0, s32 arg1, u16 arg2);
s32 test_flags_any(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 clear_flags__11TAdRicoRingFUl(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 set_flags__10TObjPlayerFUl(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
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

#include "types.h"

extern "C" {

void update_pair__11TMainCursorFPv(void* p);
void update_cursor_pair__11TMainCursorFPv(void* p);
void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);

void update_pair__11TMainCursorFPv(void* p) { TMainCursor__sub_801540D8((E_801540D8 *)*(void**)((char*)p + 0xa4), (s32)*(void**)((char*)p + 0xa8)); }
void update_cursor_pair__11TMainCursorFPv(void* p) { TMainCursor__sub_801540FC((E_801540FC *)*(void**)((char*)p + 0xa4), (s32)*(void**)((char*)p + 0xa8)); }

}

#include "types.h"

extern "C" {

void update_pair__11TMainCursorFPv(void* p);
void update_cursor_pair__11TMainCursorFPv(void* p);
void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);

s32 test_button__11TMainCursorFPviUs(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (((s32 (*)(void))TMainCursor__sub_80154288)() != 0) {
        temp_r5 = *(s32 *)((s8 *)arg0 + 0x9C);
        return test_flags_any(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
    return 0;
}
void set_flag_bit__11TMainCursorFPviUs(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (((s32 (*)(void))TMainCursor__sub_80154288)() != 0) {
        temp_r5 = *(s32 *)((s8 *)arg0 + 0x9C);
        clear_flags__11TAdRicoRingFUl(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
}
void TMainCursor__sub_80154230(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (((s32 (*)(void))TMainCursor__sub_80154288)() != 0) {
        temp_r5 = *(s32 *)((s8 *)arg0 + 0x9C);
        set_flags__10TObjPlayerFUl(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
}

}

#include "types.h"

extern "C" {

void update_pair__11TMainCursorFPv(void* p);
void update_cursor_pair__11TMainCursorFPv(void* p);
void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);

s32 TMainCursor__sub_80154288(u8 *arg0, s32 arg1, u16 arg2) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x9C) == 0U) {
        return 0;
    }
    if (arg2 >= 0xCU) {
        return 0;
    }
    return arg1 < *(s32 *)((s8 *)arg0 + 0xA8);
}

}
