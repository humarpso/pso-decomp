#include "types.h"

extern "C" {

void TObjPlayer__sub_8011E238(void* p, u32 v);
u8 TObjPlayer__sub_8011E29C(void* p);
void TObjPlayer__sub_8011E2A4(void* p, u8 v);

u8 TObjPlayer__sub_8011E29C(void* p) { return *(u8*)((char*)p + 0x1d2); }
void TObjPlayer__sub_8011E2A4(void* p, u8 v) { *(u8*)((char*)p + 0x1d2) = v; }

}
