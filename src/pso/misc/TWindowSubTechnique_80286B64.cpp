#include "types.h"
#include "pso/misc/TWindowSubTechnique.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubTradeMain.h"

extern "C" {

s32 get_technique_name(s16);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s16);
u32 get_player_by_client_id(s32);
s32 can_use_palette_action__10TObjPlayerFPvUcUc(u32, s32, u8);
int get_selection__19TWindowSubTechniqueFPsPll(void*, void* a1 = 0);

s32 TWindowSubTechnique::update_selection(s16 *arg0, s32 *arg1) {
    s32 spC;
    s16 sp8;

    get_selection__19TWindowSubTechniqueFPsPll((void*)(&sp8), (void*)(&spC));
    if ((sp8 == (s16) *arg0) && (spC == (s32) *arg1)) {
        return 0;
    }
    *arg0 = sp8;
    *arg1 = spC;
    return 1;
}

}
