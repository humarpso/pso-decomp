#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 find_by_pos__11TMainCursorFiss(s32 arg0, s16 arg1, s16 arg2);
void init_slots__11TMainCursorFPv(void* p);
void quick_sort__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void reset_cursor_parts__11TMainCursorFPv(u8 *arg0);
void reset_slots__11TMainCursorFi(s32 arg0);
s32 try_move__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
int TMainCursor__sub_8013BE98(void* p);
s32 TMainCursor__sub_8013C678();
s32 TMainCursor__sub_8013DF08();
int TMainCursor__sub_8013DF5C(void*, void* a1 = 0, void* a2 = 0);
int TMainCursor__sub_8013E870(void*, void*);
u8 TMainCursor__sub_8013E900(s32);
M2C_UNK TMainCursor__sub_8013F154(void *, int);
M2C_UNK TMainCursor__sub_8013F170(void *, int);
M2C_UNK fn_80044330(s32);
u8 get_active__11TMainCursorFPv(s32);
s32 get_selected_entry__11TMainCursorFPv(s32);
M2C_UNK reset_slot__11TMainCursorFPv(s32);
M2C_UNK set_cursor_id__11TMainCursorFPvs(M2C_UNK, int);
M2C_UNK set_size__11TMainCursorFPvf(f32);

s32 try_move__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (TMainCursor__sub_8013DF08() != 0) {
        return TMainCursor__sub_8013DF5C((void*)(arg0), (void*)(arg1), (void*)(arg2));
    }
    return 0;
}

extern const f32 TMainCursor__data_805DB0C0;

void reset_cursor_parts__11TMainCursorFPv(u8 *arg0) {
    s32 var_r30;

    TMainCursor__sub_8013F170((void *) (arg0 + 0x40), (int) (0));
    var_r30 = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TMainCursor__data_805DB0C0;
    do {
        TMainCursor__sub_8013F154((void *) (arg0 + 0x40), (int) (var_r30));
        set_size__11TMainCursorFPvf((f32) (TMainCursor__data_805DB0C0));
        set_cursor_id__11TMainCursorFPvs(TMainCursor__sub_8013F154((void *) (arg0 + 0x40), (int) (var_r30)), (int) (0xFFFF));
        var_r30 += 1;
    } while (var_r30 < 0xA);
}

void quick_sort__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = TMainCursor__sub_8013C678();
        quick_sort__11TMainCursorFiiii((s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(temp_r3 - 1));
        quick_sort__11TMainCursorFiiii((s32)(arg0), (s32)(arg1), (s32)(temp_r3 + 1), (s32)(arg3));
    }
}

void reset_slots__11TMainCursorFi(s32 arg0) {
    s32 i;
    s32 base;

    base = arg0 + 0x5C;
    i = 0;
    do {
        fn_80044330(base + 0x40);
        reset_slot__11TMainCursorFPv(base + 0x9C);
        i += 1;
        base += 0x124;
    } while (i < 4);
}

void init_slots__11TMainCursorFPv(void* p) { { int i; for (i = 0; i < 4; i++) { TMainCursor__sub_8013E870(p, (void*)i); } } }

s32 find_by_pos__11TMainCursorFiss(s32 arg0, s16 arg1, s16 arg2) {
    s32 i;
    s32 ptr;

    i = 0;
    ptr = arg0 + 0x5C;
loop_1:
    if ((arg1 == (s32) TMainCursor__sub_8013E900(ptr)) && (arg2 == (s32) get_active__11TMainCursorFPv(ptr)) && (get_selected_entry__11TMainCursorFPv(ptr) != 0)) {
        return ptr;
    }
    i += 1;
    ptr += 0x124;
    if (i >= 4) {
        return 0;
    }
    goto loop_1;
}

}
