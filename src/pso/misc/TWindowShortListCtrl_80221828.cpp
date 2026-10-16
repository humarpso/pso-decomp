#include "types.h"
#include "pso/misc/TWindowSubShortCutList.h"
#include "pso/misc/TWindowShortListCtrl.h"

extern "C" {
void fn_80221838(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TWindowSubShortCutList::set_flag70_bit10() { *(u16*)((char*)this + 0x70) |= 0x10; }

void fn_80221838(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + 4) = arg2;
    *(s32 *)((s8 *)arg0 + 0) = arg1;
}

}
