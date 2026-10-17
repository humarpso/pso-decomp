#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TWindowKeyBoardHard.h"
#include "pso/player/TObjPlayer.h"

int TBoss8Dragon::test_card_flag_2() { return TWindowKeyBoardHard::test_card_flag((s32)this, 2); }

void TBoss8Dragon::set_speed(f32 v) { this->m_10 = v; }

void TObjEnemy::sub_8002AE64() {
    this->animationFlags = (s32) (this->animationFlags & 0xFFFFFFFE);
}
