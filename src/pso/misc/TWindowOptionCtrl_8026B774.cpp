#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
M2C_UNK TWindowSubComCard__sub_80265C30(int);
M2C_UNK TWindowSubComCard__sub_80265E60(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
M2C_UNK get_option_entry__17TWindowOptionCtrlFi(int);
extern const f32 lbl_805DD268;
s32 TWindowOptionCtrl__sub_8026B774(void);
}

extern "C" {

s32 TWindowOptionCtrl__sub_8026B774(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *)(get_option_entry__17TWindowOptionCtrlFi((int) (0xCF))), (int) (3));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (0x1A))), (int) (6), (int) (0x12));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (0x1B))), (int) (6), (int) (0x14));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0xF), (int) (0x1C))), (int) (6), (int) (0x15));
    TWindowSubComCard__sub_80265E60((int) (temp_r31), (f32) (lbl_805DD268));
    TWindowSubComCard__sub_80265C30((int) (temp_r31));
    return temp_r31;
}

}
