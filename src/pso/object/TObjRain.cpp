#include "pso/TObjRain.h"

#include "types.h"

struct RecoveredGlobal_80197C84___vt__8TObjRain {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 init_drops__8TObjRainFv(void *);
s32 __ct__7TObjectFP7TObject();
extern RecoveredGlobal_80197C84___vt__8TObjRain __vt__8TObjRain;
extern s32 lbl_805D3420;
u8 *__ct__8TObjRainFv(u8 *arg0, s32 arg1, u32 arg2);
}

extern "C" {

int render__8TObjRainFv(void* p);
int run_task__8TObjRainFv(void* p);
int draw_streaks__8TObjRainFPv(void*);
int update_drops__8TObjRainFPv(void*);

int render__8TObjRainFv(void* p) { return draw_streaks__8TObjRainFPv(p); }
int run_task__8TObjRainFv(void* p) { return update_drops__8TObjRainFPv(p); }
typedef char RecoveredGlobal_80197C84___vt__8TObjRain_size[sizeof(RecoveredGlobal_80197C84___vt__8TObjRain) == 0x18 ? 1 : -1];
TObjRain::~TObjRain() {}
u8 *__ct__8TObjRainFv(u8 *arg0, s32 arg1, u32 arg2) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__8TObjRain.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3420;
    *(u32 *)((s8 *)arg0 + 0x21C) = (arg2 > 0x10U) ? 0x10U : arg2;
    init_drops__8TObjRainFv((void *) (arg0));
    return arg0;
}

}
