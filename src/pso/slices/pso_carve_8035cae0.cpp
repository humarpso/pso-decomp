#include "types.h"

extern "C" {

int fn_8035CB40(void);
int fn_8035CB64(void);
int fn_801F4830(void*);

int fn_8035CAE0(void) { return 0; }
int fn_8035CB10(void) { return 0; }
int fn_8035CB40(void) { return fn_801F4830((void*)(154)); }
int fn_8035CB64(void) { return fn_801F4830((void*)(152)); }

}
