#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

    extern const float lbl_805DB168;
    extern const float lbl_805DB170;
void TObjPlayer::reset_movement() { *(int *)&this->unk_B0 = 0; *(int *)&this->m_b4 = 0; this->m_ba = 0; *(short *)&this->unk_B8 = 0; *(short *)&this->unk_BC = 0; *(float *)&this->unk_C4 = lbl_805DB168; *(float *)&this->m_c8 = lbl_805DB168; *(float *)&this->m_c0 = lbl_805DB168; *(float *)&this->unk_CC = lbl_805DB170; *(float *)&this->m_d0 = lbl_805DB168; *(float *)&this->unk_D4 = lbl_805DB168; *(int*)((char*)this + 0xe4) = 0; *(int *)&this->unk_E8 = 0; *(float *)&this->m_ec = lbl_805DB168; *(float *)&this->unk_F0 = lbl_805DB168; *(short*)((char*)this + 0xf6) = 0; *(short *)&this->m_f4 = 0; }

}
