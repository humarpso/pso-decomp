#include "types.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/quest/TQuestThread.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 get_selected_menu_value(void *);

s32 TQuestThread::tick_com_card() {
    void *temp_r3 = *(void **)((s8 *)this + 0x60);
    if (temp_r3 != NULL) {
        return get_selected_menu_value(temp_r3);
    }
    return -1;
}

s32 TQuestThread::update_board_card() {
    void *window_menu = *(void **)((s8 *)this + 0x60);
    if (window_menu != NULL) {
        return ((TWindowMenu *)window_menu)->is_visible();
    }
    return 0;
}

}
