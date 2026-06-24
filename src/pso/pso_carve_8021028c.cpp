#include "types.h"

extern "C" {

int fn_80073DC4(void*, void*);
int fn_80211210(void);
int fn_802237D8(void*);
int fn_8022397C(void*);
void fn_8021028C(void* p);

void fn_8021028C(void* p) { fn_802237D8(p); fn_8022397C(p); fn_80211210(); fn_80073DC4(p, (void*)1); }

}
