#include "types.h"

extern "C" {

int fn_80121200(void*);
int TOHangerMachine01__sub_803D9C00(void*);
void fn_80130BF0(void* p);

void fn_80130BF0(void* p) { if (fn_80121200(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1f8); } }

}
