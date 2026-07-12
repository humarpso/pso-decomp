#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__6TLobbyFPv(void *arg0);
M2C_UNK set_flag_270__6TLobbyFPv();
M2C_UNK close_and_play_effect__6TLobbyFii(u16, M2C_UNK);
M2C_UNK TLobby__sub_8020BB18();
M2C_UNK TLobby__sub_8020BCE4();
M2C_UNK TOMineTrap__sub_8016FCC4();
s32 TObjPlayer__sub_801BE648();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TObjPlayer__sub_8002AEB8(s32, M2C_UNK);
M2C_UNK obj_set_flag_20000();
M2C_UNK destroy__23TAdSinglePlyChrSelectGCFv();
M2C_UNK fn_801C5454(s32);
M2C_UNK fn_801F57B4(s32);
M2C_UNK fn_8020910C(s32);

extern s32 lbl_805D53A0;
extern s32 tl_00;
extern s32 tl_01;

void init__6TLobbyFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;
    u32 temp_r3_2;

    set_flag_270__6TLobbyFPv();
    close_and_play_effect__6TLobbyFii((u16) lbl_805D53A0, 1);
    temp_r3 = TObjPlayer__sub_801BE648();
    if (temp_r3 != 0) {
        obj_set_flag_20000();
        TObjPlayer__sub_8002AEB8(temp_r3 + 0x644, 0xE10);
    }
    TOMineTrap__sub_8016FCC4();
    fn_8020910C(tl_01);
    fn_801F57B4(tl_00);
    TLobby__sub_8020BCE4();
    destroy__23TAdSinglePlyChrSelectGCFv();
    TLobby__sub_8020BB18();
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    do {
        temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (temp_r3_2 != 0U) {
            fn_801C5454(temp_r3_2 + 0x7C4);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
