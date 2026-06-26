#include "types.h"

extern "C" {

int fn_803487DC(void*);
int fn_80348818(void*, void*, void*);
void fn_80348794(void* p, void* a1);

void fn_80348794(void* p, void* a1) { if (fn_803487DC(p) > 15) { fn_80348818((void*)10, p, a1); } }

}
