#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8002B094(void *);
s32 TOBoss4Rock__sub_80147AA8(s32);
s32 __dl__FPv(u32 *);
s32 free__11TOBoss4RockFUi(u32);
int queue_destruction__12TObjGrassWebFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__12TObjGrassWebFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
