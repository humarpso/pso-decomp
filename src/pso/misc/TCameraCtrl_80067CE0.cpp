#include "types.h"

extern "C" {

void TCameraCtrl__sub_80067CE0(void* p, s32 v);

void TCameraCtrl__sub_80067CE0(void* p, s32 v) { *(s32*)((char*)p + 0x10c) = v; }

}
