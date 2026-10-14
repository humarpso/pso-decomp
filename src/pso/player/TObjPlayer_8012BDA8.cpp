#include "types.h"

extern "C" {

void psycho_wand_equip(void* p);
void psycho_wand_unequip(void* p);

void psycho_wand_equip(void* p) { *(s16*)((char*)p + 0x1f8) = -1; }
void psycho_wand_unequip(void* p) { *(s16*)((char*)p + 0x1f8) = -1; }

}
