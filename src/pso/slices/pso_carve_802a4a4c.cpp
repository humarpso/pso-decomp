#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
int queue_destruction__7TObjectFv(void*);

int TNeedleShoot__sub_802A4A4C(void) { return 0; }

}

}
