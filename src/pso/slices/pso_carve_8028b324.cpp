#include "types.h"

extern "C" {

int fn_8028B36C(void* p);
int fn_8028B38C(void* p);
int fn_8028B70C(void*);
int fn_8028B710(void*);

int fn_8028B324(void) { return 0; }
int fn_8028B36C(void* p) { return fn_8028B70C(p); }
int fn_8028B38C(void* p) { return fn_8028B710(p); }
int fn_8028B3AC(void) { return 0; }

}
