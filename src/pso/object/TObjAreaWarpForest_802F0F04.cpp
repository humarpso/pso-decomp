#include "types.h"

extern "C" {

void render_if_active__18TObjAreaWarpForestFPv(void* p);
int render__18TObjAreaWarpForestFv(void*);

void render_if_active__18TObjAreaWarpForestFPv(void* p) { if (*(int*)((char*)p + 0xdc) != 0) { render__18TObjAreaWarpForestFv(p); } }

}
