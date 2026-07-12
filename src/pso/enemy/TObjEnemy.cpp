#include "types.h"

extern "C" {

int apply_player_54a00__9TObjEnemyFPv(void* p);
void TObjPlayer__sub_800F792C(void* p);
void TObjPlayer__sub_800F793C(void* p);

int TObjPlayer__sub_80154A00(void*);

int apply_player_54a00__9TObjEnemyFPv(void* p) { return TObjPlayer__sub_80154A00(p); }
void TObjPlayer__sub_800F792C(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffbff; }
void TObjPlayer__sub_800F793C(void* p) { *(u16*)((char*)p + 0x4) |= 0x400; }

}
