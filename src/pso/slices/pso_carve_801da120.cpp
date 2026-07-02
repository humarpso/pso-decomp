#include "types.h"

extern "C" {

int handle_cmd_D7(void* p);
int fn_801E08F4(void*);

int handle_cmd_D7(void* p) { return fn_801E08F4(p); }

}
