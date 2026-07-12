#include "types.h"

extern "C" {

void set_state_2__14TBoss6PlotFalzFPv(void* p);
void reset_state__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802AB260(void* p);
void free_child__14TBoss6PlotFalzFPv(void* p);
int activate_warp__15TBoss6EmptyWarpFPv(void*);
int TBoss6EmptyWarp__sub_802B1004(void*);

void set_state_2__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 2; }
void reset_state__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 0; }
void TBoss6PlotFalz__sub_802AB260(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) activate_warp__15TBoss6EmptyWarpFPv(m); }
void free_child__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) TBoss6EmptyWarp__sub_802B1004(m); }

}
