#include "types.h"

extern "C" {

void TObjPlayer__sub_8011E238(void* p, u32 v);
u8 TObjPlayer__sub_8011E29C(void* p);
void TObjPlayer__sub_8011E2A4(void* p, u8 v);

void TObjPlayer__sub_8011E214(void *arg0) {
    TObjPlayer__sub_8011E238((void*)(arg0), 0x10000);
}
void TObjPlayer__sub_8011E238(void* p, u32 v) { *(u32*)((char*)p + 0x334) |= v; }

}
