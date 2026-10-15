#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

    extern const float lbl_805DB168;
    extern const float lbl_805DB170;
void TObjPlayer::reset_movement() { *(int*)((char*)this + 0xb0) = 0; *(int*)((char*)this + 0xb4) = 0; *(short*)((char*)this + 0xba) = 0; *(short*)((char*)this + 0xb8) = 0; *(short*)((char*)this + 0xbc) = 0; *(float*)((char*)this + 0xc4) = lbl_805DB168; *(float*)((char*)this + 0xc8) = lbl_805DB168; *(float*)((char*)this + 0xc0) = lbl_805DB168; *(float*)((char*)this + 0xcc) = lbl_805DB170; *(float*)((char*)this + 0xd0) = lbl_805DB168; *(float*)((char*)this + 0xd4) = lbl_805DB168; *(int*)((char*)this + 0xe4) = 0; *(int*)((char*)this + 0xe8) = 0; *(float*)((char*)this + 0xec) = lbl_805DB168; *(float*)((char*)this + 0xf0) = lbl_805DB168; *(short*)((char*)this + 0xf6) = 0; *(short*)((char*)this + 0xf4) = 0; }

}
