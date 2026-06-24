#include "types.h"

extern "C" {

void fn_801CB7A4(void);
void fn_801CB7D4(void);
int fn_801CB7D8(void* p);
int fn_801BA2F4(void*);

int fn_801CB748(void) { return 0; }
void fn_801CB7A4(void) {  }
int fn_801CB7A8(void) { return 0; }
void fn_801CB7D4(void) {  }
int fn_801CB7D8(void* p) { return fn_801BA2F4(p); }

}
