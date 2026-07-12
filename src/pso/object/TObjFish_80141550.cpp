#include "types.h"

extern "C" {

int TObjFish__sub_80141550(void);
int TObjFish__sub_80141574(void);
int TObjFish__sub_80141598(void);
int GXSetCullMode(void*);

int TObjFish__sub_80141550(void) { return GXSetCullMode((void*)(0)); }
int TObjFish__sub_80141574(void) { return GXSetCullMode((void*)(1)); }
int TObjFish__sub_80141598(void) { return GXSetCullMode((void*)(2)); }

}
