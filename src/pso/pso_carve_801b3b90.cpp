#include "types.h"

extern "C" {

int fn_801B3B90(void* p);
int fn_801B3BB4(void* p);
int fn_801B3BD8(void* p);
int fn_801B3BFC(void* p);
int fn_801BF460(void*);
int fn_801BF47C(void*);
int fn_801BF488(void*);
int fn_801BF4A0(void*);

int fn_801B3B90(void* p) { return fn_801BF460((char*)p + 0x340); }
int fn_801B3BB4(void* p) { return fn_801BF47C((char*)p + 0x340); }
int fn_801B3BD8(void* p) { return fn_801BF488((char*)p + 0x340); }
int fn_801B3BFC(void* p) { return fn_801BF4A0((char*)p + 0x340); }

}
