#include "types.h"

extern "C" {

void TLockOnCursor__sub_8013E0D0(void* p, s32 v);
void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1);

void TLockOnCursor__sub_8013E0D0(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }

}
