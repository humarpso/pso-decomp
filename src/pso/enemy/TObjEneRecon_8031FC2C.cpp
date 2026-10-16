#include "types.h"
#include "pso/enemy/TObjEneRecobox.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

void vfunc_61__14TObjEneRecoboxFv(void);
int vfunc_62__14TObjEneRecoboxFv(void* p);
void vfunc_28__14TObjEneRecoboxFv(void);
int clear_attack_receipts__9TObjEneDDFv(void*);
int transition_enemy_state(void*, void*);
int VecCopy__FP3VecPC3Vec(void*, void*);

void TObjEneRecon::restore_position() { VecCopy__FP3VecPC3Vec((char*)this + 0x74, (char*)this + 0x2fc); }
void TObjEneRecobox::vfunc_61() {  }
void TObjEneRecobox::vfunc_62() { clear_attack_receipts__9TObjEneDDFv(this); }
void TObjEneRecobox::vfunc_63() { if (*(short*)((char*)this + 0x326) != 6) { transition_enemy_state(this, (void*)6); } }
void TObjEneRecobox::vfunc_28() {  }

}
