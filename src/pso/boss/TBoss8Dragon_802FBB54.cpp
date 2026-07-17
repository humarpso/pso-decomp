#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_pos_to_field688__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvi(u8 *arg0, s32 arg1);

void copy_pos_to_field688__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x688) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x68c) = *(f32*)((char*)p + 0x40); }

extern M2C_UNK TBoss8Dragon__data_80474B10;
extern const f32 TBoss8Dragon__data_805DED50;

void set_speed__12TBoss8DragonFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x688) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x68C) = (f32) TBoss8Dragon__data_805DED50;
}

}
