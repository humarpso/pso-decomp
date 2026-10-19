#include "types.h"
#include "pso/player/TUnk_80484840.h"
#include "pso/player/TObjPlayer_80048360.h"

#include "pso/player/TObjPlayer.h"

extern "C" {

s32 queue_destruction__7TObjectFv();

void TUnk_80484840::run_task() {
    s32 temp_r0;

    this->m_2c = (s32) (this->m_2c + this->m_38);
    temp_r0 = this->m_24 - 1;
    this->m_24 = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv();
    }
}


}
TUnk_80484840::~TUnk_80484840() {

}
