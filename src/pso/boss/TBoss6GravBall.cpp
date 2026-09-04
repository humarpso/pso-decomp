#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss6GravBall__sub_80323348(void);
void update_lifetime__14TBoss6GravBallFPv(void *arg0);
int TBoss6GravBall__sub_803231D0(void*, void*);
void init_parts__14TBoss6GravBallFPv(void* p);
M2C_UNK queue_destruction__7TObjectFv();
void render__14TBoss6GravBallFv(void);

int TBoss6GravBall__sub_80323348(void) { return 0; }

void update_lifetime__14TBoss6GravBallFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4) + 1;
    M2C_FIELD(arg0, s32 *, 0xB4) = temp_r0;
    if (temp_r0 > 0x1E) {
        queue_destruction__7TObjectFv();
    }
}

}
