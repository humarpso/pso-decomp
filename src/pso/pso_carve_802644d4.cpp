#include "types.h"

extern "C" {

int fn_80244A14(void*);
int fn_80244B64(void*);
int fn_802AD90C(void*);
int fn_802AD980(void*);
int fn_802ADB0C(void*);
int fn_802ADE78(void*);
int fn_802646E4(void* a0 = 0, void* a1 = 0);
void fn_802644D4(void* p);
void fn_80264594(void* p, void* a1);
void fn_802645E4(void* p, void* a1);
void fn_80264634(void* p);
void fn_80264514(void* p);
int fn_80244A4C(void*);

void fn_802644D4(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { fn_80244B64(*(void**)((char*)p + 0x1c)); fn_802ADE78(*(void**)((char*)p + 0x1c)); } }
void fn_80264514(void* p) { void* m = *(void**)((char*)p + 0x1c); if (m) fn_80244A4C(m); }
int fn_80264540(void) { return 0; }
void fn_80264594(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { fn_802AD90C(*(void**)((char*)p + 0x1c)); fn_802ADB0C(*(void**)((char*)p + 0x1c)); fn_802646E4(p, a1); } }
void fn_802645E4(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { fn_802AD980(*(void**)((char*)p + 0x1c)); fn_802ADB0C(*(void**)((char*)p + 0x1c)); fn_802646E4(p, a1); } }
void fn_80264634(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { fn_80244A14(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }
int fn_80264674(void) { return 0; }
int fn_802646E4(void*, void*) { return 0; }

}
