#include "types.h"

extern "C" {

void close__23TShopJudgmentItemWindowFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void close__23TShopJudgmentItemWindowFPv(void* p) { if (*(unsigned int*)((char*)p + 0x50) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x50)); *(int*)((char*)p + 0x50) = 0; } }

}
