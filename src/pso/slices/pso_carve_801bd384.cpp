#include "types.h"

extern "C" {

int fn_8007206C(void*);
int fn_800FE73C(void*);
int fn_8028DF40(void*);
void fn_801BD384(void* p);
void fn_801BD3DC(void* p);
int fn_8028DEA0(void*);
int fn_8036DC80(void*);
void fn_801BD3A4(void);

void fn_801BD384(void* p) { fn_801BD3DC(p); }
void fn_801BD3A4(void) {  }
void fn_801BD3A8(void* p) { fn_8036DC80(p); fn_8028DEA0(p); }
void fn_801BD3DC(void* p) { fn_8007206C((char*)p + 0x85c); *(int*)((char*)p + 0xcfc) = 255; fn_8028DF40(p); fn_800FE73C(p); }

}
