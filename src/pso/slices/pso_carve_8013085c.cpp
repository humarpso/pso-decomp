#include "types.h"

extern "C" {

int TObjPlayer__sub_80121200(void*);
int TOHangerMachine01__sub_803D9C00(void*);
void fn_8013085C(void* p);

void fn_8013085C(void* p) { if (TObjPlayer__sub_80121200(p) == 2) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1fc); } }

}
