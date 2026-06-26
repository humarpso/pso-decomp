#include "types.h"

extern "C" {

void fn_8011E238(void* p, u32 v);
u8 fn_8011E29C(void* p);
void fn_8011E2A4(void* p, u8 v);

int fn_8011E1D4(void) { return 0; }
int fn_8011E204(void) { return 0; }
int fn_8011E214(void) { return 0; }
void fn_8011E238(void* p, u32 v) { *(u32*)((char*)p + 0x334) |= v; }
int fn_8011E248(void) { return 0; }
u8 fn_8011E29C(void* p) { return *(u8*)((char*)p + 0x1d2); }
void fn_8011E2A4(void* p, u8 v) { *(u8*)((char*)p + 0x1d2) = v; }

}
