#include "types.h"

extern "C" {

int TBoss8Dragon__sub_802FB150(void* p);
int TBoss8Dragon__sub_802FB170(void* p);
int emit_effect__12TBoss8DragonFPv(void* p);
int TObjEneDD__sub_800BA498(void*);
int emit_enemy_effect__9TObjEneDDFiiPvi(void*);
int setup_instance__9TObjEneDDFiiPvi(void*);

int TBoss8Dragon__sub_802FB150(void* p) { return setup_instance__9TObjEneDDFiiPvi(p); }
int TBoss8Dragon__sub_802FB170(void* p) { return TObjEneDD__sub_800BA498(p); }
int emit_effect__12TBoss8DragonFPv(void* p) { return emit_enemy_effect__9TObjEneDDFiiPvi(p); }

}
