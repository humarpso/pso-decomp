#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80215FAC___vt__17TJudgmentSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80215FAC_TJudgmentSequence__data_80513E80 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80216084_TMedicalCenterMes__data_80513EA0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 set_field_20__12TQuestListVMFPvi(void *, int);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_80215FAC___vt__17TJudgmentSequence __vt__17TJudgmentSequence;
extern RecoveredGlobal_80215FAC_TJudgmentSequence__data_80513E80 TJudgmentSequence__data_80513E80;
extern s32 lbl_805D3670;
extern u8 *lbl_805D61D0;
u8 *TJudgmentSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 TShopGenerator__sub_80222DAC(s32);
extern RecoveredGlobal_80216084_TMedicalCenterMes__data_80513EA0 TMedicalCenterMes__data_80513EA0;
s32 TMedicalCenterMes__sub_80216084(s32 arg0);
}

extern "C" {

void TShopWindowBase__sub_80216080(void);

typedef char RecoveredGlobal_80215FAC___vt__17TJudgmentSequence_size[sizeof(RecoveredGlobal_80215FAC___vt__17TJudgmentSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80215FAC_TJudgmentSequence__data_80513E80_size[sizeof(RecoveredGlobal_80215FAC_TJudgmentSequence__data_80513E80) == 0x10 ? 1 : -1];
u8 *TJudgmentSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TJudgmentSequence.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3670;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    lbl_805D61D0 = arg0;
    set_field_20__12TQuestListVMFPvi((void *) (arg0), (int) (0));
    M2C_FIELD(&TJudgmentSequence__data_80513E80.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void TShopWindowBase__sub_80216080(void) {  }
typedef char RecoveredGlobal_80216084_TMedicalCenterMes__data_80513EA0_size[sizeof(RecoveredGlobal_80216084_TMedicalCenterMes__data_80513EA0) == 0x10 ? 1 : -1];
s32 TMedicalCenterMes__sub_80216084(s32 arg0) {
    return M2C_FIELD(&TMedicalCenterMes__data_80513EA0.value, M2C_UNK *, ((TShopGenerator__sub_80222DAC(arg0) * 4) & 0x3FFFC));
}

}
