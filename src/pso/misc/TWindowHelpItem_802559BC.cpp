#include "types.h"

extern "C" {

void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
int TWindowHelpItem__sub_80255440(void*);
int update_cursor_selection__15TWindowHelpItemFPv(void*);

void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa0) = a2; *(void**)((char*)p + 0x6c) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

}
