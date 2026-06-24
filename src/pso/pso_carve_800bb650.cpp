#include "types.h"

extern "C" {

int fn_800BB774(void* p);
void fn_800BB7D0(void);
void fn_800BB7D4(void);
void fn_800BB7D8(void);
void fn_800BB7DC(void);
int fn_800BB7E0(void* p);
int fn_801B4A18(void*, int);

int fn_800BB650(void) { return 0; }
int fn_800BB664(void) { return 0; }
int fn_800BB688(void) { return 0; }
int fn_800BB740(void) { return 0; }
int fn_800BB774(void* p) { return (*(u32*)((char*)p + 0x2dc) >> 1) & 0x1; }
int fn_800BB780(void) { return 0; }
void fn_800BB7D0(void) {  }
void fn_800BB7D4(void) {  }
void fn_800BB7D8(void) {  }
void fn_800BB7DC(void) {  }
int fn_800BB7E0(void* p) { return fn_801B4A18(p, -1); }

}
