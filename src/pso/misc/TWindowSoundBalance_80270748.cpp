#include "types.h"
#include "pso/misc/TWindowSubComCard_80244774.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSoundBalance.h"
#include "pso/misc/TLobby_80226070.h"
#include "pso/misc/TUnk_804CF930.h"

void TWindowSoundBalance::set_sound_effect_gain(s16 gain) {
    if (sound_effect_gain != gain) {
        sound_effect_gain = gain;
        TLobby__sub_8022614C(gain);
        TUnk_804CF930 *gauge = (TUnk_804CF930 *)get_array_entry(3);
        gauge->target = gain + 100;
        gauge->calc_bar_width();
    }
}

void TWindowSoundBalance::set_music_gain(s16 gain) {
    if (music_gain != gain) {
        music_gain = gain;
        update_music_stream_gain(gain);
        TUnk_804CF930 *gauge = (TUnk_804CF930 *)get_array_entry(2);
        gauge->target = gain + 250;
        gauge->calc_bar_width();
    }
}

void TWindowSoundBalance::apply_balance(void *window_key_board_soft) {
    s32 temp;

    temp = get_array_entry((s32)*(s8 *)&m_61);
    draw_selection_bar((u8 *)window_key_board_soft, (u8 *)temp, is_active());
}
