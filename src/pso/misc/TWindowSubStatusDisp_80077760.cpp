#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int fn_80077680(void*);
int fn_80132F2C(void*, void*);
int fn_80077720(void* p);
int fn_80077788(void);
int fn_80077790(void);

void TWindowSubStatusDisp__sub_80077760(void* p) { fn_80132F2C((void*)10, p); }

}
