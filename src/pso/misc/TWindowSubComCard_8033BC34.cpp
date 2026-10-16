#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

int fn_8033BCDC(void*, void*, void*, void*, void*);

void TWindowSubComCard::update_card_display(void* a1, void* a2, void* a3, void* a4) { close_windows(); fn_8033BCDC(this, a1, a2, a3, a4); }

}
