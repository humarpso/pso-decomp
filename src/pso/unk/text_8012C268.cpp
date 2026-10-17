#include "types.h"
#include "pso/unk/text_80120D50.h"
#include "pso/unk/text_8012C268.h"
#include "pso/items/TItemWeaponRifle.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void spawn_weapon_impact_effect();
extern u32 lbl_804A5248[];
extern const f32 lbl_805DAEE0;
}

TItemWeaponRifle* TItemWeaponRifle::initialize(s32 parent,u8* item) {
    TItemWeaponRifle* self=this;
    TItemWeapon__ct((TItemWeapon *)((u8 *)self), (void *)parent, item);
    self->dispatch=lbl_804A5248;
    self->impactFactory=spawn_weapon_impact_effect;
    self->phase=lbl_805DAEE0;
    if(item[2]>=5U)((TObjPlayer *)self)->set_atp(-1);
    return self;
}

extern "C" {

u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_rifle_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((TItemWeaponRifle*)temp_r3)->initialize(tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
