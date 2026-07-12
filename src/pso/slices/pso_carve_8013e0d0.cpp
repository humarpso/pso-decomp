#include "types.h"

extern "C" {

void TMainCursor__sub_8013E0AC(void* p, s32 a1);
void TLockOnCursor__sub_8013E0D0(void* p, s32 v);

void TLockOnCursor__sub_8013E0D0(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }

}
