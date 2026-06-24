#include "types.h"

extern "C" {

void fn_80223674(void* p);
void fn_802236A0(void* p);
void fn_802236CC(void* p);
void fn_802236F8(void* p);
int fn_80222848(void*);
int fn_80222898(void*);
int fn_80222910(void*);
int fn_8022297C(void*);

int fn_80223600(void) { return 0; }
void fn_80223674(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80222898(m); }
void fn_802236A0(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80222848(m); }
void fn_802236CC(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80222910(m); }
void fn_802236F8(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_8022297C(m); }
int fn_80223724(void) { return 0; }
int fn_80223760(void) { return 0; }
int fn_802237D8(void) { return 0; }

}
