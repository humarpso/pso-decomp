#include "types.h"

extern "C" {

int fn_8000FEAC(void* p);
int fn_8000FED0(void* p);
int fn_8000FEF4(void* p);
int fn_8000FF18(void* p);
void fn_8000FF4C(void* p, s16 v);
u16 fn_8000FF54(void* p);
int obj_testFlags30(void*, int);

int fn_8000FEAC(void* p) { return obj_testFlags30(p, 4096); }
int fn_8000FED0(void* p) { return obj_testFlags30(p, 2048); }
int fn_8000FEF4(void* p) { return obj_testFlags30(p, 512); }
int fn_8000FF18(void* p) { return obj_testFlags30(p, 256); }
BOOL fn_8000FF3C(void* p) { return *(u32*)((char*)p + 0x2a8) == 0; }
void fn_8000FF4C(void* p, s16 v) { *(s16*)((char*)p + 0x2d4) = v; }
u16 fn_8000FF54(void* p) { return *(u16*)((char*)p + 0x2d4); }
int fn_8000FF5C(void) { return 0; }
int fn_8000FFA4(void) { return 0; }
int fn_8001000C(void) { return 0; }
int fn_800100A0(void) { return 0; }
int fn_80010128(void) { return 0; }
int fn_800101B0(void) { return 0; }
int fn_80010238(void) { return 0; }
int fn_800102C0(void) { return 0; }

}
