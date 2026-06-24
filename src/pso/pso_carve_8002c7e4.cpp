#include "types.h"

extern "C" {

s32 fn_8002C7E4(void* p);
void fn_8002C838(void);
int fn_8002C868(void* p);
void fn_8002C888(void);
int fn_8002C140(void);
int fn_8002C190(void);
int fn_8002C7B4(void);
int fn_8002C7B8(void);
int fn_8002CB40(void);
int fn_8002CB44(void*);
int fn_8002CB78(void);
int fn_8002D580(void);
int fn_8002D5F8(void);
int fn_8002E3CC(void);
int fn_8002E3D0(void);

s32 fn_8002C7E4(void* p) { return *(s32*)((char*)p + 0x8); }
int fn_8002C7EC(void) { return 0; }
void fn_8002C838(void) { fn_8002D580(); fn_8002E3CC(); fn_8002C7B4(); fn_8002CB40(); fn_8002C140(); }
int fn_8002C868(void* p) { return fn_8002CB44(p); }
void fn_8002C888(void) { fn_8002C190(); fn_8002CB78(); fn_8002C7B8(); fn_8002E3D0(); fn_8002D5F8(); }

}
