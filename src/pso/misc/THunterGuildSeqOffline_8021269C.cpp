#include "types.h"
#include "pso/misc/THunterGuildSeqOffline.h"
#include "pso/misc/TQuestListVM.h"

extern "C" {

extern s32 THunterGuildSeqOffline__active_instance;

void THunterGuildSeqOffline::init_quest_list() {
    ((TQuestListVM *)THunterGuildSeqOffline__active_instance)->set_field_20(9);
}

}
