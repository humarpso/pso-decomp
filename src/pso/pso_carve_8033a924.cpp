#include "types.h"

extern "C" {

int fn_8007EBB4(void*);
int memset(void*, void*, void*);
void fn_8033A928(void* p);
void fn_8033A96C(void* p);
void fn_8033A924(void);

void fn_8033A924(void) {  }
void fn_8033A928(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { fn_8007EBB4(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; *(int*)((char*)p + 0x1c) = 0; } }
void fn_8033A96C(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { memset(*(void**)((char*)p + 0x20), (void*)0, *(void**)((char*)p + 0x1c)); } }
int fn_8033A9A4(void) { return 0; }

}
