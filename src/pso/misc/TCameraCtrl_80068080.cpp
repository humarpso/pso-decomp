#include "types.h"

extern "C" {

void TCameraCtrl__sub_80068080(void* p, void* q);

void TCameraCtrl__sub_80068080(void* p, void* q) { *(f32*)((char*)p + 0x48) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x50) = *(f32*)((char*)q + 0x8); }

}
