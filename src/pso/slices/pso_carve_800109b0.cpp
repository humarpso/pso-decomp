#include "types.h"

extern "C" {

int obj_clearArrS16_FC(void*, void*);
void fn_80010A34(void* p);
int fn_80010A78(void);
void fn_80010A80(void);

int fn_800109B0(void) { return 0; }
void fn_80010A34(void* p) { { int i; for (i = 0; i < 4; i++) { obj_clearArrS16_FC(p, (void*)i); } } }
int fn_80010A78(void) { return 0; }
void fn_80010A80(void) {  }
int fn_80010A84(void) { return 0; }
int fn_80010AF0(void) { return 0; }
int fn_80010B44(void) { return 0; }
int fn_80010BB0(void) { return 0; }
int fn_80010C04(void) { return 0; }

}
