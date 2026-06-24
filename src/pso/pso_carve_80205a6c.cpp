#include "types.h"

extern "C" {

int fn_80203E88(void*);
int fn_80203F0C(void*);
int fn_80205A54(void*);
void fn_80205A6C(void* p);

void fn_80205A6C(void* p) { fn_80205A54(p); fn_80203F0C(p); fn_80203E88(p); }

}
