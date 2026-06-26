#include "types.h"

extern "C" {

void fn_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void fn_801BBC2C(void* p);
void TObjPlayer__sub_801BBC38(void* p);
void TObjPlayer__sub_801BBC64(void);
int fn_801BBD38(void* p);
int fn_8013DAB0(void*);
int fn_801566CC(void*);
int fn_801B35AC(void*);

int fn_801BBA8C(void) { return 0; }
void fn_801BBB70(void) {  }
int TObjPlayer__sub_801BBB74(void* p) { return fn_801B35AC(p); }
void TObjPlayer__sub_801BBB94(void) {  }
int fn_801BBB98(void) { return 0; }
int fn_801BBBD0(void) { return 0; }
void fn_801BBC2C(void* p) { *(s32*)((char*)p + 0x424) = 0; }
void TObjPlayer__sub_801BBC38(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) fn_8013DAB0(m); }
void TObjPlayer__sub_801BBC64(void) {  }
int fn_801BBC68(void) { return 0; }
int fn_801BBD38(void* p) { return fn_801566CC(p); }

}
