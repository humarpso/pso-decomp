#include "types.h"

extern "C" {

int fn_80339B94(void* p);
int fn_80339BF4(void* p);
int fn_80339CC0(void* p);
void fn_80339CE4(void);
int fn_80339CE8(void* p);
int fn_80339F5C(void*, int);
int fn_8033A088(void*);

int fn_80339B64(void) { return 0; }
int fn_80339B94(void* p) { return fn_8033A088(p); }
int fn_80339BB4(void) { return 0; }
int fn_80339BF4(void* p) { return fn_80339F5C(p, 3); }
int fn_80339C18(void) { return 0; }
int fn_80339CC0(void* p) { return fn_80339F5C(p, 2); }
void fn_80339CE4(void) {  }
int fn_80339CE8(void* p) { return fn_80339F5C(p, 1); }
int fn_80339D0C(void) { return 0; }
int fn_80339D78(void) { return 0; }

}
