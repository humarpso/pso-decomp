#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 obj_testFlags30(void * a0, s32 a1);
s32 TObjPlayer__sub_800868C4(s32, s32, s32, s32, s32);
void spawn_recovery_effect__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

s32 spawn_particle_effect_with_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_testFlags30(void * a0 = 0, s32 a1 = 0);
void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q);

void spawn_recovery_effect__10TObjPlayerFPv(u8 *arg0) {
    if (obj_testFlags30(arg0, 0x02000000) == 0) {
        TObjPlayer__sub_800868C4((s32) (arg0 + 0x2FC), 0x10A, 0, 0xA, 0x40);
    }
}

}
