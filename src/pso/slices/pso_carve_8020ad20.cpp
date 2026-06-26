#include "types.h"

extern "C" {

int fn_8020AD20(void* p);
int fn_8020C500(void*);

int fn_8020AD20(void* p) { return fn_8020C500(p); }

}
