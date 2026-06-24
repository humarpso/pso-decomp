#include "types.h"

extern "C" {

int TOAttackableCol__vt24(void);
int TOAttackableCol__vt25(void);
int TOAttackableCol__vt18(void);
int TOAttackableCol__vt19(void);
int TOAttackableCol__vt20(void* p);
int TOAttackableCol__vt21(void* p);
int TOAttackableCol__vt22(void* p);
void fn_80157C20(void* p, s32 v);
s32 fn_80157C28(void* p);
int fn_80157728(void*);

int TOAttackableCol__vt24(void) { return 1; }
int TOAttackableCol__vt25(void) { return 1; }
int TOAttackableCol__vt18(void) { return 1; }
int TOAttackableCol__vt19(void) { return 1; }
int TOAttackableCol__vt20(void* p) { return fn_80157728(p); }
int TOAttackableCol__vt21(void* p) { return fn_80157728(p); }
int TOAttackableCol__vt22(void* p) { return fn_80157728(p); }
int fn_80157C1C(void) { return 0; }
void fn_80157C20(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 fn_80157C28(void* p) { return *(s32*)((char*)p + 0x33c); }
int fn_80157C30(void) { return 0; }
int fn_80157C74(void) { return 0; }
int fn_80157CA8(void) { return 0; }
int fn_80157CF4(void) { return 0; }
int fn_80157D24(void) { return 0; }

}
