#include "types.h"

extern "C" {

void TObjPlayer__sub_801C5B24(void* p);
int fn_803DED78(void*, void*);
int fn_803DED84(void*);
int set_some_id__FUl(void*);

void TObjPlayer__sub_801C5B24(void* p) { set_some_id__FUl(*(void**)((char*)p + 0x0)); fn_803DED78(*(void**)((char*)p + 0x4), *(void**)((char*)p + 0x8)); fn_803DED84((char*)p + 0xc); }

}
