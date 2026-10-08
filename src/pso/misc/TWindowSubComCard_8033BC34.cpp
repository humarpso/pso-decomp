#include "types.h"

extern "C" {

void update_card_display__17TWindowSubComCardFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4);
int close_windows__17TWindowSubComCardFPv(void*);
int fn_8033BCDC(void*, void*, void*, void*, void*);

void update_card_display__17TWindowSubComCardFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4) { close_windows__17TWindowSubComCardFPv(p); fn_8033BCDC(p, a1, a2, a3, a4); }

}
