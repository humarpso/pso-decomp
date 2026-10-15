#include "types.h"
#include "pso/items/TItemWeapon.h"

extern "C" {

void *get_attribute_entry__10TObjPlayerFl(s32, s32);
s32 set_model_param__10TObjPlayerFs(s32, s32);
s32 set_model_id__10TObjPlayerFs(s32, s32);

void TItemWeapon::reset_entries() {
    s32 var_r30;
    void *temp_r3;

    set_model_id__10TObjPlayerFs(*(s32 *)((s8 *)this + 0xF0), 0);
    set_model_param__10TObjPlayerFs(*(s32 *)((s8 *)this + 0xF0), 0);
    var_r30 = 0;
    do {
        temp_r3 = get_attribute_entry__10TObjPlayerFl(*(s32 *)((s8 *)this + 0xF0), var_r30);
        *(s8 *)((s8 *)temp_r3 + 0) = 0;
        var_r30 += 1;
        *(s8 *)((s8 *)temp_r3 + 1) = 0;
    } while (var_r30 != 3);
}

}
