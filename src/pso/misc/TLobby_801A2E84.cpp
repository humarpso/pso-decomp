#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801A2E84(void);
void reset_quest_state__6TLobbyFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
M2C_UNK THunterGuildSeqOffline__sub_80213430();
M2C_UNK TLobby__sub_80103F68();
M2C_UNK TLobby__sub_8011AFB8();
M2C_UNK TLobby__sub_801A3B84();
M2C_UNK TLobby__sub_801A3BA4();
M2C_UNK TLobby__sub_801A3BF4();
M2C_UNK TLobby__sub_801A3C00();
M2C_UNK TLobby__sub_801A3C18();
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK TObjDoor__sub_801A3C0C();
M2C_UNK TObjPlayer__sub_801BDEF8(s32, s32, u32);
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK apply_all_players__9TTecLukerFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern s32 lbl_805D53A0;
extern s32 lbl_805D53A8;

void TLobby__sub_801A2E84(void) {
    s32 var_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    if (is_split_screen() != 0) {
        var_r31 = 0;
        do {
            if (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) != 0) {
                temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
                if (temp_r3 != 0U) {
                    TObjPlayer__sub_801BDEF8(var_r31, lbl_805D53A8 + var_r31, temp_r3);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    temp_r3_2 = get_char_index__23TAdSinglePlyChrSelectGCFUi(lbl_805D53A0);
    if (temp_r3_2 != 0U) {
        TObjPlayer__sub_801BDEF8(0, lbl_805D53A8, temp_r3_2);
    }
}

extern u32 lbl_805D5EE8;

void reset_quest_state__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    TSwitch__sub_8022942C();
    apply_all_players__9TTecLukerFv();
    TLobby__sub_8011AFB8();
    TLobby__sub_80103F68();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    TObjCityMainWarp__sub_80186634();
    THunterGuildSeqOffline__sub_80213430();
    TLobby__sub_801A3B84();
    TLobby__sub_801A3C18();
    TObjDoor__sub_801A3C0C();
    TLobby__sub_801A3C00();
    TLobby__sub_801A3BF4();
    TLobby__sub_801A3BA4();
}

}
