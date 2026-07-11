#include "types.h"

extern "C" {

void TOFenceAncient04__vt12(void* p);
void TOFenceAncient04__vt13(void* p);
void TOFenceAncient04__vt14(void);

int TObjPlayer__sub_80154764(void*, void*, void*);
int set_indexed_flags(void*, void*, void*);

void TOFenceAncient04__vt14(void) {  }
void TOFenceAncient04__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; { int i; for (i = 0; i < 4; i++) { TObjPlayer__sub_80154764(p, (void*)i, (void*)8); } } }
void TOFenceAncient04__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; { int i; for (i = 0; i < 4; i++) { set_indexed_flags(p, (void*)i, (void*)8); } } }

}
