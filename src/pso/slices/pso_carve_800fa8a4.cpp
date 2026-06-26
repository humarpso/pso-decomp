#include "types.h"

extern "C" {

int fn_800FA8A4(void* p);
int fn_800FA8C4(void* p);
int fn_800FA8E4(void* p);
int fn_800FAD54(void*);
int fn_8032182C(void*);

int fn_800FA8A4(void* p) { return fn_8032182C(p); }
int fn_800FA8C4(void* p) { return fn_8032182C(p); }
int fn_800FA8E4(void* p) { return fn_800FAD54(p); }

}
