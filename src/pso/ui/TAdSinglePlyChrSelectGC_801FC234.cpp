#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1);
M2C_UNK TCheckRoomSequence__sub_802114D4(int, void *);
s32 TCheckRoomSequence__sub_80211574(int);

s32 register_in_free_room_slot__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r30;

    var_r30 = 0;
    var_r31 = (long) (arg0 + 0x250);
loop_1:
    if (TCheckRoomSequence__sub_80211574((int) (var_r31)) != 0) {
        TCheckRoomSequence__sub_802114D4((int) (var_r31), (void *) (arg1));
        M2C_FIELD(arg0, s32 *, 0x248) = (s32) (M2C_FIELD(arg0, s32 *, 0x248) + 1);
        return 1;
    }
    var_r30 += 1;
    var_r31 += 0x18;
    if (var_r30 >= 0xC8) {
        return 0;
    }
    goto loop_1;
}

}
