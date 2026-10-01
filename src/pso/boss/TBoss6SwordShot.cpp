#include "pso/TBoss6SwordShot.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFPv();
M2C_UNK fn_803561C4(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFPv();
M2C_UNK fn_803561C4(void *);
}

extern "C" {

void run_task__15TBoss6SwordShotFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        fn_803561C4((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 7) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
TBoss6SwordShot::~TBoss6SwordShot() {}

}
