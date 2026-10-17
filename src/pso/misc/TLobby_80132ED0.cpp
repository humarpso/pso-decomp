#include "types.h"
#include "pso/misc/TWindowKeyBoardSoft.h"
#include "pso/misc/TLobby.h"

extern s32 text_language_group_table;
extern "C" {
s32 get_localized_text_entry(s32 arg0, s32 arg1);
void TLanguage__ct(s32 arg0);
}
void select_language_text_resources(s32 arg0);
extern s32 current_language;
extern "C" {
void *get_global_state__23TAdSinglePlyChrSelectGCFv();
s8 TLobby__sub_80132EC8();

void TLobby::update_menu_cursor() {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 == NULL) {
        current_language = (s32) TLobby__sub_80132EC8();
        return;
    }
    if ((s8) *(u8 *)((s8 *)temp_r3 + 7) >= 5) {
        *(u8 *)((s8 *)temp_r3 + 7) = 1U;
    }
    current_language = (s32) (s8) *(u8 *)((s8 *)temp_r3 + 7);
}
s32 get_localized_text_entry(s32 arg0, s32 arg1) {
    return *(s32 *)((s8 *)(*(s32 *)((s8 *)(text_language_group_table + (arg0 * 4)) + 0) + (arg1 * 4)) + 0);
}
void TLobby::free_keyboard_soft_resources() { TWindowKeyBoardSoft::free_instance(); TWindowKeyBoardSoft::free_resources(); }
void TLobby::update_keyboard_menu() { TLobby::update_menu_cursor(); select_language_text_resources(((*(int *)&current_language))); TLanguage__ct(((*(int *)&current_language))); }
}
