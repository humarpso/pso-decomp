#include "types.h"

extern "C" {

void draw__14TObjEnePanarmsFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int draw__16TObjEneRe7BeruraFPv(void*);
int clear_render_callback__8TObjFishFv(void*);
int TObjFish__sub_800E3074(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int TObjFish__sub_803DA798(void*);

void draw__14TObjEnePanarmsFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TObjFish__sub_803DA798(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x3dc)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x3dc)); TObjPlayer__sub_803D9B78(); }

}
