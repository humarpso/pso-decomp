#include "types.h"

extern "C" {

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
int fn_8030CC6C(void) { return 0; }
void fn_8030CCA8(void* p) { fn_8020051C(p); fn_801FDAAC(); *(int*)((char*)p + 0x24) = 16; }
void fn_8030CCE0(void) {  }

}
