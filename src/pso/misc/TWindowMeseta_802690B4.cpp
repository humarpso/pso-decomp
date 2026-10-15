#include "types.h"

extern "C" {

s32 setup_window_draw_context(s32, s32);
s32 draw_visible_window_entries(s32, s32, s32);
void *get_quest_id__12TQuestListVMFPv();
u32 get_player_by_client_id(s32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
s32 draw_window_tab(s32, s32, s32, f32);
s32 get_entry_id__17TWindowSubComCardFPv(void* p);
int TWindowSubComCard__sub_8026906C(void* p);

s32 get_meseta_value__13TWindowMesetaFPv(void *arg0) {
    void *temp_r3;

    if (get_player_by_client_id(*(s32 *)((s8 *)arg0 + 0x64)) == 0U) {
        return 0;
    }
    temp_r3 = get_quest_id__12TQuestListVMFPv();
    if (temp_r3 == NULL) {
        return 0;
    }
    return *(s32 *)((s8 *)temp_r3 + 0x20);
}
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1) {
    draw_window_tab(arg1, arg1 + 0x10, 3, *(f32 *)((s8 *)arg0 + 0x60));
}
void update_display__13TWindowMesetaFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = setup_window_draw_context(arg0, arg0 + 0x6C);
    draw_value__13TWindowMesetaFPvi((void *)(arg0), temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
}

}
