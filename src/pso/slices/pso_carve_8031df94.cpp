#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int transition_enemy_state(void*, void*);
void TObjEneRecon__vt61(u8 *arg0);
}

extern "C" {

s32 TObjEneEpsilon__sub_800B96A4();
int transition_enemy_state(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

void TObjEneRecon__vt61(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 7) && (temp_r0 != 8)) {
        transition_enemy_state((void*)((void *)(arg0)), (void*)((int) (7)));
    }
}

}
