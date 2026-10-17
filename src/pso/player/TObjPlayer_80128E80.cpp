#include "types.h"
#include "pso/player/TObjPlayer_80128E80.h"
#include "pso/unk/text_80120908.h"
#include "pso/TAdRicoRing.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void srank_punch_draw(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
    ((TObjPlayer *)(arg0 + 0x1FC))->set_flags(1);
    draw_weapon_at_joint((s32)arg0, 0x30);
    ((TObjPlayer *)arg0)->draw_icon((s32)1, (s32)(arg0 + 0x200));
    *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x180);
    ((TAdRicoRing *)(arg0 + 0x1FC))->clear_flags(1);
    draw_weapon_at_joint((s32)arg0, 0x23);
    ((TObjPlayer *)arg0)->draw_icon((s32)1, (s32)(arg0 + 0x20C));
    *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
}

}
