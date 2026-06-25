#include "types.h"

extern "C" {

int fn_8001A430(void*);
int fn_80320B38(void*);
void TAdGameStartShadowGC__vt2(void* p);

void TAdGameStartShadowGC__vt2(void* p) { if (fn_8001A430(p) != 1) { fn_80320B38(p); } }

}
