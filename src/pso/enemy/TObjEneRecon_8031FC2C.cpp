#include "types.h"

extern "C" {

void restore_position__12TObjEneReconFPv(void* p);
void TObjEneRecon__sub_8031FC58(void);
int TObjEneRecon__sub_8031FC5C(void* p);
void set_state_6__12TObjEneReconFPv(void* p);
void TObjEneRecon__sub_8031FCAC(void);
int clear_attack_receipts(void*);
int transition_enemy_state(void*, void*);
int VecCopy__FP3VecPC3Vec(void*, void*);

void restore_position__12TObjEneReconFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneRecon__sub_8031FC58(void) {  }
int TObjEneRecon__sub_8031FC5C(void* p) { return clear_attack_receipts(p); }
void set_state_6__12TObjEneReconFPv(void* p) { if (*(short*)((char*)p + 0x326) != 6) { transition_enemy_state(p, (void*)6); } }
void TObjEneRecon__sub_8031FCAC(void) {  }

}
