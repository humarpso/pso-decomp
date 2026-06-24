#include "types.h"

extern "C" {

int fn_800B9E44(void* p);
int fn_800B9E64(void* p);
int fn_800B9F04(void* p);
int fn_800B9F24(void* p);
int fn_800B9F44(void* p);
int fn_80069148(void*);
int fn_800691C8(void*);
int fn_800F5DE0(void*);
int fn_80134098(void*);
int fn_80134194(void*);

int fn_800B9E44(void* p) { return fn_80134098(p); }
int fn_800B9E64(void* p) { return fn_80134194(p); }
int fn_800B9E84(void) { return 0; }
int fn_800B9ED0(void) { return 0; }
int fn_800B9F04(void* p) { return fn_80069148(p); }
int fn_800B9F24(void* p) { return fn_800691C8(p); }
int fn_800B9F44(void* p) { return fn_800F5DE0(p); }

}
