#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__12TBoss8DragonFii(s32 arg0, s32 arg1);
void spawn_trap__12TBoss8DragonFii(s32 arg0, s32 arg1);
void try_spawn_trap__12TBoss8DragonFPv(void *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022675C(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_802F376C();

void try_spawn_trap__12TBoss8DragonFPv(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 0x40) && (fn_802F376C() != 0)) {
        spawn_trap__12TBoss8DragonFii((s32)(arg0), (s32)(0x4003D013));
    }
}

void spawn_trap__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x634, 0, 0);
}

void spawn_effect__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    fn_8022675C(arg1, arg0 + 0x634, 0, 0);
}

}
