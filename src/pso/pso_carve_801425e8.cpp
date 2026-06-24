#include "types.h"

extern "C" {

int fn_80142720(void*);
int fn_80142734(void*);
int fn_80142764(void*);
void fn_801425E8(void* p);

void fn_801425E8(void* p) { fn_80142764(p); fn_80142734(p); fn_80142720(p); }

}
