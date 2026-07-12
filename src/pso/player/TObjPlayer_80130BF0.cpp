#include "types.h"

extern "C" {

void update_hanger_position__10TObjPlayerFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjPlayer__sub_80121200(void*);

void update_hanger_position__10TObjPlayerFPv(void* p) { if (TObjPlayer__sub_80121200(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1f8); } }

}
