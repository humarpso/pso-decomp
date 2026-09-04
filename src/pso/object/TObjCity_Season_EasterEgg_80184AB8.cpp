#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

    extern int lbl_8050DC38[];
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0) {  return lbl_8050DC38[*(int*)((char*)a0 + 0xac)]; }

extern M2C_UNK lbl_804B5E48[];

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        u32 var_r0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5E48;
        var_r0 = (u32) M2C_FIELD(arg0, u32 *, 0xA4);
        if (var_r0 != 0U) {
            TObjPlayer__sub_80154A00(arg0);
            TObjEneGibbles__sub_80156720(arg0);
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
