#include "types.h"

extern "C" {

int fn_8001A6A8(void*);
int fn_8001A77C(void*);
void fn_8001A860(void);

void fn_8001A860(void) {  }
void fn_8001A864(void* p) { fn_8001A77C(p); fn_8001A6A8(p); }

}
