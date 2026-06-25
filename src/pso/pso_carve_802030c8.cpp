#include "types.h"

extern "C" {

int fn_80102E68(void*);
void* fn_802030C8(void* p, void* a1);
int __ct__12TPlyCharDataFv(void*);
int fn_80203190(void* a0 = 0);
void* fn_80203158(void* p);
int fn_8007AB54(void*);
void fn_80203210(void* p);

void* fn_802030C8(void* p, void* a1) { fn_80102E68(p); *(short*)((char*)p + 0x14) = *(short*)((char*)a1 + 0x14); *(short*)((char*)p + 0x16) = *(short*)((char*)a1 + 0x16); return p; }
int fn_8020310C(void) { return 0; }
void* fn_80203158(void* p) { __ct__12TPlyCharDataFv(p); fn_80203190((char*)p + 0x41c); return p; }
int fn_80203190(void*) { return 0; }
void* fn_802031E0(void* p) { fn_8007AB54(p); return p; }
void fn_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }
int fn_80203220(void) { return 0; }
int fn_8020325C(void) { return 0; }

}
