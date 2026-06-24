#include "types.h"

extern "C" {

void fn_8030A650(void* p, s16 v);
u16 fn_8030A698(void* p);
int TPlyFollowParticleCtrl__vt7(void);

void fn_8030A650(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int fn_8030A658(void) { return 0; }
int fn_8030A694(void) { return 0; }
u16 fn_8030A698(void* p) { return *(u16*)((char*)p + 0xac); }
int TPlyFollowParticleCtrl__vt7(void) { return 0; }

}
