#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TMainCursor__sub_8013C7A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TMainCursor__sub_8013C80C(s32 arg0);
void TMainCursor__sub_8013C858(void* p);
s32 TMainCursor__sub_8013C89C(s32 arg0, s16 arg1, s16 arg2);
s32 TMainCursor__sub_8013C678();
M2C_UNK TMainCursor__sub_8013E2C0(s32);
M2C_UNK fn_80044330(s32);
int fn_8013E870(void*, void*);
s32 fn_8013E8C0(s32);
u8 fn_8013E8E0(s32);
u8 fn_8013E900(s32);

void TMainCursor__sub_8013C7A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = TMainCursor__sub_8013C678();
        TMainCursor__sub_8013C7A0(arg0, arg1, arg2, temp_r3 - 1);
        TMainCursor__sub_8013C7A0(arg0, arg1, temp_r3 + 1, arg3);
    }
}

void TMainCursor__sub_8013C80C(s32 arg0) {
    s32 i;
    s32 base;

    base = arg0 + 0x5C;
    i = 0;
    do {
        fn_80044330(base + 0x40);
        TMainCursor__sub_8013E2C0(base + 0x9C);
        i += 1;
        base += 0x124;
    } while (i < 4);
}

void TMainCursor__sub_8013C858(void* p) { { int i; for (i = 0; i < 4; i++) { fn_8013E870(p, (void*)i); } } }

s32 TMainCursor__sub_8013C89C(s32 arg0, s16 arg1, s16 arg2) {
    s32 i;
    s32 ptr;

    i = 0;
    ptr = arg0 + 0x5C;
loop_1:
    if ((arg1 == (s32) fn_8013E900(ptr)) && (arg2 == (s32) fn_8013E8E0(ptr)) && (fn_8013E8C0(ptr) != 0)) {
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
