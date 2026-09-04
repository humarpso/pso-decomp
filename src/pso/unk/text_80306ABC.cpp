#include "types.h"

extern "C" {

int TAdMultiConfirmGC__sub_80306ABC(void* p);
int fn_80306AC8(void);

int TAdMultiConfirmGC__sub_80306ABC(void* p) { return *(u32*)((char*)p + 0x980) & 0x1; }

int fn_80306AC8(void) { return 0; }

}
