#include "types.h"

extern "C" {

int fn_8002F588(void*);
int fn_8009E3E4(void*);
void fn_8009E474(void* p);

void fn_8009E474(void* p) { fn_8002F588((char*)p + 0x4a4); fn_8009E3E4(p); }

}
