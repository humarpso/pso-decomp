#include "types.h"

extern "C" {

void activate_warp__14TBoss6PlotFalzFPv(void* p);
void free_child__14TBoss6PlotFalzFPv(void* p);
s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0);
void reset_state__14TBoss6PlotFalzFPv(void* p);
void set_state_2__14TBoss6PlotFalzFPv(void* p);
int TBoss6EmptyWarp__sub_802B1004(void*);
int activate_warp__15TBoss6EmptyWarpFPv(void*);
s32 get_field_3e0__12TBoss3VoloptFPv();

s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0) {
    if ((arg0 == 0U) || (get_field_3e0__12TBoss3VoloptFPv() != 0x1F)) {
        return 0;
    }
    return 1;
}

void set_state_2__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 2; }
void reset_state__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 0; }
void activate_warp__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) activate_warp__15TBoss6EmptyWarpFPv(m); }
void free_child__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) TBoss6EmptyWarp__sub_802B1004(m); }

}
