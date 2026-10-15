#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

void set_position_xy(void* p, f32 a, f32 b);

void TWindowSubStatusDisp::clear_visible_flag() { *(u16*)((char*)this + 0x0) &= 0xfffffffd; }
void TWindowHelpItem::set_flag0_bit2() { *(u16*)((char*)this + 0x0) |= 0x2; }
void set_position_xy(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x60) = a; *(f32*)((char*)p + 0x64) = b; }

}
