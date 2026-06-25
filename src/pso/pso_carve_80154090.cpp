#include "types.h"

extern "C" {

int fn_801540D8(void* a0 = 0, void* a1 = 0);
int fn_801540FC(void* a0 = 0, void* a1 = 0);
void fn_80154120(void* p);
void fn_8015414C(void* p);
void fn_80154090(void);
void fn_80154094(void);

void fn_80154090(void) {  }
void fn_80154094(void) {  }
int fn_80154098(void) { return 0; }
int fn_801540B8(void) { return 0; }
int fn_801540D8(void*, void*) { return 0; }
int fn_801540FC(void*, void*) { return 0; }
void fn_80154120(void* p) { fn_801540D8(*(void**)((char*)p + 0xa4), *(void**)((char*)p + 0xa8)); }
void fn_8015414C(void* p) { fn_801540FC(*(void**)((char*)p + 0xa4), *(void**)((char*)p + 0xa8)); }
int fn_80154178(void) { return 0; }
int fn_801541D8(void) { return 0; }
int fn_80154230(void) { return 0; }
int fn_80154288(void) { return 0; }

}
