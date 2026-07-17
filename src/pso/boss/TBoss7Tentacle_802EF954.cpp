#include "types.h"

extern "C" {

void TBoss7Tentacle__sub_802EF954(void* p);
int advance_toward_limit__14TBoss7TentacleFPvf(void*, f32);
int disallow_rendering__7TObjectFv(void*);
int queue_destruction__7TObjectFv(void*);

extern const f32 TBoss7Tentacle__data_805DEC00;

void TBoss7Tentacle__sub_802EF954(void* p) { if (advance_toward_limit__14TBoss7TentacleFPvf(p, TBoss7Tentacle__data_805DEC00) != 0) { queue_destruction__7TObjectFv(p); disallow_rendering__7TObjectFv(p); } }

}
