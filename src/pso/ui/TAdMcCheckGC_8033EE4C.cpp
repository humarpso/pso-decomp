#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__12TAdMcCheckGCFPvi(void *arg0, s32 arg1);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_80265CFC(s32, f32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, M2C_UNK, s32);

extern u8 lbl_804783B8[];
extern f32 lbl_805DFAD8;

s32 create__12TAdMcCheckGCFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x28) * 8;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_804783B8 + temp_r5, 1, temp_r5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x16, arg1), 0x20, 0);
    set_flag_40__16TAdChrSelASlotGCFPv(temp_r31);
    set_status_flag_80__12TQuestThreadFPv(temp_r31);
    TWindowSubComCard__sub_80265CFC(temp_r31, lbl_805DFAD8);
    return temp_r31;
}

}
