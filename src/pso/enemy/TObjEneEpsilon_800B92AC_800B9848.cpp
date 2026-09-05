#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void fn_800B98A4(u8 *arg0, s32 arg1);
}

extern "C" {

int TBoss2DeRolLe__sub_800B98D8(void);
int TBoss8Dragon__sub_800B9958(void);
int TObjEneEpsilon__sub_800B9848(void);
int TObjEneEpsilon__vt101(void* p);
int fn_800B98C0(void);
int spawn_part__14TObjEneEpsilonFi(void*);

int TObjEneEpsilon__sub_800B9848(void) { return 0; }

int TObjEneEpsilon__vt101(void* p) { return spawn_part__14TObjEneEpsilonFi(p); }

void fn_800B98A4(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) % arg1);
    M2C_FIELD(arg0, s32 *, 0x3B4) = arg1;
}

int fn_800B98C0(void) { return 0; }
int TBoss2DeRolLe__sub_800B98D8(void) { return 0; }
int TBoss8Dragon__sub_800B9958(void) { return 0; }

}
