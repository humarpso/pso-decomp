#include "types.h"

extern "C" {

void init_quest_list__22THunterGuildSeqOfflineFv(void);
s32 set_field_20__12TQuestListVMFPvi(s32, s32);

extern s32 THunterGuildSeqOffline__active_instance;

void init_quest_list__22THunterGuildSeqOfflineFv(void) {
    set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__active_instance, 9);
}

}
