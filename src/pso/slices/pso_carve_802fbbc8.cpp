#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TBoss8Dragon__sub_802FBBC8(u8 *arg0, s32 *arg1);
}

extern "C" {

void save_position__12TBoss8DragonFPv(void* p);
void restore_target_pos__12TBoss8DragonFPv(void* p);
void sync_target_pos__12TBoss8DragonFPv(void* p);

void TBoss8Dragon__sub_802FBBC8(u8 *arg0, s32 *arg1) {
    *arg1 = (s32) M2C_FIELD(arg0, f32 *, 0x690);
}

}
