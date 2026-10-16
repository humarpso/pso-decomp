#include "types.h"
#include "pso/items/TItemWeapon.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemWeapon::reset_entries() {
    s32 var_r30;
    void *temp_r3;

    ((TObjPlayer *)(*(s32 *)&this->player))->set_model_id(0);
    ((TObjPlayer *)(*(s32 *)&this->player))->set_model_param(0);
    var_r30 = 0;
    do {
        temp_r3 = ((TObjPlayer *)(*(s32 *)&this->player))->get_attribute_entry(var_r30);
        *(s8 *)((s8 *)temp_r3 + 0) = 0;
        var_r30 += 1;
        *(s8 *)((s8 *)temp_r3 + 1) = 0;
    } while (var_r30 != 3);
}

}
