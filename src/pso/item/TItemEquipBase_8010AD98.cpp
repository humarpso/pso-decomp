#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
s32 TObjPlayer__sub_800193F4(void *);
s32 TObjPlayer__sub_800194E8(void *);
s32 TObjPlayer__sub_80019514(void *);
M2C_UNK fn_8010B7D8(void *, void *);
M2C_UNK fn_8010B7E8(void *, void *);
M2C_UNK fn_8010B7F8(void *, void *);

void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    if (arg1 != 0) {
        fn_8010B7F8((void *) (arg1), (void *) (TObjPlayer__sub_800193F4((void *) (arg0 + 0x11C))));
        fn_8010B7E8((void *) (arg1), (void *) (TObjPlayer__sub_80019514((void *) (arg0 + 0x11C))));
        fn_8010B7D8((void *) (arg1), (void *) (TObjPlayer__sub_800194E8((void *) (arg0 + 0x11C))));
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg2, s16 *, 0) = (s16) (M2C_FIELD(arg2, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0x14C));
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (M2C_FIELD(arg2, s32 *, 0x1C) - M2C_FIELD(arg0, s32 *, 0x168));
        M2C_FIELD(arg2, s16 *, 2) = (s16) (M2C_FIELD(arg2, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0x14E));
        M2C_FIELD(arg2, s16 *, 4) = (s16) (M2C_FIELD(arg2, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0x150));
        M2C_FIELD(arg2, s16 *, 6) = (s16) (M2C_FIELD(arg2, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0x152));
        M2C_FIELD(arg2, s16 *, 8) = (s16) (M2C_FIELD(arg2, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x154));
        M2C_FIELD(arg2, s16 *, 0xA) = (s16) (M2C_FIELD(arg2, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x156));
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg3, s16 *, 0) = (s16) (M2C_FIELD(arg3, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0xF8));
        M2C_FIELD(arg3, s16 *, 2) = (s16) (M2C_FIELD(arg3, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0xFA));
        M2C_FIELD(arg3, s16 *, 4) = (s16) (M2C_FIELD(arg3, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0xFC));
        M2C_FIELD(arg3, s16 *, 6) = (s16) (M2C_FIELD(arg3, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0xFE));
        M2C_FIELD(arg3, s16 *, 8) = (s16) (M2C_FIELD(arg3, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x100));
        M2C_FIELD(arg3, s16 *, 0xA) = (s16) (M2C_FIELD(arg3, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x102));
        M2C_FIELD(arg3, s16 *, 0xC) = (s16) (M2C_FIELD(arg3, s16 *, 0xC) - M2C_FIELD(arg0, s16 *, 0x104));
    }
}

}
