#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_cursor_parts__11TMainCursorFPv(u8 *arg0);
M2C_UNK TMainCursor__sub_8013F124(M2C_UNK, int);
M2C_UNK TMainCursor__sub_8013F134(f32);
M2C_UNK TMainCursor__sub_8013F154(void *, int);
M2C_UNK TMainCursor__sub_8013F170(void *, int);

extern const f32 TMainCursor__data_805DB0C0;

void reset_cursor_parts__11TMainCursorFPv(u8 *arg0) {
    s32 var_r30;

    TMainCursor__sub_8013F170((void *) (arg0 + 0x40), (int) (0));
    var_r30 = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TMainCursor__data_805DB0C0;
    do {
        TMainCursor__sub_8013F154((void *) (arg0 + 0x40), (int) (var_r30));
        TMainCursor__sub_8013F134((f32) (TMainCursor__data_805DB0C0));
        TMainCursor__sub_8013F124(TMainCursor__sub_8013F154((void *) (arg0 + 0x40), (int) (var_r30)), (int) (0xFFFF));
        var_r30 += 1;
    } while (var_r30 < 0xA);
}

}
