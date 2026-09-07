#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802A8210_lbl_804DDF04 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
void fn_802A8260(s32);
extern RecoveredGlobal_802A8210_lbl_804DDF04 lbl_804DDF04;
u8 *fn_802A8210(u8 *arg0, s32 arg1, u8 *arg2);
}

extern "C" {

typedef char RecoveredGlobal_802A8210_lbl_804DDF04_size[sizeof(RecoveredGlobal_802A8210_lbl_804DDF04) == 0x18 ? 1 : -1];
u8 *fn_802A8210(u8 *arg0, s32 arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804DDF04.value;
    M2C_FIELD(arg0, s8 *, 0x1C) = arg1;
    fn_802A8260((s32) arg1);
    return arg0;
}

}
