#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80235A8C_lbl_804CCA78 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80235A8C_lbl_804CCA78_size[sizeof(RecoveredGlobal_80235A8C_lbl_804CCA78) == 0x18 ? 1 : -1];

extern "C" {
s32 update_technique_slot__10TTecRaFoieFi(int, void *, int);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80235A8C_lbl_804CCA78 lbl_804CCA78;
u8 *TOSwitchAttack__sub_80235A8C(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5);
}

extern "C" {

u8 *TOSwitchAttack__sub_80235A8C(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg5));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CCA78.value;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x24) = TBoss3Volopt__sub_8022675C((int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg1), (int) (0), (int) (0));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x24);
    if ((temp_r3 >= 0) && (arg4 != 0)) {
        update_technique_slot__10TTecRaFoieFi((int) (temp_r3), (void *) (arg4), (int) (0));
    }
    return arg0;
}

}
