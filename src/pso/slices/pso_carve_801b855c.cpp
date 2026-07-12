#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80011138(s32, s32);
s32 obj_getField1c(s32);
s32 init_owner__5TItemFPvUs(void *, s32);
s32 TItemList__sub_8010ED0C(void *);
s32 can_pickup_item__10TObjPlayerFPvPv();
int TShopJudgmentItemWindow__sub_801B853C(void* p);
int TObjPlayer__sub_801B8DE8(void*);

int fn_801B855C(void) { return 0; }
s32 try_buy_item(s32 arg0, void *arg1) {
    if (can_pickup_item__10TObjPlayerFPvPv() == 0) {
        return 1;
    }
    if (TObjPlayer__sub_80011138(arg0, M2C_FIELD(arg1, s32 *, 0x10) * TItemList__sub_8010ED0C(arg1)) != 0) {
        init_owner__5TItemFPvUs(arg1, obj_getField1c(arg0));
        return 0;
    }
    return 2;
}

}
