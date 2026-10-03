#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_spend_actor_meseta(s32, s32);
s32 obj_getField1c(s32);
s32 init_owner__5TItemFPvUs(void *, s32);
s32 get_item_type_or_default__9TItemListFPv(void *);
s32 can_pickup_item__10TObjPlayerFPvPv();
int get_item_record__23TShopJudgmentItemWindowFPv(void* p);
int send_6x29_delete_item__10TObjPlayerFPvii(void*);

int get_item_record__23TShopJudgmentItemWindowFPv(void* p) { return send_6x29_delete_item__10TObjPlayerFPvii(p); }

}
