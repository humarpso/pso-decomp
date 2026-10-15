#include "types.h"

extern "C" {

void reset_entries__11TItemWeaponFPv(void *arg0);
void *get_attribute_entry__10TObjPlayerFPvi(s32, s32);
s32 set_model_param__10TObjPlayerFPvs(s32, s32);
s32 set_model_id__10TObjPlayerFPvs(s32, s32);

void reset_entries__11TItemWeaponFPv(void *arg0) {
    s32 var_r30;
    void *temp_r3;

    set_model_id__10TObjPlayerFPvs(*(s32 *)((s8 *)arg0 + 0xF0), 0);
    set_model_param__10TObjPlayerFPvs(*(s32 *)((s8 *)arg0 + 0xF0), 0);
    var_r30 = 0;
    do {
        temp_r3 = get_attribute_entry__10TObjPlayerFPvi(*(s32 *)((s8 *)arg0 + 0xF0), var_r30);
        *(s8 *)((s8 *)temp_r3 + 0) = 0;
        var_r30 += 1;
        *(s8 *)((s8 *)temp_r3 + 1) = 0;
    } while (var_r30 != 3);
}

}
