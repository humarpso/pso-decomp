#include "types.h"

extern "C" {

int fn_80226C68(void);
int fn_80226C8C(void);
int fn_80226070(void*);

int fn_80226C68(void) { return fn_80226070((void*)(0)); }
int fn_80226C8C(void) { return fn_80226070((void*)(-30)); }

}
