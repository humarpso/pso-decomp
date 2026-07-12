#include "types.h"

extern "C" {

int TWindowSubComCard__sub_80073DB8(void* p);
void TQuestListVM__sub_80073DC4(void* p, s32 v);

void TQuestListVM__sub_80073DC4(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

}
