#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8_size[sizeof(RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8) == 0xC ? 1 : -1];

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 is_health_low__12TBoss8DragonFPv(void *);
extern RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8 TBoss8Dragon__data_804744A8;
extern const f32 TBoss8Dragon__data_805DED50;
extern const f32 lbl_805DEED4;
void TBoss8Dragon__sub_802FC500(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_802FC500(u8 *arg0) {
    if (is_health_low__12TBoss8DragonFPv(arg0) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x394, arg0 + 0x38);
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) TBoss8Dragon__data_805DED50;
        clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x394);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) * lbl_805DEED4);
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (M2C_FIELD(arg0, f32 *, 0x39C) * lbl_805DEED4);
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x394, &TBoss8Dragon__data_804744A8.value);
}

}
