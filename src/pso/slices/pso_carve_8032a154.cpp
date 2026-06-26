#include "types.h"

extern "C" {

s32 fn_8032A154(void* p);
void fn_8032A15C(void* p);
void TAdMcSelectGC__sub_8032A168(void* p, s32 v);
void TAdMcSelectGC__sub_8032A170(void* p, s32 v);
void TAdMcSelectGC__sub_8032A178(void* p, s32 v);
void TAdMcSelectGC__sub_8032A180(void* p, s32 v);
void TAdMcSelectGC__sub_8032A1B0(void* p, s32 v);
void TAdMcSelectGC__sub_8032A1B8(void* p, f32 v);
void TAdMcSelectGC__sub_8032A1C0(void* p, s32 v);
void TAdMcSelectGC__sub_8032A1C8(void* p, f32 v);

s32 fn_8032A154(void* p) { return *(s32*)((char*)p + 0x20); }
void fn_8032A15C(void* p) { *(s32*)((char*)p + 0x1c) = 1; }
void TAdMcSelectGC__sub_8032A168(void* p, s32 v) { *(s32*)((char*)p + 0x13c) = v; }
void TAdMcSelectGC__sub_8032A170(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
void TAdMcSelectGC__sub_8032A178(void* p, s32 v) { *(s32*)((char*)p + 0x124) = v; }
void TAdMcSelectGC__sub_8032A180(void* p, s32 v) { *(s32*)((char*)p + 0x28) = v; }
int fn_8032A188(void) { return 0; }
void TAdMcSelectGC__sub_8032A1B0(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void TAdMcSelectGC__sub_8032A1B8(void* p, f32 v) { *(f32*)((char*)p + 0x20) = v; }
void TAdMcSelectGC__sub_8032A1C0(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void TAdMcSelectGC__sub_8032A1C8(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }

}
