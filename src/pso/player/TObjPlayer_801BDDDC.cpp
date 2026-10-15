#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 construct_player_instance__10TObjPlayerFPvisiPv(s32, s32, u16, s32, s32);
s32 __nw__7TObjectFUl(s32);
s32 copy_header_struct__6TLobbyFPv(s32, s32);
s32 get_sub_obj__10TObjPlayerFv(s32);
s32 get_char_data__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801C22B4(s32);

extern s32 tl_03;

s32 TObjPlayer::create(u32 arg0, s32 arg1) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = __nw__7TObjectFUl(0xDB8);
    if (var_r30 != 0) {
        var_r30 = construct_player_instance__10TObjPlayerFPvisiPv(var_r30, tl_03, (u16)arg0, TObjPlayer__sub_801C22B4(arg1), get_char_data__10TObjPlayerFv(arg1));
    }
    copy_header_struct__6TLobbyFPv(var_r30 + 0xDAC, get_sub_obj__10TObjPlayerFv(arg1));
    return var_r30;
}

}
