#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TWindowKeyBoardHard.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TBoss8Dragon::test_card_flag_2() { return TWindowKeyBoardHard::test_card_flag((s32)this, (s32)2); }

void TBoss8Dragon::set_speed(f32 v) { this->m_10 = v; }

void TObjEnemy::sub_8002AE64() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0xB0) = (s32) (*(s32 *)((s8 *)arg0 + 0xB0) & 0xFFFFFFFE);
}

}
