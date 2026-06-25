#include "types.h"

extern "C" {

int fn_8024664C(void*);
int fn_80257C28(void*, void*);
int fn_8026D504(void* p);
int fn_80223B88(void*, int);

int fn_8026D504(void* p) { return fn_80223B88(p, 0); }
int fn_8026D528(void) { return 0; }
int fn_8026D564(void) { return 0; }
int fn_8026D594(void) { return 0; }
void TWindowRoom__vt1(void* p) { fn_8024664C(p); fn_80257C28(p, (char*)p + 0x24); }

}
