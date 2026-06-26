#include "types.h"

extern "C" {

void fn_80090824(void);
void fn_80090828(void);
int fn_8009082C(void* p);
int fn_80040B3C(void*, int);

int fn_80090798(void) { return 0; }
int fn_800907DC(void) { return 0; }
void fn_80090824(void) {  }
void fn_80090828(void) {  }
int fn_8009082C(void* p) { return fn_80040B3C(p, 0); }

}
