#include "types.h"
#include "pso/TQuestThread.h"

extern "C" {

s32 is_visible__17TWindowSubComCardFv(void *);
s32 get_selected_menu_value(void *);

s32 TQuestThread::tick_com_card() {
    void *temp_r3 = *(void **)((s8 *)this + 0x60);
    if (temp_r3 != NULL) {
        return get_selected_menu_value(temp_r3);
    }
    return -1;
}

s32 TQuestThread::update_board_card() {
    void *temp_r3 = *(void **)((s8 *)this + 0x60);
    if (temp_r3 != NULL) {
        return is_visible__17TWindowSubComCardFv(temp_r3);
    }
    return 0;
}

}
