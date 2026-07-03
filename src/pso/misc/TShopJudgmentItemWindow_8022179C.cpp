#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TShopJudgmentItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__15TShopWindowBaseFv(void *);

extern M2C_UNK __vt__23TShopJudgmentItemWindow[];
extern void *lbl_805D36E0;

void *TShopJudgmentItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TShopJudgmentItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36E0;
    M2C_FIELD(arg0, u32 *, 0x144) = 0;
    M2C_FIELD(arg0, u32 *, 0x148) = 0;
    M2C_FIELD(arg0, u32 *, 0x150) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x154) = 0;
    M2C_FIELD(arg0, u32 *, 0x158) = 0;
    M2C_FIELD(arg0, u32 *, 0x15C) = 0;
    M2C_FIELD(arg0, u32 *, 0x160) = 0;
    M2C_FIELD(arg0, u32 *, 0x50) = 0;
    M2C_FIELD(arg0, void **, 0x164) = arg2;
    M2C_FIELD(arg0, u32 *, 0x16C) = 0;
    M2C_FIELD(arg0, u32 *, 0x170) = 0;
    M2C_FIELD(arg0, u32 *, 0x174) = 0;
    return arg0;
}

}
