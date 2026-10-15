#include "types.h"

extern "C" {

s32 tick_com_card__12TQuestThreadFPv(void *arg0);
s32 update_board_card__12TQuestThreadFPv(void *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_selected_menu_value(void *);

s32 tick_com_card__12TQuestThreadFPv(void *arg0) {
    void *temp_r3 = *(void **)((s8 *)arg0 + 0x60);
    if (temp_r3 != NULL) {
        return get_selected_menu_value(temp_r3);
    }
    return -1;
}

s32 update_board_card__12TQuestThreadFPv(void *arg0) {
    void *temp_r3 = *(void **)((s8 *)arg0 + 0x60);
    if (temp_r3 != NULL) {
        return is_visible__17TWindowSubComCardFPv(temp_r3);
    }
    return 0;
}

}
