#include "types.h"

extern "C" {

int fn_8001A430(void*);
int fn_80141F1C(void);
int fn_80141F50(void);
int fn_80320DE8(void*);
void TAdGameStartLineGC__vt2(void* p);

void TAdGameStartLineGC__vt2(void* p) { if (fn_8001A430(p) != 1) { fn_80141F50(); fn_80320DE8(p); fn_80141F1C(); } }

}
