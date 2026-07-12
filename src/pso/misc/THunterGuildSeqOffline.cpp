#include "types.h"

extern "C" {

void THunterGuildSeqOffline__vt10(void* p);

int TQuestListVM__sub_80073DC4(void*, void*);
int create_instance__19THunterGuildWarningFi(void*);
int fn_80223480(void*);
int TShopSequence__sub_802237D8(void*);

void THunterGuildSeqOffline__vt10(void* p) { TShopSequence__sub_802237D8(p); fn_80223480(p); create_instance__19THunterGuildWarningFi((void*)2); TQuestListVM__sub_80073DC4(p, (void*)1); }

}
