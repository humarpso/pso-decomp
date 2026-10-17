#include "types.h"
#include "pso/unk/text_801301D0.h"
#include "pso/item/TUnk_804A68C8.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_801301D0_lbl_804A68C8 {
    s32 value;
    u8 remaining[0xF4];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 * TItemWeapon__ct(void *, void *);
extern RecoveredGlobal_801301D0_lbl_804A68C8 lbl_804A68C8;
extern const f32 lbl_805DAFFC;

typedef char RecoveredGlobal_801301D0_lbl_804A68C8_size[sizeof(RecoveredGlobal_801301D0_lbl_804A68C8) == 0xF8 ? 1 : -1];
u8 *construct_cane_weapon(u8 *arg0, u8 *arg1, u8 *arg2) {
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804A68C8.value;
    *(f32 *)((s8 *)arg0 + 0x1F8) = (f32) lbl_805DAFFC;
    ((TUnk_804A68C8 *)arg0)->m_1fc = 0;
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 4U) {
        ((TObjPlayer *)arg0)->set_atp(-1);
    }
    return arg0;
}

u8 *create_cane_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_cane_weapon((u8 *)temp_r3, (u8 *)tl_05, (u8 *)arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
