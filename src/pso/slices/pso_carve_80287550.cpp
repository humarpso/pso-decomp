#include "types.h"

extern "C" {

void TWindowSubTechnique__sub_80287550(void* p);
void fn_80287560(void* p);

void TWindowSubTechnique__sub_80287550(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
void fn_80287560(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }

}
