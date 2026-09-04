#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_indexed_entry__10TObjPlayerFPv(void *arg0);
void init_particle_effect__10TObjPlayerFv(void);
void reset_effects__10TObjPlayerFv(void);
int TObjPlayer__sub_803078B0(void);
M2C_UNK TObjPlayer__sub_8033EAF0(s32);
int TObjPlayer__sub_803DC83C(void*);
int TObjPlayer__sub_803DC850(void*);
int TObjPlayer__sub_803E1D90(int, int, int, int);
int set_global_effect_state__10TObjPlayerFi(void*);
int set_global_param__8TObjFishFi(void);

void init_particle_effect__10TObjPlayerFv(void) { TObjPlayer__sub_803078B0(); set_global_param__8TObjFishFi(); TObjPlayer__sub_803E1D90(0, 0, 0, 2); }

    extern int some_id_805c6f74;
void reset_effects__10TObjPlayerFv(void) { TObjPlayer__sub_803DC850((void*)0); TObjPlayer__sub_803DC83C((void*)0); set_global_effect_state__10TObjPlayerFi((void*)0); some_id_805c6f74 = (some_id_805c6f74 & 0xfff7ffff); }

void free_indexed_entry__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 < 0x10) {
        TObjPlayer__sub_8033EAF0(M2C_FIELD(arg0, s32 *, 0x1C) + (temp_r0 * 0x24));
    }
}

}
