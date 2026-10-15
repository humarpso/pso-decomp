#include "types.h"

extern "C" {

void queue_destruction__19THunterGuildWarningFv(void);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void*);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 queue_destruction__7TObjectFv(u32);

extern u32 THunterGuildWarning__instance;

void queue_destruction__19THunterGuildWarningFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) THunterGuildWarning__instance != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void*)THunterGuildWarning__instance) != 0)) {
        queue_destruction__7TObjectFv(THunterGuildWarning__instance);
    }
}

}
