#include "types.h"

extern "C" {

void fn_8013EEC0(void* p, s16 v);

void fn_8013EEC0(void* p, s16 v) { *(s16*)((char*)p + 0x20) = v; }

}
