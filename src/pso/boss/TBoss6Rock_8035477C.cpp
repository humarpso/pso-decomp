#include "types.h"

extern "C" {

void render__10TBoss6RockFv(void* p);

int TBoss6Rock__sub_803546B0(void*);
int is_active__10TBoss6RockFv(void*);

void render__10TBoss6RockFv(void* p) { if (is_active__10TBoss6RockFv(p) != 0) { TBoss6Rock__sub_803546B0(p); } }

}
