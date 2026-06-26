#include "types.h"

extern "C" {

void fn_80092A7C(void);
int fn_80092A80(void);
void fn_80092A88(void* p);

void fn_80092A7C(void) {  }
int fn_80092A80(void) { return 0; }
void fn_80092A88(void* p) { *(s16*)((char*)p + 0xb8) = 0; }
int fn_80092A94(void) { return 0; }

}
