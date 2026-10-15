#include "types.h"
#include "pso/misc/THunterGuildSeqOffline.h"

extern "C" {

s32 set_field_20__12TQuestListVMFl(s32, s32);

extern s32 THunterGuildSeqOffline__active_instance;

void THunterGuildSeqOffline::init_quest_list() {
    set_field_20__12TQuestListVMFl(THunterGuildSeqOffline__active_instance, 9);
}

}
