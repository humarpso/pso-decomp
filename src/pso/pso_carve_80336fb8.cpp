#include "types.h"

extern "C" {

int fn_8032E7B4(void*, void*);
void fn_80336FB8(void* p);
void fn_80337108(void);
void fn_80337160(void);
void fn_803371B4(void* p);

void fn_80336FB8(void* p) { *(int*)((char*)p + 0x3cc) = 0; fn_8032E7B4(p, (void*)0); }
int fn_80336FE4(void) { return 0; }
int fn_80337054(void) { return 0; }
int fn_803370A4(void) { return 0; }
void fn_80337108(void) {  }
int fn_8033710C(void) { return 0; }
void fn_80337160(void) {  }
int fn_80337164(void) { return 0; }
void fn_803371B4(void* p) { *(s32*)((char*)p + 0x3cc) = 0; }

}
