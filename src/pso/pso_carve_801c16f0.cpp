#include "types.h"

extern "C" {

f32 fn_801C19A4(void* p);
void fn_801C19C8(void* p, f32 v);
s32 fn_801C19D0(void* p);
void fn_801C19D8(void* p, s32 v);
void fn_801C19E0(void* p, s32 v);
void fn_801C19E8(void* p);
void fn_801C19F4(void* p);
void fn_801C1A30(void* p);
void fn_801C1B0C(void);
int fn_801C1B10(void* p);
int fn_801C1B38(void* p);
int fn_801C1B60(void* p);
s32 fn_801C1B88(void* p);
f32 fn_801C1B90(void* p);
u16 fn_801C1B98(void* p);
s32 fn_801C1BA0(void* p);
int fn_801C1C00(void* p);
int fn_801C1C20(void* p);
void fn_801C1E44(void);
void* fn_801C1E48(void* p);
int fn_801C1E50(void* p);
void fn_801C1E74(void* p);
void fn_801C1E98(void* p);
void fn_801C1EA4(void* p);
void fn_801C1EC4(void* p);
void fn_801C1EE8(void* p);
void fn_801C1EF4(void* p);
void fn_801C1F14(void* p, s16 v);
int fn_801C1F50(void* p);
void fn_801C1F78(void* p, s16 v);
int fn_8001BED8(void*, int);
int fn_8001BEE8(void*, int);
int fn_8001BEF8(void*, int);

int fn_801C16F0(void) { return 0; }
int fn_801C172C(void) { return 0; }
int fn_801C1760(void) { return 0; }
int fn_801C1794(void) { return 0; }
int fn_801C17D0(void) { return 0; }
int fn_801C17EC(void) { return 0; }
int fn_801C1820(void) { return 0; }
int fn_801C1854(void) { return 0; }
int fn_801C1890(void) { return 0; }
int fn_801C18AC(void) { return 0; }
int fn_801C18E0(void) { return 0; }
int fn_801C1914(void) { return 0; }
int fn_801C1978(void) { return 0; }
f32 fn_801C19A4(void* p) { return *(f32*)((char*)p + 0xc); }
int fn_801C19AC(void) { return 0; }
void fn_801C19C8(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }
s32 fn_801C19D0(void* p) { return *(s32*)((char*)p + 0x4); }
void fn_801C19D8(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_801C19E0(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void fn_801C19E8(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void fn_801C19F4(void* p) { *(s32*)((char*)p + 0x0) = 1; }
int fn_801C1A00(void) { return 0; }
void fn_801C1A30(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int fn_801C1A40(void) { return 0; }
int fn_801C1A70(void) { return 0; }
int fn_801C1AC8(void) { return 0; }
void fn_801C1B0C(void) {  }
int fn_801C1B10(void* p) { return fn_8001BED8((char*)p + 0x1c, 2); }
int fn_801C1B38(void* p) { return fn_8001BED8((char*)p + 0x1c, 1); }
int fn_801C1B60(void* p) { return fn_8001BEE8((char*)p + 0x1c, 1); }
s32 fn_801C1B88(void* p) { return *(s32*)((char*)p + 0x0); }
f32 fn_801C1B90(void* p) { return *(f32*)((char*)p + 0x8); }
u16 fn_801C1B98(void* p) { return *(u16*)((char*)p + 0x4); }
s32 fn_801C1BA0(void* p) { return *(s32*)((char*)p + 0x24); }
int fn_801C1BA8(void) { return 0; }
int fn_801C1C00(void* p) { return fn_801C1C20(p); }
int fn_801C1C20(void* p) { return *(u32*)((char*)p + 0x0) == 0; }
int fn_801C1C30(void) { return 0; }
int fn_801C1C68(void) { return 0; }
int fn_801C1C80(void) { return 0; }
int fn_801C1CA8(void) { return 0; }
int fn_801C1CFC(void) { return 0; }
int fn_801C1D3C(void) { return 0; }
int fn_801C1D7C(void) { return 0; }
int fn_801C1DB8(void) { return 0; }
int fn_801C1DE0(void) { return 0; }
int fn_801C1E1C(void) { return 0; }
void fn_801C1E44(void) {  }
void* fn_801C1E48(void* p) { return (char*)p + 0x24; }
int fn_801C1E50(void* p) { return fn_801C1C20((char*)p + 0x24); }
void fn_801C1E74(void* p) { fn_801C1E98((char*)p + 0x24); }
void fn_801C1E98(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void fn_801C1EA4(void* p) { fn_801C1E98(p); }
void fn_801C1EC4(void* p) { fn_801C1EE8((char*)p + 0x24); }
void fn_801C1EE8(void* p) { *(s32*)((char*)p + 0x0) = 1; }
void fn_801C1EF4(void* p) { fn_801C1EE8(p); }
void fn_801C1F14(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
int fn_801C1F1C(void) { return 0; }
int fn_801C1F40(void) { return 0; }
int fn_801C1F50(void* p) { return fn_8001BEF8((char*)p + 0x40, 2); }
void fn_801C1F78(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int fn_801C1F80(void) { return 0; }
int fn_801C1FBC(void) { return 0; }

}
