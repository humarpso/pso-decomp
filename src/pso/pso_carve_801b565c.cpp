#include "types.h"

extern "C" {

int fn_8011E204(void*, void*);
int fn_8011E238(void*, void*);
int fn_8019DD14(void*, void*);
int fn_8019DD24(void*, void*);
int fn_801B3BB4(void*);
int fn_801B3BFC(void*, void*);
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
void fn_801B56A4(void* p) { fn_8019DD24((char*)p + 0x550, (void*)1030); fn_801B3BB4(p); fn_8011E204(p, (void*)256); }
void fn_801B56EC(void* p) { fn_8019DD14((char*)p + 0x550, (void*)1030); fn_801B3BFC(p, (void*)0); fn_801B3BFC(p, (void*)1); fn_801B3BFC(p, (void*)2); fn_801B3BFC(p, (void*)3); fn_8011E238(p, (void*)256); }
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
