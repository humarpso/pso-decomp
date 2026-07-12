#include "types.h"

extern "C" {

int set_cull_none__8TObjFishFv(void);
int TObjFish__sub_80141574(void);
int set_cull_back__8TObjFishFv(void);
int GXSetCullMode(void*);

int set_cull_none__8TObjFishFv(void) { return GXSetCullMode((void*)(0)); }
int TObjFish__sub_80141574(void) { return GXSetCullMode((void*)(1)); }
int set_cull_back__8TObjFishFv(void) { return GXSetCullMode((void*)(2)); }

}
