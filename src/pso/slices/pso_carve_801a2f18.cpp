#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK TLobby__sub_80103F68();
M2C_UNK TLobby__sub_8011AFB8();
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK TLobby__sub_801A3B84();
M2C_UNK TLobby__sub_801A3BA4();
M2C_UNK fn_801A3BF4();
M2C_UNK fn_801A3C00();
M2C_UNK TObjDoor__sub_801A3C0C();
M2C_UNK fn_801A3C18();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK THunterGuildSeqOffline__sub_80213430();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK apply_all_players__9TTecLukerFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
extern u32 lbl_805D5EE8;

void fn_801A2F18(void) {
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
    fn_801A3C18();
    TObjDoor__sub_801A3C0C();
    fn_801A3C00();
    fn_801A3BF4();
    TLobby__sub_801A3BA4();
}

}
