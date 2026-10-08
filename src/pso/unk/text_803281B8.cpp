#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803281B8_lbl_804ED5B0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
void register_indirect_effect_ctrl(s32);
extern RecoveredGlobal_803281B8_lbl_804ED5B0 lbl_804ED5B0;
u8 *construct_indirect_effect_task(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3);
}

extern "C" {

typedef char RecoveredGlobal_803281B8_lbl_804ED5B0_size[sizeof(RecoveredGlobal_803281B8_lbl_804ED5B0) == 0x18 ? 1 : -1];
u8 *construct_indirect_effect_task(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject(arg0, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804ED5B0.value;
    M2C_FIELD(arg0, s8 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1D) = arg2;
    register_indirect_effect_ctrl((s32) arg1);
    return arg0;
}

}
