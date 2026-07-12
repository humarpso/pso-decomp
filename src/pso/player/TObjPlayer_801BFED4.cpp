#include "types.h"

extern "C" {

s32 init_forward__10TObjPlayerFPv();
void TObjPlayer__sub_801BFED4(void* p);
int setup_state_helper__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8001BF40(void*);

void TObjPlayer__sub_801BFED4(void* p) { *(s32*)((char*)p + 0x4) = -1; }
s32 setup_state__10TObjPlayerFi(s32 arg0) {
    init_forward__10TObjPlayerFPv();
    setup_state_helper__10TObjPlayerFPv((void*)(arg0));
    return arg0;
}
int setup_state_helper__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BF40(p); }

}
