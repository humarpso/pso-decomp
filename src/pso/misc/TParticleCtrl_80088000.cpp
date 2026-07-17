#include "types.h"

extern "C" {

void clear_active_flag__13TParticleCtrlFPv(void* p);
void enable__13TParticleCtrlFPv(void* p);

void clear_active_flag__13TParticleCtrlFPv(void* p) { *(u16*)((char*)p + 0x2c) &= 0xfffe; }
void enable__13TParticleCtrlFPv(void* p) { *(u16*)((char*)p + 0x2c) |= 0x1; }

}
