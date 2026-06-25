#include "types.h"

extern "C" {

int fn_80154764(void*, void*, void*);
int fn_80154788(void*, void*, void*);
void TOFenceAncient02__vt13(void* p);
void TOFenceAncient02__vt12(void* p);
void TOFenceAncient02__vt14(void);

int fn_80166E64(void) { return 0; }
int fn_80166EA8(void) { return 0; }
void TOFenceAncient02__vt14(void) {  }
void TOFenceAncient02__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; fn_80154764(p, (void*)0, (void*)8); }
void TOFenceAncient02__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; fn_80154788(p, (void*)0, (void*)8); }

}
