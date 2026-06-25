#include "types.h"

extern "C" {

int fn_8001A430(void*);
int fn_80141F1C(void);
int fn_80141F50(void);
int fn_80307300(void*);
void fn_80307360(void* p);

void fn_80307360(void* p) { if (fn_8001A430(p) != 1) { fn_80141F50(); fn_80307300(p); fn_80141F1C(); } }

}
