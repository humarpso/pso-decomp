#include "types.h"

extern "C" {

void release_keyboard__19TWindowKeyBoardHardFPv(void* p);
int TWindowKeyBoardHard__sub_8025CC48(void*);

void release_keyboard__19TWindowKeyBoardHardFPv(void* p) { void* m = *(void**)((char*)p + 0x70); if (m) TWindowKeyBoardHard__sub_8025CC48(m); }

}
