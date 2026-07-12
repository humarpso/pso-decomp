#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int queue_destruction__7TObjectFv(void*);

int TNeedleShoot__vt4(void* p) { return queue_destruction__7TObjectFv(p); }
int queue_destruction__12TNeedleShootFPv(void* p) { return queue_destruction__7TObjectFv(p); }
void TNeedleShoot__vt7(void) {  }

}
