#include "types.h"

extern "C" {

int fn_80121200(void*);
int fn_803D96A8(void*, void*);
void fn_8012EBB0(void* p);
int fn_8011E618(void*);
int fn_8012EB24(void* p);
int fn_8012EB50(void* p);
int fn_80115BC0(void*, int, int);

int fn_8012EAA8(void) { return 0; }
int fn_8012EB24(void* p) { return fn_80115BC0((char*)p + 0x1f8, 1820, 10922); }
int fn_8012EB50(void* p) { return fn_80115BC0((char*)p + 0x1f8, -1820, 0); }
void fn_8012EB7C(void* p) { fn_8011E618(p); fn_8011E618(p); }
void fn_8012EBB0(void* p) { if (fn_80121200(p) == 1) { fn_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
