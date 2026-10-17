#include "types.h"
#include "pso/item/TUnk_804A535C.h"
#include "pso/player/TObjPlayer_8012C78C.h"
#include "pso/unk/text_80120908.h"
#include "pso/TAdRicoRing.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TUnk_804A535C::reserved_53() {
    s32 temp_r31;
    u8 *arg0 = (u8 *)this;

    temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
    ((TObjPlayer *)(arg0 + 0x1F8))->set_flags(1);
    draw_weapon_model((TItemWeapon *)arg0);
    ((TObjPlayer *)arg0)->draw_icon(1, (s32)(arg0 + 0x1FC));
    *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x180);
    ((TAdRicoRing *)(arg0 + 0x1F8))->clear_flags(1);
    draw_weapon_at_joint((s32)arg0, 0x23);
    ((TObjPlayer *)arg0)->draw_icon(1, (s32)(arg0 + 0x208));
    *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
}

}
