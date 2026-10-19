#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"

    extern const float lbl_805DB168;
    extern const float lbl_805DB170;
void TObjMotion::reset_motion_fields() { *(int *)&this->animationFlags = 0; *(int *)&this->m_b4 = 0; this->m_ba = 0; *(short *)&this->m_b8 = 0; *(short *)&this->m_bc = 0; *(float *)&this->unk_C4 = lbl_805DB168; *(float *)&this->m_c8 = lbl_805DB168; *(float *)&this->m_c0 = lbl_805DB168; *(float *)&this->unk_CC = lbl_805DB170; *(float *)&this->m_d0 = lbl_805DB168; *(float *)&this->unk_D4 = lbl_805DB168; *(int*)((char*)this + 0xe4) = 0; *(int *)&this->unk_E8 = 0; *(float *)&this->m_ec = lbl_805DB168; *(float *)&this->unk_F0 = lbl_805DB168; *(short*)((char*)this + 0xf6) = 0; *(short *)&this->m_f4 = 0; }
