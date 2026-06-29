#include "types.h"

extern "C" {

int TChCrLoadAfsTextureReq__sub_8028C198(void*);
void fn_8028C054(void* p);

void fn_8028C054(void* p) { if (TChCrLoadAfsTextureReq__sub_8028C198(p) != 0) { *(int*)((char*)p + 0x2c) = 1; } }

}
