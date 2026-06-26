#include "types.h"

extern "C" {

int fn_801BCD28(void* p);
void fn_801BCD50(void);
void fn_801BCD54(void);
int fn_801BEF60(void*, int);

int fn_801BCD28(void* p) { return fn_801BEF60((char*)p + 0x550, 0); }
void fn_801BCD50(void) {  }
void fn_801BCD54(void) {  }
int fn_801BCD58(void) { return 0; }

}
