#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_60 { u8 bytes[0x60]; };

struct RecoveredGlobal_80349E5C_lbl_8047890C {
    M2C_UNK value;
    u8 remaining[0x5C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_20 { u8 bytes[0x20]; };

struct RecoveredGlobal_80349DC8_lbl_804788B8 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80349DC8_lbl_804788D8 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80349DC8_lbl_8047896C {
    M2C_UNK value;
    u8 remaining[0x20];
};

extern "C" {
s32 fn_80349C54(void *, void *, int);
extern RecoveredGlobal_80349E5C_lbl_8047890C lbl_8047890C;
void fn_80349E5C(s32 arg0);
M2C_UNK fn_80349B8C(void *, void *, int);
s32 fn_80349C54(void *, void *, int);
extern RecoveredGlobal_80349DC8_lbl_804788B8 lbl_804788B8;
extern RecoveredGlobal_80349DC8_lbl_804788D8 lbl_804788D8;
extern RecoveredGlobal_80349DC8_lbl_8047896C lbl_8047896C;
void fn_80349DC8(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_80349E5C_lbl_8047890C_size[sizeof(RecoveredGlobal_80349E5C_lbl_8047890C) == 0x60 ? 1 : -1];

typedef char RecoveredGlobal_80349DC8_lbl_804788B8_size[sizeof(RecoveredGlobal_80349DC8_lbl_804788B8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80349DC8_lbl_804788D8_size[sizeof(RecoveredGlobal_80349DC8_lbl_804788D8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80349DC8_lbl_8047896C_size[sizeof(RecoveredGlobal_80349DC8_lbl_8047896C) == 0x24 ? 1 : -1];
void fn_80349DC8(s32 arg0) {
    M2CCopy_20 sp8;
    sp8 = *(const M2CCopy_20 *)((s32) ((u8 *)&lbl_8047896C.value - 4) + 4);
    fn_80349C54((void *) (arg0), (void *) (&sp8), (int) (2));
    fn_80349B8C((void *) (arg0), (void *) (&lbl_804788B8.value), (int) (0x777777FF));
    fn_80349B8C((void *) (arg0), (void *) (&lbl_804788D8.value), (int) (0x777777FF));
}

void fn_80349E5C(s32 arg0) {
    M2CCopy_60 sp8;
    sp8 = *(const M2CCopy_60 *)((s32) ((u8 *)&lbl_8047890C.value - 4) + 4);
    fn_80349C54((void *) (arg0), (void *) (&sp8), (int) (6));
}

}
