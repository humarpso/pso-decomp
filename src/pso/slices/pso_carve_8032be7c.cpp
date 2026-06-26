#include "types.h"

extern "C" {

int fn_80244A14(void*);
void TAdSnAkPassConfirmGC__vt7(void* p);
void TAdSnAkPassConfirmGC__vt6(void* p);
int fn_80132F2C(void*, void*);
int TAdSnAkPassConfirmGC__vt5(void* p);
int TAdSnAkPassConfirmGC__vt4(void* p);
int fn_8023E944(void*);
int fn_8023EA64(void*);

void TAdSnAkPassConfirmGC__vt8(void) { fn_80132F2C((void*)39, (void*)0); }
void TAdSnAkPassConfirmGC__vt7(void* p) { if (*(unsigned int*)((char*)p + 0x48) != 0) { fn_80244A14(*(void**)((char*)p + 0x48)); *(int*)((char*)p + 0x48) = 0; } }
void TAdSnAkPassConfirmGC__vt6(void* p) { if (*(unsigned int*)((char*)p + 0x48) != 0) { fn_80244A14(*(void**)((char*)p + 0x48)); *(int*)((char*)p + 0x48) = 0; } }
int TAdSnAkPassConfirmGC__vt5(void* p) { return fn_8023EA64(p); }
int TAdSnAkPassConfirmGC__vt4(void* p) { return fn_8023E944(p); }

}
