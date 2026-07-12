#include "types.h"

extern "C" {

void write_ids__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_803DED78(void*, void*);
int TObjPlayer__sub_803DED84(void*);
int set_some_id__FUl(void*);

void write_ids__10TObjPlayerFPv(void* p) { set_some_id__FUl(*(void**)((char*)p + 0x0)); TObjPlayer__sub_803DED78(*(void**)((char*)p + 0x4), *(void**)((char*)p + 0x8)); TObjPlayer__sub_803DED84((char*)p + 0xc); }

}
