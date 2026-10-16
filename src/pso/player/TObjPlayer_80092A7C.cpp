#include "types.h"
#include "pso/enemy/TUnk_80493450.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);

void TUnk_80493450::vfunc_100() {  }
int TUnk_80493450::test_flag_256() { return 0; }
void TUnk_80493450::request_stand_action() { this->m_b8 = 0; }
void TObjPlayer::init_position_vectors() {
    s32 arg0 = (s32)this;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x290, VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x38)));
}

}
