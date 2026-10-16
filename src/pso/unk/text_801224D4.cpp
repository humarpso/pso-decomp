#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_801224D4_lbl_804A0FA0 {
    s32 value;
    u8 remaining[0xF4];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_dagger_weapon(u8 *arg0);
u8 * TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFUl(void *, s32);
extern RecoveredGlobal_801224D4_lbl_804A0FA0 lbl_804A0FA0;
extern const f32 lbl_805DACE0;
u8 *construct_dagger_weapon(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

typedef char RecoveredGlobal_801224D4_lbl_804A0FA0_size[sizeof(RecoveredGlobal_801224D4_lbl_804A0FA0) == 0xF8 ? 1 : -1];
u8 *construct_dagger_weapon(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 temp_r0;
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804A0FA0.value;
    set_status_flags__10TObjPlayerFUl(arg0, 0x600);
    *(f32 *)((s8 *)arg0 + 0x1F8) = (f32) lbl_805DACE0;
    temp_r0 = *(u8 *)((s8 *)arg2 + 2);
    if ((temp_r0 >= 5U) && (temp_r0 != 7)) {
        ((TObjPlayer *)arg0)->set_atp(-1);
    }
    return arg0;
}

u8 *create_dagger_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_dagger_weapon((u8 *)(temp_r3), (u8 *)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
