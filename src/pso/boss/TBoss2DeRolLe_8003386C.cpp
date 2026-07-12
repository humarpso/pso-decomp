#include "types.h"

extern "C" {

int TBoss2DeRolLe__sub_8003386C(void* p, int a1, int a2);
void TBoss2DeRolLe__sub_800338BC(void);
int TOTrapAncient01__sub_80226578(void*, int, int, int, int);
int TBoss3Volopt__sub_8022675C(void*, int, int, int);

int play_sound(void* p, int a1);

int TBoss2DeRolLe__sub_8003386C(void* p, int a1, int a2) { return TOTrapAncient01__sub_80226578(p, a1, a2, 0, 0); }
int play_sound(void* p, int a1) { return TBoss3Volopt__sub_8022675C(p, a1, 0, 0); }
void TBoss2DeRolLe__sub_800338BC(void) {  }

}
