#include "types.h"

extern "C" {

s32 update_com_card__12TQuestThreadFPv(void *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_selected_menu_value(u32);

s32 update_com_card__12TQuestThreadFPv(void *arg0) {
    if (*(void **)((s8 *)arg0 + 0x1C) != NULL) {
        if (is_visible__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x1C)) != 0) {
            return get_selected_menu_value(*(u32 *)((s8 *)arg0 + 0x1C));
        }
    }
    return -1;
}

}
