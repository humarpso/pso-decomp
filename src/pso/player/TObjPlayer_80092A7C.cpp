#include "types.h"

extern "C" {

void TObjPlayer__sub_80092A7C(void);
int is_lying_down__12TObjEneBeastFv(void);
void request_stand_action__12TObjEneBeastFPv(void* p);
void init_position_vectors__10TObjPlayerFi(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void TObjPlayer__sub_80092A7C(void) {  }
int is_lying_down__12TObjEneBeastFv(void) { return 0; }
void request_stand_action__12TObjEneBeastFPv(void* p) { *(s16*)((char*)p + 0xb8) = 0; }
void init_position_vectors__10TObjPlayerFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x290, VecCopy__FP3VecPC3Vec(arg0 + 0x29C, arg0 + 0x38)));
}

}
