#include "types.h"

extern "C" {

int fn_80203E88(void*);
int TScene__sub_80203F0C(void*);
int TScene__sub_80205A54(void*);
void TScene__vt1(void* p);

void TScene__vt1(void* p) { TScene__sub_80205A54(p); TScene__sub_80203F0C(p); fn_80203E88(p); }

}
