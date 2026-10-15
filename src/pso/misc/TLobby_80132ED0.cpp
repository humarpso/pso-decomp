#include "types.h"

extern "C" {
extern s32 text_language_group_table;
s32 get_localized_text_entry(s32 arg0, s32 arg1);
int free_instance__19TWindowKeyBoardSoftFv(void);
int free_resources__19TWindowKeyBoardSoftFv(void);
void free_keyboard_soft_resources__6TLobbyFv(void);
int TLanguage__ct(void*);
int select_language_text_resources(void*);
void update_menu_cursor__6TLobbyFv(void);
extern s32 current_language;
void update_keyboard_menu__6TLobbyFv(void);
}

extern "C" {

void update_menu_cursor__6TLobbyFv(void);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();
s8 TLobby__sub_80132EC8();

extern s32 current_language;

void update_menu_cursor__6TLobbyFv(void) {
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
void free_keyboard_soft_resources__6TLobbyFv(void) { free_instance__19TWindowKeyBoardSoftFv(); free_resources__19TWindowKeyBoardSoftFv(); }
void update_keyboard_menu__6TLobbyFv(void) { update_menu_cursor__6TLobbyFv(); select_language_text_resources((void*)((*(int *)&current_language))); TLanguage__ct((void*)((*(int *)&current_language))); }

}
