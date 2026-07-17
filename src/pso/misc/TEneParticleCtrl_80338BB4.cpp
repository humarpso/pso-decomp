#include "types.h"

extern "C" {

int TWindowSubStatusDisp__sub_80338B88(void* p);
void set_param__16TEneParticleCtrlFPv(void* p);
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p);
int set_param_ptr__11TBoss4Type2FPvi(void*);
int enable__13TParticleCtrlFPv(void*);

void set_param__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) set_param_ptr__11TBoss4Type2FPvi(m); }
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) enable__13TParticleCtrlFPv(m); }

}
