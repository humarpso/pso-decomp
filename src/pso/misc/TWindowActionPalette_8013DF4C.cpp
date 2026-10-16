#include "types.h"
#include "pso/misc/TWindowActionPalette.h"
#include "pso/misc/TForceOperate.h"
#include "pso/misc/TMainCursor.h"

extern "C" {

int __dl__FPv();
u16 TMainCursor__sub_8013E03C(void* p);

void TWindowActionPalette::set_slot(u8 v) { *(u8*)((char*)this + 0x1) = v; }
void TWindowActionPalette::set_mode(u8 v) { *(u8*)((char*)this + 0x0) = v; }

}
