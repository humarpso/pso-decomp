#include "types.h"
#include "pso/items/TItemWeaponRifle.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
TItemWeaponRifle* TObjPlayer__sub_80120D50(TItemWeaponRifle*,s32,u8*);
void set_atp__10TObjPlayerFPvs(void*,s16);
void TObjPlayer__sub_80109440();
extern u32 lbl_804A5248[];
extern const f32 lbl_805DAEE0;
}

TItemWeaponRifle* TItemWeaponRifle::initialize(s32 parent,u8* item) {
    TItemWeaponRifle* self=this;
    TObjPlayer__sub_80120D50(self,parent,item);
    self->dispatch=lbl_804A5248;
    self->impactFactory=TObjPlayer__sub_80109440;
    self->phase=lbl_805DAEE0;
    if(item[2]>=5U)set_atp__10TObjPlayerFPvs(self,-1);
    return self;
}

extern "C" {

u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8012C2D4(u8 *arg0);
}

extern "C" {

u8 *TObjPlayer__sub_8012C2D4(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((TItemWeaponRifle*)temp_r3)->initialize(tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
