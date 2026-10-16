#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubSymbolChat.h"
#include "pso/object/TObjCityMainWarp.h"

extern "C" {
s32 is_symbol_chat_preset_in_use(void *);
s32 get_symbol_chat_preset(s32);
u8 * TWindowChatSymbol__ct(void *, s32, s32);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void *, int, int, int);
u8 *__nw__7TObjectFUl(s32);
s32 __ct__7TObjectFP7TObject();
s32 align_menu_entry_positions(void *);
u8 *check_room_seq_4__16TAdChrSelASlotGCFl(s32 *, s32);
extern s32 lbl_8044EAC0[];
extern s32 lbl_8044EAC8[];
extern s32 lbl_8044EAD0[];
extern s32 lbl_804CE7D0[];
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
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CE7D0;
    *(u8 **)((s8 *)arg0 + 0x1C) = check_room_seq_4__16TAdChrSelASlotGCFl(lbl_8044EAC0, 0xC);
    var_r31 = 0;
    do {
        temp_r3 = (u8 *)(get_symbol_chat_preset(var_r31));
        temp_r30 = (u8 *)(((TWindowSubSymbolChat *)temp_r3)->get_symbol_chat_data());
        if (is_symbol_chat_preset_in_use(temp_r3) != 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(*(u8 **)((s8 *)arg0 + 0x1C), (s32) temp_r30, 0x66, var_r31);
        } else {
            TWindowSubComCard::draw_text_gray((s32)((void *) (*(u8 **)((s8 *)arg0 + 0x1C))), (s32)((int) (temp_r30)), (s32)((int) (0x46)), (s32)((int) (var_r31)));
        }
        var_r31 += 1;
    } while (var_r31 < 0xC);
    ((TWindowSubComCardList *)(*(u8 **)((s8 *)arg0 + 0x1C)))->set_flag70_bit10();
    ((TWindowSubComCard *)(*(u8 **)((s8 *)arg0 + 0x1C)))->set_scroll_target((f32) (lbl_805DCBA0), (f32) (lbl_805DCBA4));
    align_menu_entry_positions((void *) (*(u8 **)((s8 *)arg0 + 0x1C)));
    temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0x68));
    var_r0 = (u8 *)(temp_r3_2);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowChatSymbol__ct(temp_r3_2, (s32) lbl_8044EAC8, (s32) lbl_8044EAD0));
    }
    *(u8 **)((s8 *)arg0 + 0x20) = var_r0;
    return arg0;
}

}
