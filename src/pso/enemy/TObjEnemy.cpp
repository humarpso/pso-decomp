#include "types.h"

extern "C" {

int apply_player_54a00__9TObjEnemyFPv(void* p);
void clear_shadow_flag__10TObjPlayerFPv(void* p);
void set_shadow_flag__10TObjPlayerFPv(void* p);

int TObjPlayer__sub_80154A00(void*);

int apply_player_54a00__9TObjEnemyFPv(void* p) { return TObjPlayer__sub_80154A00(p); }
void clear_shadow_flag__10TObjPlayerFPv(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffbff; }
void set_shadow_flag__10TObjPlayerFPv(void* p) { *(u16*)((char*)p + 0x4) |= 0x400; }

}
