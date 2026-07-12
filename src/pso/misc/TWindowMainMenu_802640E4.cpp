#include "types.h"

extern "C" {

void TWindowMainMenu__sub_802640E4(void* p);
int queue_destruction__7TObjectFv(void*);

void TWindowMainMenu__sub_802640E4(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; } }

}
