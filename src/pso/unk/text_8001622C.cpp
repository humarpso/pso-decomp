#include "pso/player/TObjPlayer.h"
extern "C" void TObjPlayer__sub_8001622C(TObjPlayer*, const float*);

void TObjPlayer::show_miss_for_collider(int collider) {
    TObjPlayer__sub_8001622C(this, (const float*)(m_a4 + collider*0x2C + 0x1C));
}
