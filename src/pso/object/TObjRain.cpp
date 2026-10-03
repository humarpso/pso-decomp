#include "pso/TObjRain.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80197C84___vt__8TObjRain {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK TOBoss4Rock__sub_80197998(void *);
M2C_UNK __ct__7TObjectFP7TObject();
extern RecoveredGlobal_80197C84___vt__8TObjRain __vt__8TObjRain;
extern s32 lbl_805D3420;
u8 *__ct__8TObjRainFv(u8 *arg0, M2C_UNK arg1, u32 arg2);
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
u8 *__ct__8TObjRainFv(u8 *arg0, M2C_UNK arg1, u32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TObjRain.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3420;
    M2C_FIELD(arg0, u32 *, 0x21C) = (arg2 > 0x10U) ? 0x10U : arg2;
    TOBoss4Rock__sub_80197998((void *) (arg0));
    return arg0;
}

}
