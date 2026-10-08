#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_effect__13TItemEffEquipFPv(void *arg0);
M2C_UNK spawn_equip_particle_effect(void *, s32);
M2C_UNK request_destroy__11TBoss4Type2FUi(s32);

void release_effect__13TItemEffEquipFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) != -1)) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, s32 *, 0x20));
        spawn_equip_particle_effect(arg0, M2C_FIELD(arg0, s32 *, 0x24));
    }
}

}
