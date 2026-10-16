#include "types.h"
#include "pso/THunterGuildWarning.h"
#include "pso/TObject.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {

s32 queue_destruction__7TObjectFv(u32);

extern u32 THunterGuildWarning__instance;

void THunterGuildWarning::queue_destruction() {
    if ((TRaderMapCore::is_not_split_screen() == 1) && ((u32) THunterGuildWarning__instance != 0U) && (((TObject *)THunterGuildWarning__instance)->all_parents_unqueued_for_destruction() != 0)) {
        queue_destruction__7TObjectFv(THunterGuildWarning__instance);
    }
}

}
