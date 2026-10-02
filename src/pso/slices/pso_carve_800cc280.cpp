#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int transition_enemy_state(void*, void*);
void TObjEneMe1Gee__vt61(u8 *arg0);
}

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneMe1Gee__vt60(void* p);
void TObjEneMe1Gee__vt59(void);
void TObjEneMe1Gee__vt26(void);

void TObjEneMe1Gee__vt61(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xE) && (temp_r0 != 0xC)) {
        transition_enemy_state((void*)((void *)(arg0)), (void*)((int) (0xE)));
    }
}

}
