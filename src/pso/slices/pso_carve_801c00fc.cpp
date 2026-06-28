#include "types.h"

extern "C" {

int fn_801C00FC(void);
int fn_801C0104(void);
void fn_801C011C(void* p, s16 v);
int fn_801C0134(void);

int fn_801C00FC(void) { return 0; }
int fn_801C0104(void) { return 0; }
int fn_801C010C(void) { return 0; }
void fn_801C011C(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
int fn_801C0124(void) { return 0; }
int fn_801C0134(void) { return 255; }

}
