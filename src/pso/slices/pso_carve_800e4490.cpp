#include "types.h"

extern "C" {

int fn_800E3B6C(void);
int fn_800E4554(void* a0 = 0, void* a1 = 0);
void fn_800E4490(void* p);
int TObjEneMe3Shinowa__vt60(void*);
int fn_800E76F0(void*);
int TObjEneMe3ShinowaReal__sub_800E45D4(void* a0 = 0);
void TObjEneMe3ShinowaReal__vt109(void* p);
void TObjEneMe3ShinowaReal__vt60(void* p);
void TObjEneMe3ShinowaReal__vt61(void* p);
u16 fn_800E45CC(void* p);

void fn_800E4490(void* p) { { int i; for (i = 0; i < 4; i++) { fn_800E4554(p, (void*)i); fn_800E3B6C(); } } }
void TObjEneMe3ShinowaReal__vt109(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4(p); }
int TObjEneMe3ShinowaReal__vt105(void) { return 0; }
int fn_800E4554(void*, void*) { return 0; }
u16 fn_800E45CC(void* p) { return *(u16*)((char*)p + 0x38c); }
int TObjEneMe3ShinowaReal__sub_800E45D4(void*) { return 0; }
void TObjEneMe3ShinowaReal__vt60(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4(p); TObjEneMe3Shinowa__vt60(p); }
void TObjEneMe3ShinowaReal__vt61(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4(p); fn_800E76F0(p); }

}
