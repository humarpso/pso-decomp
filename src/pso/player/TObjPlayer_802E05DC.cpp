#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_chara_making__10TObjPlayerFPv(u8 *arg0);
u32 TAdPlyStatusGC__sub_802E1128(int);
M2C_UNK TAdPlyStatusGC__sub_802E1130(int);
u32 TAdPlyStatusGC__sub_802E1138(int);
M2C_UNK TAdPlyStatusGC__sub_802E1140(int);
M2C_UNK TAdPlyStatusGC__sub_802E1148(int);
s32 TAdPlyStatusGC__sub_802E1150(int);
M2C_UNK TAdPlyStatusGC__sub_802E1158(int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803DA798();
M2C_UNK TObjPlayer__sub_800FFA88(void *, int);
M2C_UNK TObjPlayer__sub_801B198C();
M2C_UNK TObjPlayer__sub_802E0580(void *, int, void *);
M2C_UNK draw_model_with_arg__10TObjPlayerFPvPv(void *, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D97F0();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();

void update_chara_making__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TAdPlyStatusGC__sub_802E1158((int) (M2C_FIELD(arg0, s32 *, 0x170)));
    TObjFish__sub_803DA798();
    draw_model_with_arg__10TObjPlayerFPvPv((void *) (arg0), (int) (TAdPlyStatusGC__sub_802E1150((int) (M2C_FIELD(arg0, s32 *, 0x170)))));
    TObjPlayer__sub_800FFA88((void *) (arg0), (int) (0x3A));
    TObjPlayer__sub_803D97F0();
    TAdPlyStatusGC__sub_802E1148((int) (M2C_FIELD(arg0, s32 *, 0x170)));
    TObjFish__sub_803DA798();
    TAdPlyStatusGC__sub_802E1140((int) (M2C_FIELD(arg0, s32 *, 0x170)));
    TObjPlayer__sub_801B198C();
    TObjPlayer__sub_803D9B78();
    if (TAdPlyStatusGC__sub_802E1138((int) (M2C_FIELD(arg0, s32 *, 0x170))) != 0U) {
        TObjPlayer__sub_800FFA88((void *) (arg0), (int) (0x3B));
        TObjPlayer__sub_803D97F0();
        TAdPlyStatusGC__sub_802E1130((int) (M2C_FIELD(arg0, s32 *, 0x170)));
        TObjFish__sub_803DA798();
        enable_making__12TCharaMakingFv();
        TAdPlyStatusGC__sub_802E1138((int) (M2C_FIELD(arg0, s32 *, 0x170)));
        TObjPlayer__sub_801B198C();
        clear_flag_bit0__12TCharaMakingFv();
        TObjPlayer__sub_803D9B78();
    }
    if (TAdPlyStatusGC__sub_802E1128((int) (M2C_FIELD(arg0, s32 *, 0x170))) != 0U) {
        TObjPlayer__sub_800FFA88((void *) (arg0), (int) (0x3B));
        TObjPlayer__sub_803D97F0();
        TAdPlyStatusGC__sub_802E1130((int) (M2C_FIELD(arg0, s32 *, 0x170)));
        TObjFish__sub_803DA798();
        enable_making__12TCharaMakingFv();
        TObjPlayer__sub_802E0580((void *) (arg0), (int) (TAdPlyStatusGC__sub_802E1128((int) (M2C_FIELD(arg0, s32 *, 0x170)))), (void *) (arg0 + 0x120));
        clear_flag_bit0__12TCharaMakingFv();
        TObjPlayer__sub_803D9B78();
    }
    TObjPlayer__sub_803D9B78();
}

}
