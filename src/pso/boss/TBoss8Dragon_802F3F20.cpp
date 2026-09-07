#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802F4098_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_802F4098_main_task_size[sizeof(RecoveredGlobal_802F4098_main_task) == 0x34 ? 1 : -1];

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 TBoss8Dragon__sub_802FCCBC(void *);
extern RecoveredGlobal_802F4098_main_task main_task;
extern const f32 lbl_805DED68;
extern const f32 lbl_805DED6C;
void TBoss8Dragon__sub_802F4098(u8 *arg0, u8 *arg1);
}

extern "C" {

void TBoss8Dragon__sub_802F4098(u8 *arg0, u8 *arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x38);
    if ((get_mode__11TCameraCtrlFPv(&main_task.value) & 0x10) && (TBoss8Dragon__sub_802FCCBC(arg0) == 0) && !(M2C_FIELD(arg0, f32 *, 0xC0) > lbl_805DED68)) {
        M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) + lbl_805DED6C);
    }
}

}
