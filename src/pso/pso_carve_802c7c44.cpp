#include "types.h"

extern "C" {

int all_parents_unqueued_for_destruction__7TObjectFv(void*);
int fn_802C79C8(void*);
void TAdFadeGC__vt2(void* p);

void TAdFadeGC__vt2(void* p) { if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 0) { fn_802C79C8(p); } }

}
