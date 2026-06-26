#include "types.h"

extern "C" {

int fn_80348520(void* a0 = 0);
void TWindowDD__sub_8034849C(void* p);
int fn_80348424(void);
int fn_80348448(void);
int fn_8034B008(void*);

int fn_80348398(void) { return 0; }
int fn_80348424(void) { return fn_8034B008((void*)(1)); }
int fn_80348448(void) { return fn_8034B008((void*)(0)); }
int fn_80348470(void) { return 0; }
void TWindowDD__sub_8034849C(void* p) { *(int*)((char*)p + 0xa8) = 3; fn_80348520(p); }
int fn_803484C4(void) { return 0; }
int fn_80348520(void*) { return 0; }
int fn_803485F4(void) { return 0; }

}
