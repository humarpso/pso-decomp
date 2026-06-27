#include "types.h"

extern "C" {

int fn_801D6A18(void*);
int fn_801D6C4C(void*);
int TObjPlayer__sub_801D7860(void*);
void* TObjPlayer__sub_801D6CBC(void* p);

void* TObjPlayer__sub_801D6CBC(void* p) { TObjPlayer__sub_801D7860((char*)p + 0x8); TObjPlayer__sub_801D7860((char*)p + 0x18); TObjPlayer__sub_801D7860((char*)p + 0x28); TObjPlayer__sub_801D7860((char*)p + 0x38); TObjPlayer__sub_801D7860((char*)p + 0x48); fn_801D6A18((char*)p + 0x58); *(int*)((char*)p + 0x4) = 0; fn_801D6C4C(p); return p; }

}
