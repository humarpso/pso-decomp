#include "types.h"
#include "pso/player/TObjPlayer_8032E4C8.h"
#include "pso/player/TObjPlayer.h"
struct T_8032DA60 { u8 pad0[0x70]; void *f70; void *f74; s32 f78; };

extern "C" {
void config_guardianna_attack_collider(void *self, T_8032DA60 *p);
void config_guardianna_attack_collider(void *self, T_8032DA60 *p) {
    p->f78 = 0x176;
    p->f74 = (void *)TObjPlayer::start_guardianna_hit_card;
    p->f70 = (void *)start_guardianna_wall_card;
}

}
