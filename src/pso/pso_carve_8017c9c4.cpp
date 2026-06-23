#include "types.h"

extern "C" {

int fn_8017C9C4(void);
int fn_8017C9CC(void);
int fn_8017C9D4(void);
int fn_8017C9DC(void);
int fn_8017C9E4(void* p);
int fn_8017CA04(void* p);
int fn_8017CA24(void* p);
void fn_8017CA48(void* p, s32 v);
s32 fn_8017CA50(void* p);
int fn_8017BD48(void*);

int fn_8017C9C4(void) { return 1; }
int fn_8017C9CC(void) { return 1; }
int fn_8017C9D4(void) { return 1; }
int fn_8017C9DC(void) { return 1; }
int fn_8017C9E4(void* p) { return fn_8017BD48(p); }
int fn_8017CA04(void* p) { return fn_8017BD48(p); }
int fn_8017CA24(void* p) { return fn_8017BD48(p); }
int fn_8017CA44(void) { return 0; }
void fn_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 fn_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
int fn_8017CA58(void) { return 0; }
int fn_8017CA94(void) { return 0; }
int fn_8017CAC8(void) { return 0; }

}
