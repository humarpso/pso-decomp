#include "types.h"
#include "pso/TQuestThread.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 get_selected_menu_value(u32);

s32 TQuestThread::update_com_card() {
    if (*(void **)((s8 *)this + 0x1C) != NULL) {
        if (((TWindowSubComCard *)(*(void **)((s8 *)this + 0x1C)))->is_visible() != 0) {
            return get_selected_menu_value(*(u32 *)((s8 *)this + 0x1C));
        }
    }
    return -1;
}

}
