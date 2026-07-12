#include "types.h"

extern "C" {

void update_camera__15TObjLiveMonitorFPv(void* p);
void fn_8030B7B4(void);
void fn_8030B7B8(void);
int call_null__12TBoss8DragonFv(void);
int TCameraCtrl__sub_80083058(void*);
int TBoss8Dragon__sub_802F3388(void*);

void fn_8030B7B4(void) {  }
void fn_8030B7B8(void) {  }
void update_camera__15TObjLiveMonitorFPv(void* p) { void* m = *(void**)((char*)p + 0x50); if (m) TCameraCtrl__sub_80083058(m); }
int call_null__12TBoss8DragonFv(void) { return TBoss8Dragon__sub_802F3388((void*)(0)); }

}
