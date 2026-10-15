#include "types.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_80092A7C(void);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void TObjPlayer__sub_80092A7C(void) {  }
int TObjEneBeast::is_lying_down() { return 0; }
void TObjEneBeast::request_stand_action() { *(s16*)((char*)this + 0xb8) = 0; }
void TObjPlayer::init_position_vectors() {
    s32 arg0 = (s32)this;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x290, VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x38)));
}

}
