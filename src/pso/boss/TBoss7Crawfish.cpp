#include "types.h"

extern "C" {

void render__14TBoss7CrawfishFv(void* p);

int draw__16TObjEneRe7BeruraFPv(void*);
int notify_fish_if_valid__10TObjPlayerFUi(void*);
int TBoss7Crawfish__sub_80308840(void*);
int TObjChip__sub_803D8AE4(void*, void*, void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TOHangerMachine01__sub_803D9C00(void*);
int set_global_flag__10TObjPlayerFv(void);
int clear_global_state__10TObjPlayerFv(void);

void render__14TBoss7CrawfishFv(void* p) { if (TBoss7Crawfish__sub_80308840(p) != 0) { notify_fish_if_valid__10TObjPlayerFUi(*(void**)((char*)p + 0x24)); set_global_flag__10TObjPlayerFv(); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjChip__sub_803D8AE4((void*)0, *(void**)((char*)p + 0x5c), *(void**)((char*)p + 0x60), *(void**)((char*)p + 0x64)); TBoss7Tentacle__sub_803D9BA0((char*)p + 0x68); draw__16TObjEneRe7BeruraFPv(p); TObjPlayer__sub_803D9B78(); clear_global_state__10TObjPlayerFv(); } }

}
