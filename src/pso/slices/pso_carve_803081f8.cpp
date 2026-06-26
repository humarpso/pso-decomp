#include "types.h"

extern "C" {

void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
void TAdVIConfigGC__sub_80308200(void* p, s32 v);

void TAdYesNoBaseGC__vt4(void) {  }
void TAdYesNoBaseGC__vt5(void) {  }
void TAdVIConfigGC__sub_80308200(void* p, s32 v) { *(s32*)((char*)p + 0x2c) = v; }
int fn_80308208(void) { return 0; }
int fn_80308244(void) { return 0; }

}
