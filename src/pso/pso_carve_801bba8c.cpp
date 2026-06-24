#include "types.h"

extern "C" {

int fn_801BBB74(void* p);
void fn_801BBC2C(void* p);
int fn_801BBD38(void* p);
int fn_801566CC(void*);
int fn_801B35AC(void*);

int fn_801BBA8C(void) { return 0; }
int fn_801BBB70(void) { return 0; }
int fn_801BBB74(void* p) { return fn_801B35AC(p); }
int fn_801BBB94(void) { return 0; }
int fn_801BBB98(void) { return 0; }
int fn_801BBBD0(void) { return 0; }
void fn_801BBC2C(void* p) { *(s32*)((char*)p + 0x424) = 0; }
int fn_801BBC38(void) { return 0; }
int fn_801BBC64(void) { return 0; }
int fn_801BBC68(void) { return 0; }
int fn_801BBD38(void* p) { return fn_801566CC(p); }

}
