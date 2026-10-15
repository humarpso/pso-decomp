#include "types.h"
#include "pso/npc/TObjNpcEnemy.h"

extern "C" {

    extern const float lbl_805DE7D8;
void TObjNpcEnemy::reset_anim_fields() { *(short*)((char*)this + 0x0) = 0; *(short*)((char*)this + 0x2) = 4; *(float*)((char*)this + 0x4) = lbl_805DE7D8; *(int*)((char*)this + 0x8) = 0; *(int*)((char*)this + 0xc) = 0; *(float*)((char*)this + 0x10) = lbl_805DE7D8; *(int*)((char*)this + 0x14) = 0; *(int*)((char*)this + 0x18) = 0; *(short*)((char*)this + 0x1c) = 0; *(short*)((char*)this + 0x1e) = 0; *(short*)((char*)this + 0x20) = 0; }

}
