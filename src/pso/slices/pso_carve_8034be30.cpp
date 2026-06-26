#include "types.h"

extern "C" {

u16 fn_8034BE30(void* p);
void fn_8034BE38(void* p);
void fn_8034BE48(void* p);
void TAdFloorLoadCamGC__vt2(void);

u16 fn_8034BE30(void* p) { return *(u16*)((char*)p + 0x24); }
void fn_8034BE38(void* p) { *(u32*)((char*)p + 0x334) &= 0xbfffffff; }
void fn_8034BE48(void* p) { *(u32*)((char*)p + 0x334) |= 0x40000000; }
void TAdFloorLoadCamGC__vt2(void) {  }

}
