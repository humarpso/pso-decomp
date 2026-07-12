#include "types.h"

extern "C" {

void TObjLiveMonitor__sub_8030B7BC(void* p);
void fn_8030B7B4(void);
void fn_8030B7B8(void);
int fn_8030B7E8(void);
int TCameraCtrl__sub_80083058(void*);
int TBoss8Dragon__sub_802F3388(void*);

void fn_8030B7B4(void) {  }
void fn_8030B7B8(void) {  }
void TObjLiveMonitor__sub_8030B7BC(void* p) { void* m = *(void**)((char*)p + 0x50); if (m) TCameraCtrl__sub_80083058(m); }
int fn_8030B7E8(void) { return TBoss8Dragon__sub_802F3388((void*)(0)); }

}
