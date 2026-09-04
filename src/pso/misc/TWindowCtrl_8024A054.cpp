#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Obj054_8024A054 { char pad[0x38]; u32 field38; };

void clear_flag__11TWindowCtrlFv(void);
s32 is_player_input_active(s32 arg0);
s32 TAdMultiChgGameModeGC__sub_8023E7A8();
s32 TAdMultiPlyChrSelectGC__sub_802C5530(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK clear_flag1e_bit8__11TWindowCtrlFPv(void*);
s32 get_map_id__13TRaderMapCoreFPv();

extern struct Obj054_8024A054 *TWindowCtrl__data_805D63F8;

void clear_flag__11TWindowCtrlFv(void) {
    if ((TWindowCtrl__data_805D63F8 != NULL) && (TWindowCtrl__data_805D63F8->field38 != 0U)) {
        clear_flag1e_bit8__11TWindowCtrlFPv((void*)TWindowCtrl__data_805D63F8->field38);
    }
}

s32 is_player_input_active(s32 arg0) {
    if (arg0 >= 4) {
        return 0;
    }
    if (TAdMultiChgGameModeGC__sub_8023E7A8() != 0) {
        return TAdMultiPlyChrSelectGC__sub_802C5530(arg0);
    }
    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) == 0U) {
        return 0;
    }
    return get_map_id__13TRaderMapCoreFPv();
}

}
