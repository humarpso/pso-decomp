#include "types.h"

extern "C" {

int TObjPlayer__sub_801D08B0(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void update_position_from_target__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D09F4(void);
void TObjPlayer__sub_801D09F8(void);

void update_position_from_target__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801D08B0(p, (char*)p + 0x38, *(void**)((char*)p + 0x60)); }

}
