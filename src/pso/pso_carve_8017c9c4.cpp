#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int fn_80156B38(void*);
int fn_801E4570(void*);
void TOVS2Wall01__vt23(void);
void fn_8017CA48(void* p, s32 v);
s32 fn_8017CA50(void* p);

int TOVS2Wall01__vt24(void) { return 0; }
int TOVS2Wall01__vt25(void) { return 0; }
int TOVS2Wall01__vt18(void) { return 0; }
int TOVS2Wall01__vt19(void) { return 0; }
int TOVS2Wall01__vt20(void) { return 0; }
int TOVS2Wall01__vt21(void) { return 0; }
int TOVS2Wall01__vt22(void) { return 0; }
void TOVS2Wall01__vt23(void) {  }
void fn_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 fn_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
void fn_8017CA58(void* p) { fn_80156B38(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); }
void fn_8017CA94(void* p) { fn_8017CA58(p); fn_801E4570(p); }
int fn_8017CAC8(void) { return 0; }

}
