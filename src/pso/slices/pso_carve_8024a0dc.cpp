#include "types.h"

extern "C" {

s32 get_map_id__13TRaderMapCoreFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TAdMultiChgGameModeGC__sub_8023E7A8();
s32 TAdMultiPlyChrSelectGC__sub_802C5530(s32);

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
