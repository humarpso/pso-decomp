#include "types.h"

extern "C" {

void TAdMultiConfirmGC__sub_802E03D0(void* p);
int TAdMultiConfirmGC__sub_802E03DC(void* p);
int TAdMultiConfirmGC__sub_802E0400(void* p);
int TAdMultiConfirmGC__sub_802E0424(void* p);
void TAdMultiConfirmGC__sub_802E0448(void* p);
int fn_802E072C(void*, int);

void TAdMultiConfirmGC__sub_802E03D0(void* p) { *(s32*)((char*)p + 0x118) = 0; }
int TAdMultiConfirmGC__sub_802E03DC(void* p) { return fn_802E072C(p, 2); }
int TAdMultiConfirmGC__sub_802E0400(void* p) { return fn_802E072C(p, 1); }
int TAdMultiConfirmGC__sub_802E0424(void* p) { return fn_802E072C(p, 0); }
void TAdMultiConfirmGC__sub_802E0448(void* p) { *(s32*)((char*)p + 0x11c) = 1; }
int fn_802E0454(void) { return 0; }

}
