#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

void TObjEneRecon__sub_8031FC58(void);
int TObjEneRecon__sub_8031FC5C(void* p);
void TObjEneRecon__sub_8031FCAC(void);
int clear_attack_receipts(void*);
int transition_enemy_state(void*, void*);
int VecCopy__FP3VecPC3Vec(void*, void*);

void TObjEneRecon::restore_position() { VecCopy__FP3VecPC3Vec((char*)this + 0x74, (char*)this + 0x2fc); }
void TObjEneRecon__sub_8031FC58(void) {  }
int TObjEneRecon__sub_8031FC5C(void* p) { return clear_attack_receipts(p); }
void TObjEneRecon::set_state_6() { if (*(short*)((char*)this + 0x326) != 6) { transition_enemy_state(this, (void*)6); } }
void TObjEneRecon__sub_8031FCAC(void) {  }

}
