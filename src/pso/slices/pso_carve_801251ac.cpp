#include "types.h"

extern "C" {

int fn_8011E618(void*);
int fn_8011E87C(void*, void*);
int fn_80120BBC(void*, void*);
s16 fn_801251AC(void* p);

s16 fn_801251AC(void* p) { return *(s16*)((char*)p + 0x12); }
int fn_801251B4(void) { return 0; }
void fn_80125238(void* p) { fn_80120BBC(p, (void*)49); fn_8011E87C(p, (void*)0); fn_8011E87C(p, (void*)1); fn_8011E87C(p, (void*)2); }
void fn_8012528C(void* p) { fn_8011E618(p); fn_8011E618(p); }

}
