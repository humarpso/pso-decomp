#include "types.h"

extern "C" {

int fn_801B565C(void* p);
int fn_801B5680(void* p);
void fn_801B5790(void* p);
void fn_801B57BC(void* p);
int fn_800495E0(void*, int);
int fn_801C0044(void*);
int fn_801C1B38(void*);
int fn_801C1B60(void*);

int fn_801B565C(void* p) { return fn_801C0044(*(void**)((char*)p + 0x380)); }
int fn_801B5680(void* p) { return fn_800495E0(p, 256); }
int fn_801B56A4(void) { return 0; }
int fn_801B56EC(void) { return 0; }
int fn_801B575C(void) { return 0; }
void fn_801B5790(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) fn_801C1B38(m); }
void fn_801B57BC(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) fn_801C1B60(m); }
int fn_801B57E8(void) { return 0; }
int fn_801B5874(void) { return 0; }
int fn_801B58DC(void) { return 0; }
int fn_801B5920(void) { return 0; }
int fn_801B5990(void) { return 0; }
int fn_801B59C4(void) { return 0; }
int fn_801B59F8(void) { return 0; }
int fn_801B5A44(void) { return 0; }
int fn_801B5A88(void) { return 0; }
int fn_801B5AC4(void) { return 0; }
int fn_801B5AF8(void) { return 0; }
int fn_801B5B2C(void) { return 0; }
int fn_801B5B64(void) { return 0; }

}
