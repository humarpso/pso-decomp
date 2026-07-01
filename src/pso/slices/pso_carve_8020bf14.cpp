#include "types.h"

extern "C" {

int fn_8020BF68(void* p);
int fn_8020BFC4(void* p);
int fn_8020B47C(void*);
int fn_8020B5CC(void*);

int send_6x76_set_entity_set_flags(void) { return 0; }
int fn_8020BF68(void* p) { return fn_8020B47C(p); }
int fn_8020BF88(void) { return 0; }
int fn_8020BFC4(void* p) { return fn_8020B5CC(p); }

}
