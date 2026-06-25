#include "types.h"

extern "C" {

int fn_801D0888(void*);
void fn_801C90FC(void* p);
void fn_801C90F8(void);
void fn_801C9128(void);
void fn_801C912C(void);

int fn_801C9084(void) { return 0; }
void fn_801C90F8(void) {  }
void fn_801C90FC(void* p) { if (*(short*)((char*)p + 0x328) == 4) { fn_801D0888(p); } }
void fn_801C9128(void) {  }
void fn_801C912C(void) {  }

}
