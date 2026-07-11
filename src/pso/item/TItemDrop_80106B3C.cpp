#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemDrop__sub_80106B3C(s32 arg0, s32 arg1, s32 arg2);
void TItemDrop__sub_80106BB4(s32 arg0, s32 arg1, void *arg2);
void TItemDrop__sub_80106C40(void *arg0, void *arg1);
void TItemDrop__sub_80106C88(void* p, void* a1);
void TItemDrop__sub_80106CBC(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010D510(void *, M2C_UNK *);
M2C_UNK TItemDrop__sub_80106D0C(s32, void *);
s32 TItemDrop__sub_80107460(s32, s32, s32);
u8 TItemDrop__sub_80107790(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 can_drop__9TItemDropFv();
M2C_UNK fn_80105984(M2C_UNK *);
int fn_8010ED54(void*, void*);
M2C_UNK init__9TItemDataFv(void *);

extern s32 *lbl_805D5464;

s32 TItemDrop__sub_80106B3C(s32 arg0, s32 arg1, s32 arg2) {
    if ((can_drop__9TItemDropFv() == 1) && ((s32 *) lbl_805D5464 != NULL) && (arg1 > 0) && (arg1 < 0x58)) {
        return TItemDrop__sub_80107460(arg0, *lbl_805D5464 + (arg1 * 4), arg2);
    }
    return 0;
}

extern void *lbl_805D5460;

void TItemDrop__sub_80106BB4(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r3;
    u8 call_res;

    TItemDrop__sub_80106D0C(arg0, arg2);
    call_res = (u8) TItemDrop__sub_80107790(arg0, M2C_FIELD(lbl_805D5460, s32 *, 0x10), 0, 5, 1);
    M2C_FIELD(arg2, u8 *, 2) = (u8) (arg1 + call_res + M2C_FIELD(lbl_805D5460, u8 *, 0x48));
    temp_r3 = M2C_FIELD(arg2, u8 *, 2);
    if (temp_r3 < 3U) {
        M2C_FIELD(arg2, u8 *, 2) = 0U;
    } else {
        M2C_FIELD(arg2, u8 *, 2) = (u8) (temp_r3 - 3);
    }
}

void TItemDrop__sub_80106C40(void *arg0, void *arg1) {
    if (((u8) M2C_FIELD(arg1, u8 *, 1) == 2) && (((u8) M2C_FIELD(arg1, u8 *, 4) >= 0x13U) || ((u8) M2C_FIELD(arg1, u8 *, 2) >= 0x1EU))) {
        init__9TItemDataFv(arg1);
    }
}

void TItemDrop__sub_80106C88(void* p, void* a1) { if (*(unsigned char*)(a1) == 3) { fn_8010ED54(a1, (void*)1); } }

void TItemDrop__sub_80106CBC(void *arg0, void *arg1) {
    M2C_UNK sp8;

    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 2) {
        fn_80105984(&sp8);
        M2C_FIELD(arg1, s8 *, 1) = 0;
        TItemData__sub_8010D510(arg1, &sp8);
    }
}

}
