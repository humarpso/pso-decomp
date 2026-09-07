#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802F1FB0_lbl_804E4978 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_802F1FB0_lbl_804E4B24 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, int, int);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK update_collision__18TObjBoss7TunnelColFPv(void *);
M2C_UNK TObjBoss2Tunnel__sub_802F2278();
M2C_UNK copy_position__16TBoss8DragonDemoFPv(int, void *);
extern RecoveredGlobal_802F1FB0_lbl_804E4978 lbl_804E4978;
extern RecoveredGlobal_802F1FB0_lbl_804E4B24 lbl_804E4B24;
u8 *fn_802F1FB0(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_802F1FB0_lbl_804E4978_size[sizeof(RecoveredGlobal_802F1FB0_lbl_804E4978) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_802F1FB0_lbl_804E4B24_size[sizeof(RecoveredGlobal_802F1FB0_lbl_804E4B24) == 0x18 ? 1 : -1];
u8 *fn_802F1FB0(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, f32 farg0) {
    s32 temp_r5;
    s32 temp_r6;
    u8 *temp_r31;
    __ct__7TObjectFP7TObject();
    temp_r5 = arg2 * 8;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804E4B24.value;
    temp_r6 = M2C_FIELD(arg1, s32 *, 0x10);
    temp_r31 = (u8 *)&lbl_804E4978.value + temp_r5;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r6;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg3), (int) (temp_r5), (int) (temp_r6));
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(temp_r31, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(temp_r31, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x40) = arg2;
    M2C_FIELD(arg0, f32 *, 0x44) = farg0;
    if (arg2 == 4) {
        copy_position__16TBoss8DragonDemoFPv((int) (M2C_FIELD(arg0, s32 *, 0x34)), (void *) (arg0 + 0x1C));
        TObjBoss2Tunnel__sub_802F2278();
    }
    update_collision__18TObjBoss7TunnelColFPv((void *) (arg0));
    return arg0;
}

}
