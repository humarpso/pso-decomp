#include "types.h"
#include "pso/player/TUnk_804A63F0.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TTecBarta.h"

extern "C" {

s32 get_attack_stage__11TItemWeaponFv();

extern s32 tl_05;

void TUnk_804A63F0::emit_marker_effects() {
    u8 *arg0 = (u8 *)this;
    s32 sp8;
    u8 *temp_r3;

    if (get_attack_stage__11TItemWeaponFv() == 0) {
        ((TObjPlayer *)tl_05)->spawn_cane_effects((TItem*)arg0, (s32)((int) (3)), (s32)((int) (2)));
    }
    ((TObjPlayer *)arg0)->draw_icon((s32)((int) (0)), (s32)((void *) (&sp8)));
    if (((TObjPlayer *)arg0)->is_mode_two_and_ready() != 0) {
        temp_r3 = (unsigned char *) (*(void * *)&this->player);
        ((TTecBarta *)temp_r3)->create_ex((void *)(temp_r3 + 0x38), (void *)(*(s32 *)((s8 *)temp_r3 + 0x60)), (void *)3);
        return;
    }
    ((TObjPlayer *)arg0)->update_active_game_effect();
}

}
