#include "types.h"

extern "C" {

int emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2);
int emit_enemy_effect__9TObjEneDDFiiPvi(void*, int, int, int);

int emit_effect__9TObjEneDDFPvii(void* p, int a1, int a2) { return emit_enemy_effect__9TObjEneDDFiiPvi(p, a1, a2, 0); }

}
