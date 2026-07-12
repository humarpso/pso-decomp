#include "types.h"

extern "C" {

void THunterGuildSeqOffline__vt10(void* p);

int TQuestListVM__sub_80073DC4(void*, void*);
int create_instance__19THunterGuildWarningFi(void*);
int fn_80223480(void*);
int restore_player_state__13TShopSequenceFPv(void*);

void THunterGuildSeqOffline__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); fn_80223480(p); create_instance__19THunterGuildWarningFi((void*)2); TQuestListVM__sub_80073DC4(p, (void*)1); }

}
