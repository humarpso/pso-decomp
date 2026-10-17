#include "types.h"
#include "pso/unk/text_80126740.h"
#include "pso/item/TItemProUnit.h"

extern "C" {
extern const f32 lbl_805DAD80;
u8 * baranz_launcher_ct(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;

u8 *create_baranz_launcher(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(baranz_launcher_ct(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void fist_reset_attack_rate(u8 *arg0) {
    ((TItemProUnit *)(*(s32 *)((s8 *)arg0 + 0xF0) + 0x7CC))->set_evp(lbl_805DAD80);
}

}
