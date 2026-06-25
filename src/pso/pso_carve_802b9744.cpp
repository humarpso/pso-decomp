#include "types.h"

extern "C" {

int fn_801E4570(void*);
void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void* fn_802B9760(void* p);
int fn_802B9768(void* p);
int fn_802B9778(void* p);
int fn_8001960C(void*);

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* fn_802B9760(void* p) { return (char*)p + 0x388; }
int fn_802B9768(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int fn_802B9778(void* p) { return fn_8001960C(p); }
void fn_802B9798(void* p) { fn_802B9778(p); fn_801E4570(p); }
int fn_802B97CC(void) { return 0; }

}
