#include "types.h"

extern "C" {

void* fn_802B9760(void* p);
int fn_802B9768(void* p);
int fn_802B9778(void* p);
int fn_8001960C(void*);

int fn_802B9744(void) { return 0; }
int fn_802B9748(void) { return 0; }
int fn_802B974C(void) { return 0; }
int fn_802B9750(void) { return 0; }
int fn_802B9754(void) { return 0; }
int fn_802B9758(void) { return 0; }
int fn_802B975C(void) { return 0; }
void* fn_802B9760(void* p) { return (char*)p + 0x388; }
int fn_802B9768(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int fn_802B9778(void* p) { return fn_8001960C(p); }
int fn_802B9798(void) { return 0; }
int fn_802B97CC(void) { return 0; }

}
