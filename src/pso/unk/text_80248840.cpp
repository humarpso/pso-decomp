#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * get_symbol_chat_data__20TWindowSubSymbolChatFPv(void *);
s32 is_symbol_chat_preset_in_use(void *);
s32 get_symbol_chat_preset(s32);
u8 * TWindowChatSymbol__ct(void *, s32, s32);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *, int, int, int);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(void *);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK align_menu_entry_positions(void *);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(void *, f32, f32);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(void *, int, int, int);
u8 *check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK *, M2C_UNK);
extern M2C_UNK lbl_8044EAC0[];
extern M2C_UNK lbl_8044EAC8[];
extern M2C_UNK lbl_8044EAD0[];
extern M2C_UNK lbl_804CE7D0[];
extern const f32 lbl_805DCBA0;
extern const f32 lbl_805DCBA4;
u8 *construct_symbol_chat_selection(u8 *arg0);
}

extern "C" {

u8 *construct_symbol_chat_selection(u8 *arg0) {
    s32 var_r31;
    u8 *temp_r30;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *var_r0;
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE7D0;
    M2C_FIELD(arg0, u8 **, 0x1C) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_8044EAC0, 0xC);
    var_r31 = 0;
    do {
        temp_r3 = (u8 *)(get_symbol_chat_preset(var_r31));
        temp_r30 = (u8 *)(get_symbol_chat_data__20TWindowSubSymbolChatFPv(temp_r3));
        if (is_symbol_chat_preset_in_use(temp_r3) != 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u8 **, 0x1C), (s32) temp_r30, 0x66, var_r31);
        } else {
            draw_text_gray__17TWindowSubComCardFiiii((void *) (M2C_FIELD(arg0, u8 **, 0x1C)), (int) (temp_r30), (int) (0x46), (int) (var_r31));
        }
        var_r31 += 1;
    } while (var_r31 < 0xC);
    set_flag70_bit10__16TObjCityMainWarpFPv((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
    set_scroll_target__17TWindowSubComCardFPvff((void *) (M2C_FIELD(arg0, u8 **, 0x1C)), (f32) (lbl_805DCBA0), (f32) (lbl_805DCBA4));
    align_menu_entry_positions((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
    temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0x68));
    var_r0 = (u8 *)(temp_r3_2);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowChatSymbol__ct(temp_r3_2, (s32) lbl_8044EAC8, (s32) lbl_8044EAD0));
    }
    M2C_FIELD(arg0, u8 **, 0x20) = var_r0;
    return arg0;
}

}
