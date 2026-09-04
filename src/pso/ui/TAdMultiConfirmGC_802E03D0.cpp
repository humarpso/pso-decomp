#include "types.h"

extern "C" {

void TAdMultiConfirmGC__sub_802E03D0(void* p);
void TAdMultiConfirmGC__sub_802E0448(void* p);
int fn_802E0454(void);
int reset_cursor__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index__17TAdMultiConfirmGCFPvi(void*, int);

void TAdMultiConfirmGC__sub_802E03D0(void* p) { *(s32*)((char*)p + 0x118) = 0; }
int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 2); }
int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 1); }
int reset_cursor__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 0); }
void TAdMultiConfirmGC__sub_802E0448(void* p) { *(s32*)((char*)p + 0x11c) = 1; }

int fn_802E0454(void) { return 0; }

}
