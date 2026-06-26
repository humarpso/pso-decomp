#include "types.h"

extern "C" {

int fn_80283850(void* a0 = 0);
void* TWindowSubSymbolChat__sub_80283820(void* p);
void TWindowSubSymbolChat__sub_80283810(void* p);
void TWindowSubSymbolChat__sub_802838C4(void* p);
void TWindowSubSymbolChat__sub_802838D4(void* p);
s16 fn_802838E4(void* p);
s16 fn_802838EC(void* p);
int fn_802838F4(void* p);
int TWindowSubSymbolChat__sub_80283900(void* p);
void TWindowSubSymbolChat__sub_8028390C(void* p);
void TWindowSubSymbolChat__sub_8028391C(void* p);
void TWindowSubSymbolChat__sub_80283954(void* p);
void TWindowSubSymbolChat__sub_80283964(void* p);
int fn_80283974(void* p);
int TWindowSubSymbolChat__sub_80283980(void* p);
int fn_8028398C(void* p);
int TWindowSubSymbolChat__sub_80283998(void* p);

void TWindowSubSymbolChat__sub_80283810(void* p) { *(u32*)((char*)p + 0x0) |= 0x1; }
void* TWindowSubSymbolChat__sub_80283820(void* p) { fn_80283850(p); return p; }
int fn_80283850(void*) { return 0; }
void TWindowSubSymbolChat__sub_802838C4(void* p) { *(u32*)((char*)p + 0x0) |= 0x2; }
void TWindowSubSymbolChat__sub_802838D4(void* p) { *(u32*)((char*)p + 0x0) &= 0xfffffffd; }
s16 fn_802838E4(void* p) { return *(s16*)((char*)p + 0x6c); }
s16 fn_802838EC(void* p) { return *(s16*)((char*)p + 0x6a); }
int fn_802838F4(void* p) { return *(u8*)((char*)p + 0x68) & 0x1; }
int TWindowSubSymbolChat__sub_80283900(void* p) { return *(u8*)((char*)p + 0x68) & 0x2; }
void TWindowSubSymbolChat__sub_8028390C(void* p) { *(u8*)((char*)p + 0x60) &= 0xfffffffd; }
void TWindowSubSymbolChat__sub_8028391C(void* p) { *(u8*)((char*)p + 0x60) &= 0xfffffffb; }
int fn_8028392C(void) { return 0; }
int fn_80283944(void) { return 0; }
void TWindowSubSymbolChat__sub_80283954(void* p) { *(u8*)((char*)p + 0x60) |= 0x1; }
void TWindowSubSymbolChat__sub_80283964(void* p) { *(u8*)((char*)p + 0x60) |= 0x2; }
int fn_80283974(void* p) { return *(u8*)((char*)p + 0x70) & 0x1; }
int TWindowSubSymbolChat__sub_80283980(void* p) { return *(u8*)((char*)p + 0x70) & 0x2; }
int fn_8028398C(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubSymbolChat__sub_80283998(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }
int fn_802839A4(void) { return 0; }
int fn_802839C0(void) { return 0; }
int fn_80283A18(void) { return 0; }

}
