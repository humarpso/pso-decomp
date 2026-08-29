#include "types.h"

extern "C" {

int emit_enemy_effect__9TObjEneDDFiiPvi(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void TObjEneDD__sub_800BA498(void* p, void* a1);
int emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2);

void TObjEneDD__sub_800BA498(void* p, void* a1) { emit_enemy_effect__9TObjEneDDFiiPvi(p, (char*)p + 0x38, a1, (void*)0); }

}
