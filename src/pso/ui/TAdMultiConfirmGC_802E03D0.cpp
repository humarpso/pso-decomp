#include "types.h"

extern "C" {

void TAdMultiConfirmGC__sub_802E03D0(void* p);
int TAdMultiConfirmGC__sub_802E03DC(void* p);
int TAdMultiConfirmGC__sub_802E0400(void* p);
int TAdMultiConfirmGC__sub_802E0424(void* p);
void TAdMultiConfirmGC__sub_802E0448(void* p);
int set_cursor_index__17TAdMultiConfirmGCFPvi(void*, int);

void TAdMultiConfirmGC__sub_802E03D0(void* p) { *(s32*)((char*)p + 0x118) = 0; }
int TAdMultiConfirmGC__sub_802E03DC(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 2); }
int TAdMultiConfirmGC__sub_802E0400(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 1); }
int TAdMultiConfirmGC__sub_802E0424(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 0); }
void TAdMultiConfirmGC__sub_802E0448(void* p) { *(s32*)((char*)p + 0x11c) = 1; }

}
