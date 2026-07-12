#include "types.h"

extern "C" {

void TJudgmentSequence__vt10(void* p);

int TQuestListVM__sub_80073DC4(void*, void*);
int TShopSequence__sub_802237D8(void*);

void TJudgmentSequence__vt10(void* p) { TShopSequence__sub_802237D8(p); TQuestListVM__sub_80073DC4(p, (void*)1); }

}
