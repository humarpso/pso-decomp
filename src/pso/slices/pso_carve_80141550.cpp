#include "types.h"

extern "C" {

int fn_80141550(void);
int fn_80141574(void);
int fn_80141598(void);
int GXSetCullMode(void*);

int fn_80141550(void) { return GXSetCullMode((void*)(0)); }
int fn_80141574(void) { return GXSetCullMode((void*)(1)); }
int fn_80141598(void) { return GXSetCullMode((void*)(2)); }

}
