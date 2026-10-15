#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

    extern const float lbl_805D91F0;
void TObjPlayer::clear_velocity_vectors() { *(float*)((char*)this + 0x8) = lbl_805D91F0; *(float*)((char*)this + 0x4) = lbl_805D91F0; *(float*)((char*)this + 0x0) = lbl_805D91F0; *(float*)((char*)this + 0x14) = lbl_805D91F0; *(float*)((char*)this + 0x10) = lbl_805D91F0; *(float*)((char*)this + 0xc) = lbl_805D91F0; *(int*)((char*)this + 0x18) = 0; }

}
