#include "types.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

void TWindowMenu::reset_selection() { *(s16 *)&this->unk_7A = -1; }

}
