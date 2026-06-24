#include "types.h"

extern "C" {

int fn_801E8228(void* p);
int fn_801E8248(void* p);
int fn_801E8268(void* p);
int fn_8032C6AC(void*);
int fn_8032C6F0(void*);
int fn_8032C93C(void*);

int fn_801E8228(void* p) { return fn_8032C93C(p); }
int fn_801E8248(void* p) { return fn_8032C6AC(p); }
int fn_801E8268(void* p) { return fn_8032C6F0(p); }

}
