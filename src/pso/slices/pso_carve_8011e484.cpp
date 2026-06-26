#include "types.h"

extern "C" {

int memcpy(void*, void*, void*);
void fn_8011E5C0(void);
void fn_8011E5C4(void);
void fn_8011E5C8(void);
void fn_8011E5CC(void);
void fn_8011E5D0(void);
void fn_8011E5D4(void);
void fn_8011E5D8(void);
void fn_8011E5DC(void);
void fn_8011E5E0(void);
void fn_8011E610(void* p, s32 v);

int fn_8011E484(void) { return 0; }
int fn_8011E4D8(void) { return 0; }
int fn_8011E56C(void) { return 0; }
void fn_8011E5C0(void) {  }
void fn_8011E5C4(void) {  }
void fn_8011E5C8(void) {  }
void fn_8011E5CC(void) {  }
void fn_8011E5D0(void) {  }
void fn_8011E5D4(void) {  }
void fn_8011E5D8(void) {  }
void fn_8011E5DC(void) {  }
void fn_8011E5E0(void) {  }
void fn_8011E5E4(void* p, void* a1) { memcpy((char*)p + 0x6, (char*)a1 + 0x1a4, (void*)6); }
void fn_8011E610(void* p, s32 v) { *(s32*)((char*)p + 0x1bc) = v; }

}
