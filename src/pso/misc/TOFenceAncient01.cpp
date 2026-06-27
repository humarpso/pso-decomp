#include "types.h"

extern "C" {

void TOFenceAncient01__vt12(void* p);
void TOFenceAncient01__vt13(void* p);
void TOFenceAncient01__vt14(void);
void fn_80166AF4(void);
void fn_80166AF8(void);
void fn_80166AFC(void);

int fn_80154764(void*, void*, void*);
int fn_80154788(void*, void*, void*);

void fn_80166AF4(void) {  }
void fn_80166AF8(void) {  }
void fn_80166AFC(void) {  }
void TOFenceAncient01__vt14(void) {  }
void TOFenceAncient01__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; fn_80154764(p, (void*)0, (void*)8); }
void TOFenceAncient01__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; fn_80154788(p, (void*)0, (void*)8); }

}
