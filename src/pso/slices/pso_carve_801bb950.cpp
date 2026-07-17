#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248(void *);
u16 obj_getField1c(void *);
u8 *get_item_field_6__10TObjPlayerFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(int);
s32 TQuestColCtrl__sub_8003F3C8(void *);
M2C_UNK obj_clear_flag30_20000(void *);
u32 create__15TFontSmallLobbyFPv(void *);
M2C_UNK TItemMag__sub_80113EF4(void *);
s32 check_state_flag_1__8TItemMagFPv(void *);
M2C_UNK TKeyBoardControl__sub_801AFCF4(void *, void *);
s32 TFontSmallLobby__sub_801AFEE0();
s32 check_flag_800000__10TObjPlayerFPv(void *);
M2C_UNK draw_small_label__15TFontSmallLobbyFi(void *);
M2C_UNK TFontSmallLobby__sub_801C013C(void *);
M2C_UNK TObjPlayer__sub_801C6A3C(void *);
M2C_UNK TObjPlayer__sub_801CBD6C();
M2C_UNK TFontSmallLobby__sub_801D5F08(void *);
M2C_UNK update_if_ready__15TFontSmallLobbyFPv(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80354E7C();
extern s32 lbl_805D2B28;

void TFontSmallLobby__ct(u8 *arg0) {
    u8 *temp_r3;

    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        temp_r3 = get_item_field_6__10TObjPlayerFPv(arg0);
        if (temp_r3 != NULL) {
            TKeyBoardControl__sub_801AFCF4((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x18), u8 (**)(), 0xAC)()));
        }
    }
    if ((TObjPlayer__sub_80019248((void *) (arg0)) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0)) {
        if (reset_key_machine_state__10TObjPlayerFv() == 0) {
            TItemMag__sub_80113EF4((void *) (arg0 + 0x4AC));
        }
        TFontSmallLobby__sub_801D5F08((void *) (arg0 + 0x4AC));
        update_if_ready__15TFontSmallLobbyFPv((void *) (arg0 + 0x4AC));
        TObjPlayer__sub_801CBD6C();
    }
    if (TFontSmallLobby__sub_801AFEE0() != 0) {
        if (((u32) M2C_FIELD(arg0, u32 *, 0x54C) != 0U) && (TQuestColCtrl__sub_8003F3C8((void *) (lbl_805D2B28)) != 0)) {
            queue_destruction__7TObjectFv((int) (M2C_FIELD(arg0, u32 *, 0x54C)));
        }
        M2C_FIELD(arg0, u32 *, 0x54C) = create__15TFontSmallLobbyFPv((void *) (obj_getField1c((void *) (arg0))));
    }
    obj_clear_flag30_20000((void *) (arg0));
    if (TObjPlayer__sub_80019248((void *) (arg0)) != 0) {
        if (check_flag_800000__10TObjPlayerFPv((void *) (arg0)) != 0) {
            draw_small_label__15TFontSmallLobbyFi((void *) (arg0));
        }
        if (check_state_flag_1__8TItemMagFPv((void *) (arg0 + 0x5B0)) != 0) {
            TObjPlayer__sub_801C6A3C((void *) (arg0 + 0x5B0));
        }
    }
    TFontSmallLobby__sub_801C013C((void *) (arg0 + 0x428));
    TObjPlayer__sub_80354E7C();
}

}
