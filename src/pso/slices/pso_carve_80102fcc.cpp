#include "types.h"

extern "C" {

void fn_80103114(void* p, s16 v);

int fn_80102FCC(void) { return 0; }
int fn_80103010(void) { return 0; }
int fn_80103044(void) { return 0; }
int fn_80103074(void) { return 0; }
int fn_801030A8(void) { return 0; }
int fn_801030EC(void) { return 0; }
void fn_80103114(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
int fn_8010311C(void) { return 0; }

}
