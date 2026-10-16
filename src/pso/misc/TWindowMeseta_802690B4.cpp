#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowMeseta.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 draw_visible_window_entries(s32, s32, s32);
void *get_quest_id__12TQuestListVMFv();
u32 get_player_by_client_id(s32);
s32 draw_window_tab(s32, s32, s32, f32);

s32 TWindowMeseta::get_meseta_value() {
    void *temp_r3;

    if (get_player_by_client_id(*(s32 *)&this->m_64) == 0U) {
        return 0;
    }
    temp_r3 = get_quest_id__12TQuestListVMFv();
    if (temp_r3 == NULL) {
        return 0;
    }
    return *(s32 *)((s8 *)temp_r3 + 0x20);
}
void TWindowMeseta::draw_value(s32 arg1) {
    draw_window_tab(arg1, arg1 + 0x10, 3, this->m_60);
}
void update_display__13TWindowMesetaFi(s32 arg0) {
    s32 ctx;

    ctx = ((TUnk_804CE018 *)arg0)->setup_window_draw_context(arg0 + 0x6C);
    ((TWindowMeseta *)arg0)->draw_value(ctx);
    draw_visible_window_entries(arg0, arg0 + 0x24, ctx);
}

}
