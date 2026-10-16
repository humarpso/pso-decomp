#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

    extern const float lbl_805DC098;
void TObjPlayer::reset_motion_fields() { *(int *)&this->m_20 = 0; *(float*)((char*)this + 0x4c) = lbl_805DC098; this->m_48 = lbl_805DC098; *(float*)((char*)this + 0x44) = lbl_805DC098; this->m_58 = lbl_805DC098; *(float*)((char*)this + 0x54) = lbl_805DC098; this->m_50 = lbl_805DC098; *(int*)((char*)this + 0x64) = 0; *(int *)&this->m_60 = 0; *(int*)((char*)this + 0x5c) = 0; *(float*)((char*)this + 0x7c) = lbl_805DC098; this->m_78 = lbl_805DC098; *(float*)((char*)this + 0x74) = lbl_805DC098; *(int *)&this->m_80 = 0; }

}
