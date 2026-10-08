#include "types.h"

extern "C" {
s32 clear_story_flag(s32);
extern s32 lobby_story_flag_clear_list[];
void TLobby__sub_801F48B0(void);
s32 clear_story_flag(s32);
void reset_camera_if_fullscreen__6TLobbyFPv(void* p);
extern s32 lobby_story_flag_clear_list[];
void clear_story_flags_and_reset_camera__6TLobbyFv(void);
}

extern "C" {

void reset_camera_if_fullscreen__6TLobbyFPv(void* p);
int get_nth_view_player_id__11TCameraCtrlFi(void*);
void TLobby__sub_801F494C(u16 arg0);
u32 get_card_window__17TWindowSubComCardFUi(u32);
void *memcpy(void *, void *, u32);
extern u8 lbl_805127F8[0x200];
int is_not_split_screen__13TRaderMapCoreFv(void*);

void reset_camera_if_fullscreen__6TLobbyFPv(void* p) { if (is_not_split_screen__13TRaderMapCoreFv(p) == 1) { get_nth_view_player_id__11TCameraCtrlFi((void*)0); ((int (*)(void))TLobby__sub_801F494C)(); } }

void TLobby__sub_801F48B0(void) {
    s32 i;
    for (i = 0; lobby_story_flag_clear_list[i] != -1; i++) {
        clear_story_flag(lobby_story_flag_clear_list[i]);
    }
}

void clear_story_flags_and_reset_camera__6TLobbyFv(void) {
    s32 i;
    for (i = 0; lobby_story_flag_clear_list[i] != -1; i++) {
        clear_story_flag(lobby_story_flag_clear_list[i]);
    }
    ((void (*)(void))reset_camera_if_fullscreen__6TLobbyFPv)();
}

void TLobby__sub_801F494C(u16 arg0) {
    u32 temp_r3;
    temp_r3 = get_card_window__17TWindowSubComCardFUi(arg0);
    if (temp_r3 != 0U) {
        memcpy(lbl_805127F8, (void *)(temp_r3 + 0x44), 0x200);
    }
}

}
