#include "types.h"

extern "C" {

int fn_802A208C(void*);
int fn_802A226C(void*);
int fn_802A2500(void*);
void fn_802A2620(void* p);

void fn_802A2620(void* p) { fn_802A2500(p); fn_802A226C(p); fn_802A208C(p); }

}
