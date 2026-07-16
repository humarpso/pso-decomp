#include "types.h"

extern "C" {

void render__15TAdDrawLineTaskFv(void* p);

int reset_transform_state__10TObjPlayerFv(void*);
int TObjPlayer__sub_803E26A4(void*, void*, void*);

void render__15TAdDrawLineTaskFv(void* p) { reset_transform_state__10TObjPlayerFv(p); TObjPlayer__sub_803E26A4((char*)p + 0x64, (void*)4, (void*)1); }

}
