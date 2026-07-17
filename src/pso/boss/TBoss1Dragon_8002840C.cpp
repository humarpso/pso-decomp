#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void save_target_pos__12TBoss1DragonFPv(void* p);
void set_move_speed__12TBoss1DragonFPvi(void *arg0, s32 arg1);

void save_target_pos__12TBoss1DragonFPv(void* p) { *(f32*)((char*)p + 0x690) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x694) = *(f32*)((char*)p + 0x40); }

extern M2C_UNK TBoss1Dragon__data_80435380;
extern const f32 TBoss1Dragon__data_805D7F28;

void set_move_speed__12TBoss1DragonFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x690) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x694) = (f32) TBoss1Dragon__data_805D7F28;
}

}
