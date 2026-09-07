#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801C5380_lbl_804C3F48 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 update_battle_controller__10TObjPlayerFv();
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801C5380_lbl_804C3F48 lbl_804C3F48;
u8 *fn_801C5380(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_801C5380_lbl_804C3F48_size[sizeof(RecoveredGlobal_801C5380_lbl_804C3F48) == 0x18 ? 1 : -1];
u8 *fn_801C5380(u8 *arg0, s32 arg1) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804C3F48.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x3DE;
    M2C_FIELD(arg0, s32 *, 0x20) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x24) = update_battle_controller__10TObjPlayerFv();
    return arg0;
}

}
