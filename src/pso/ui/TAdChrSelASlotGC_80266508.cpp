#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int TCheckRoomSequence__sub_802664A8(void* a0, void* a1, void* a2);
s32 TWindowSubStatusDisp__sub_802880BC(s32, s32, s32);
s32 fn_8026652C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void check_room_seq_4__16TAdChrSelASlotGCFii(s32 arg0, s32 arg1);
int TCheckRoomSequence__sub_802664A8(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int TShopJudgmentItemWindow__sub_80266388(void*, int, int, int);
int init_shop_judgment_window(void* p);

void check_room_seq_4__16TAdChrSelASlotGCFii(s32 arg0, s32 arg1) {
    TCheckRoomSequence__sub_802664A8((void*)(arg0), (void*)(arg1), (void*)(4));
}
s32 fn_8026652C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r0;
    temp_r31 = ((s32)TCheckRoomSequence__sub_802664A8((void*)(arg0), (void*)(arg1), (void*)(arg3)));
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x24);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowSubStatusDisp__sub_802880BC(temp_r3, arg2, arg3);
    }
    M2C_FIELD(temp_r31, s32 *, 0x88) = var_r0;
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x2C) | 0x40);
    return temp_r31;
}

}
