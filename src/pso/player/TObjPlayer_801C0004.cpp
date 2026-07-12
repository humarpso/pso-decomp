#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801BFFA0(void* p);
s16 TObjPlayer__sub_801C0004(void* p);
int TObjPlayer__sub_801C000C(void);
int TObjPlayer__sub_801C0014(void);
int TObjPlayer__sub_801C001C(void);
int TObjPlayer__sub_801C0024(void* p);
int TObjPlayer__sub_801C0044(void* p);
int fn_802A7290(void*);
int fn_802A72D4(void*);

s16 TObjPlayer__sub_801C0004(void* p) { return *(s16*)((char*)p + 0xb8); }
int TObjPlayer__sub_801C000C(void) { return 0; }
int TObjPlayer__sub_801C0014(void) { return 0; }
int TObjPlayer__sub_801C001C(void) { return 0; }
int TObjPlayer__sub_801C0024(void* p) { return fn_802A7290(p); }
int TObjPlayer__sub_801C0044(void* p) { return fn_802A72D4(p); }

}
