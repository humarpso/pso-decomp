#include "types.h"

extern "C" {

void TScene__sub_80205AE8(void);
void TScene__sub_80205FD0(void);
void copy_header_and_vec__6TSceneFPvPv(void* p, void* q);

void TScene__sub_80205AE8(void) {  }

void copy_header_and_vec__6TSceneFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); }

void TScene__sub_80205FD0(void) {  }

}
