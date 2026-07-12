#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_game_objects__9TMainTaskFv(void);
M2C_UNK TEnding__sub_8008C9F8();
M2C_UNK TItemDisconnectCtrl__ct();
M2C_UNK TItemDrop__sub_8010643C();
M2C_UNK TItemLoad__sub_8011070C();
M2C_UNK TLobby__sub_80103B70(s32);
M2C_UNK TLobby__sub_80103F5C();
s32 TOKeyMachine01__sub_802034A8();
s32 TObjPlayer__sub_800196EC();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjPlayer__sub_8001BED8(M2C_UNK *, M2C_UNK);
s32 TLobby__sub_8030A7B0();
M2C_UNK fn_80363CA0(s32);
M2C_UNK spawn_cleanup_helper__10TObjPlayerFPv(s32);

s32 get_main_phase();
extern s32 lbl_805D543C;
extern M2C_UNK lbl_805D5440;
extern s32 tl_item_equip;
extern s32 tl_particlemodel;

void cleanup_game_objects__9TMainTaskFv(void) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;

    TEnding__sub_8008C9F8();
    TItemLoad__sub_8011070C();
    spawn_cleanup_helper__10TObjPlayerFPv(tl_particlemodel);
    fn_80363CA0(tl_item_equip);
    temp_r30 = get_main_phase();
    temp_r31 = TOKeyMachine01__sub_802034A8();
    temp_r29 = TObjPlayer__sub_800196EC();
    lbl_805D543C = 0;
    TLobby__sub_80103F5C();
    TLobby__sub_80103B70(temp_r29);
    if ((temp_r31 == 0) || (temp_r31 == 0x12)) {
        TObjPlayer__sub_8001BED8(&lbl_805D5440, 1);
        if ((temp_r30 != 0xE) && (temp_r30 == 0xF)) {
            TItemDrop__sub_8010643C();
        }
    }
    if (TLobby__sub_8030A7B0() == 1) {
        TItemDrop__sub_8010643C();
    }
    if ((temp_r30 == 0xF) && (__nw__7TObjectFUl(0x1C) != 0U)) {
        TItemDisconnectCtrl__ct();
    }
    lbl_805D543C = 1;
}

}
