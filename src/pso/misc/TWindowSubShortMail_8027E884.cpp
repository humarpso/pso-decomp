#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_menu__19TWindowSubShortMailFv(void);
s32 create_window__19TWindowSubShortMailFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TQuestThread__sub_801F64BC(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_card_window_area__6TLobbyFv();
s32 TLobby__sub_8001DB44();
M2C_UNK TAdChrSelASlotGC__sub_800740FC(s32);
M2C_UNK TWindowSubComCard__sub_80265C10(s32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265DEC(s32, f32, f32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, M2C_UNK);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_menu__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xA2);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x105), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x106), 6, 0);
    if (TLobby__sub_8001DB44() == 0) {
        TWindowSubComCard__sub_80265C10(temp_r31, 1);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, TWindowSubShortMail__data_805DD6C8);
    return temp_r31;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;
extern const f32 lbl_805DD6CC;

s32 create_window__19TWindowSubShortMailFv(void) {
    s32 temp_r3;
    s32 temp_r31;

    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xA1);
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(temp_r3, 2);
    if (TLobby__sub_8001DB44() != 0) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x105), 0, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_card_window_area__6TLobbyFv(), 0, 0);
    } else {
        forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x106), 0, 0);
        draw_text_gray__17TWindowSubComCardFiiii(temp_r31, get_card_window_area__6TLobbyFv(), 0, 0);
    }
    TAdChrSelASlotGC__sub_800740FC(temp_r31);
    TQuestThread__sub_801F64BC(temp_r31);
    TWindowSubComCard__sub_80265DEC(temp_r31, TWindowSubShortMail__data_805DD6C8, lbl_805DD6CC);
    return temp_r31;
}

}
