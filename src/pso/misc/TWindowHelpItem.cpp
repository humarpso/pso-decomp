#include "types.h"

extern "C" {

void set_flag0_bit2__15TWindowHelpItemFPv(void* p);
void clear_visible_flag__20TWindowSubStatusDispFPv(void* p);
void set_position_xy(void* p, f32 a, f32 b);

void clear_visible_flag__20TWindowSubStatusDispFPv(void* p) { *(u16*)((char*)p + 0x0) &= 0xfffffffd; }
void set_flag0_bit2__15TWindowHelpItemFPv(void* p) { *(u16*)((char*)p + 0x0) |= 0x2; }
void set_position_xy(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x60) = a; *(f32*)((char*)p + 0x64) = b; }

}
