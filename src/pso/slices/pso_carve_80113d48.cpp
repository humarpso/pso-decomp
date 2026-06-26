#include "types.h"

extern "C" {

void fn_80113D48(void* p, f32 v);
int fn_80113D58(void* p);
int fn_80113D84(void* p, u32 m);
s16 fn_80113D90(void* p);
s16 fn_80113D98(void* p);
int fn_80113DA0(void* p);
int fn_80113DC4(void* p);
int fn_80113DE8(void* p);
int fn_80113E0C(void* p);
int fn_80113E30(void* p);
void fn_80113E3C(void* p);
u8 fn_80113E74(void* p);
s16 fn_80113E7C(void* p);
s16 fn_80113E84(void* p);
int fn_80113E8C(void* p);
f32 fn_80113EEC(void* p);
int fn_8010EE40(void*);
int fn_8010EE54(void*);
int fn_8010EE68(void*);
int fn_8010EE7C(void*);

void fn_80113D48(void* p, f32 v) { *(f32*)((char*)p + 0xc8) *= v; }
int fn_80113D58(void* p) { return (fn_80113D84(p, 64)) == 0; }
int fn_80113D84(void* p, u32 m) { return *(u32*)((char*)p + 0x64) & m; }
s16 fn_80113D90(void* p) { return *(s16*)((char*)p + 0x19a); }
s16 fn_80113D98(void* p) { return *(s16*)((char*)p + 0x198); }
int fn_80113DA0(void* p) { return fn_8010EE40((char*)p + 0x198); }
int fn_80113DC4(void* p) { return fn_8010EE68((char*)p + 0x198); }
int fn_80113DE8(void* p) { return fn_8010EE7C((char*)p + 0x198); }
int fn_80113E0C(void* p) { return fn_8010EE54((char*)p + 0x198); }
int fn_80113E30(void* p) { return *(u32*)((char*)p + 0x18c) & 0x10; }
void fn_80113E3C(void* p) { *(s8*)((char*)p + 0x0) = -32; }
int fn_80113E48(void) { return 0; }
u8 fn_80113E74(void* p) { return *(u8*)((char*)p + 0xe); }
s16 fn_80113E7C(void* p) { return *(s16*)((char*)p + 0x0); }
s16 fn_80113E84(void* p) { return *(s16*)((char*)p + 0x2); }
int fn_80113E8C(void* p) { return (*(u32*)((char*)p + 0x334) >> 9) & 0x1; }
int fn_80113E98(void) { return 0; }
int fn_80113EC8(void) { return 0; }
int fn_80113EDC(void) { return 0; }
f32 fn_80113EEC(void* p) { return *(f32*)((char*)p + 0x3c); }

}
