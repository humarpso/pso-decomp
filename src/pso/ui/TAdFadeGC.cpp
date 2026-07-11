#include "types.h"

extern "C" {

void render__9TAdFadeGCFv(void* p);

int all_parents_unqueued_for_destruction__7TObjectFv(void*);
int TAdFadeGC__sub_802C79C8(void*);

void render__9TAdFadeGCFv(void* p) { if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 0) { TAdFadeGC__sub_802C79C8(p); } }

}
