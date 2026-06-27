#include "types.h"

extern "C" {

int TAdPlayerLoadGC__sub_80076BBC(void*);
void fn_8030CC6C(void* p);
int fn_801FDAAC(void);
int fn_8020051C(void*);
void fn_8030CC34(void* p);
void fn_8030CCA8(void* p);
void fn_8030CBD0(void);
void fn_8030CBD4(void);
void fn_8030CCE0(void);

void fn_8030CBD0(void) {  }
void fn_8030CBD4(void) {  }
int fn_8030CBD8(void) { return 0; }
void fn_8030CC34(void* p) { fn_8020051C(p); fn_801FDAAC(); *(int*)((char*)p + 0x24) = 18; }
void fn_8030CC6C(void* p) { if (TAdPlayerLoadGC__sub_80076BBC(p) == 0) { *(int*)((char*)p + 0x24) = 1; } }
void fn_8030CCA8(void* p) { fn_8020051C(p); fn_801FDAAC(); *(int*)((char*)p + 0x24) = 16; }
void fn_8030CCE0(void) {  }

}
