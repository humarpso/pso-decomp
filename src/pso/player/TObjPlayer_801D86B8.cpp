#include "types.h"

extern "C" {

int query_darkfalz_state__10TObjPlayerFPv(void* p);
int set_animation_default__10TObjPlayerFPv(void* p);
int TBoss4DarkFalz__sub_8004C220(void*);
int set_animation__10TObjPlayerFPvs(void*);

int query_darkfalz_state__10TObjPlayerFPv(void* p) { return TBoss4DarkFalz__sub_8004C220(p); }
int set_animation_default__10TObjPlayerFPv(void* p) { return set_animation__10TObjPlayerFPvs(p); }

}
