#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK transition_enemy_state(void *, int);
void TObjEneMe1Gee__vt103(u8 *arg0);
}

extern "C" {

int enemy_has_live_target(void*);
int TObjEneEpsilon__sub_800B96A4(void*);
int update_velocity__9TObjEneDDFPv(void*);
int update_angle__13TObjEneMe1GeeFPv(void*);
void update__13TObjEneMe1GeeFPv(void* p);
int TObjEneMe1Gee__vt87(void* p);
int TObjEneDD__vt86(void*);

void TObjEneMe1Gee__vt103(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x100) {
        transition_enemy_state((void *)(arg0), (int) (8));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x430) < 2) {
            transition_enemy_state((void *)(arg0), (int) (7));
            M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) + 1);
            return;
        }
        transition_enemy_state((void *)(arg0), (int) (8));
        M2C_FIELD(arg0, s32 *, 0x430) = 0;
        return;
    }
    transition_enemy_state((void *)(arg0), (int) (7));
}

}
