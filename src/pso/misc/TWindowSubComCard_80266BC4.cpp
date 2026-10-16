#include "types.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

int sub_80266BB8__11TWindowMenuFv(void* p);

void TWindowMenu::reset_selection() { *(s16*)((char*)this + 0x7a) = -1; }

}
