#include "types.h"
#include "pso/TQuestThread.h"

extern "C" {

s32 is_visible__17TWindowSubComCardFv(void *);
s32 get_selected_menu_value(u32);

s32 TQuestThread::update_com_card() {
    if (*(void **)((s8 *)this + 0x1C) != NULL) {
        if (is_visible__17TWindowSubComCardFv(*(void **)((s8 *)this + 0x1C)) != 0) {
            return get_selected_menu_value(*(u32 *)((s8 *)this + 0x1C));
        }
    }
    return -1;
}

}
