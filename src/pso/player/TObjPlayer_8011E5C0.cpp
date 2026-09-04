#include "types.h"

extern "C" {

int memcpy(void*, void*, void*);
void TObjPlayer__sub_8011E5C0(void);
void TObjPlayer__sub_8011E5C4(void);
void TObjPlayer__sub_8011E5C8(void);
void TObjPlayer__sub_8011E5CC(void);
void TObjPlayer__sub_8011E5D0(void);
void TObjPlayer__sub_8011E5D4(void);
void TObjPlayer__sub_8011E5D8(void);
void TObjPlayer__sub_8011E5DC(void);
void TObjPlayer__sub_8011E5E0(void);
void TObjPlayer__sub_8011E610(void* p, s32 v);

void TObjPlayer__sub_8011E5C0(void) {  }
void TObjPlayer__sub_8011E5C4(void) {  }
void TObjPlayer__sub_8011E5C8(void) {  }
void TObjPlayer__sub_8011E5CC(void) {  }
void TObjPlayer__sub_8011E5D0(void) {  }
void TObjPlayer__sub_8011E5D4(void) {  }
void TObjPlayer__sub_8011E5D8(void) {  }
void TObjPlayer__sub_8011E5DC(void) {  }
void TObjPlayer__sub_8011E5E0(void) {  }
void copy_field6_from__10TObjPlayerFPvPv(void* p, void* a1) { memcpy((char*)p + 0x6, (char*)a1 + 0x1a4, (void*)6); }
void TObjPlayer__sub_8011E610(void* p, s32 v) { *(s32*)((char*)p + 0x1bc) = v; }

}
