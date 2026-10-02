#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 spawn_particle_effect_with_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_testFlags30(void * a0 = 0, s32 a1 = 0);
void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q);

void trigger_switch_attack__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (obj_testFlags30(arg0, 0x02000000) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2E4);
        switch (temp_r0) {
        case 1:
            spawn_particle_effect_with_flags(arg1, 0xF1, 0x40);
            return;
        case 2:
            spawn_particle_effect_with_flags(arg1, 0xF2, 0x40);
            return;
        case 4:
            spawn_particle_effect_with_flags(arg1, 0xE3, 0x40);
            return;
        case 8:
            spawn_particle_effect_with_flags(arg1, 0x10D, 0x40);
            break;
        }
    }
}

}
