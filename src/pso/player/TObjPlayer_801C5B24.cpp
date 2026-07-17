#include "types.h"

extern "C" {

void write_ids__10TObjPlayerFPv(void* p);
int set_global_pair__10TObjPlayerFii(void*, void*);
int TObjPlayer__sub_803DED84(void*);
int set_some_id__FUl(void*);

void write_ids__10TObjPlayerFPv(void* p) { set_some_id__FUl(*(void**)((char*)p + 0x0)); set_global_pair__10TObjPlayerFii(*(void**)((char*)p + 0x4), *(void**)((char*)p + 0x8)); TObjPlayer__sub_803DED84((char*)p + 0xc); }

}
