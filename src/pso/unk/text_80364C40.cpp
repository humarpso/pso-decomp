#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80364C40_lbl_804F2B60 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80364C40_lbl_804F2B60 lbl_804F2B60;
u8 *fn_80364C40(u8 *arg0, s16 arg1, u8 *arg2, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80364C40_lbl_804F2B60_size[sizeof(RecoveredGlobal_80364C40_lbl_804F2B60) == 0x18 ? 1 : -1];
u8 *fn_80364C40(u8 *arg0, s16 arg1, u8 *arg2, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804F2B60.value;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, s16 *, 0x20) = arg1;
    return arg0;
}

}
