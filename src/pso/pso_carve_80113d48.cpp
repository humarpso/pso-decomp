#include "types.h"

extern "C" {

s16 fn_80113D90(void* p);
s16 fn_80113D98(void* p);
int fn_80113DA0(void* p);
int fn_80113DC4(void* p);
int fn_80113DE8(void* p);
int fn_80113E0C(void* p);
void fn_80113E3C(void* p);
u8 fn_80113E74(void* p);
s16 fn_80113E7C(void* p);
s16 fn_80113E84(void* p);
f32 fn_80113EEC(void* p);
int fn_8010EE40(void*);
int fn_8010EE54(void*);
int fn_8010EE68(void*);
int fn_8010EE7C(void*);

int fn_80113D48(void) { return 0; }
int fn_80113D58(void) { return 0; }
int fn_80113D84(void) { return 0; }
s16 fn_80113D90(void* p) { return *(s16*)((char*)p + 0x19a); }
s16 fn_80113D98(void* p) { return *(s16*)((char*)p + 0x198); }
int fn_80113DA0(void* p) { return fn_8010EE40((char*)p + 0x198); }
int fn_80113DC4(void* p) { return fn_8010EE68((char*)p + 0x198); }
int fn_80113DE8(void* p) { return fn_8010EE7C((char*)p + 0x198); }
int fn_80113E0C(void* p) { return fn_8010EE54((char*)p + 0x198); }
int fn_80113E30(void) { return 0; }
void fn_80113E3C(void* p) { *(s8*)((char*)p + 0x0) = -32; }
int fn_80113E48(void) { return 0; }
u8 fn_80113E74(void* p) { return *(u8*)((char*)p + 0xe); }
s16 fn_80113E7C(void* p) { return *(s16*)((char*)p + 0x0); }
s16 fn_80113E84(void* p) { return *(s16*)((char*)p + 0x2); }
int fn_80113E8C(void) { return 0; }
int fn_80113E98(void) { return 0; }
int fn_80113EC8(void) { return 0; }
int fn_80113EDC(void) { return 0; }
f32 fn_80113EEC(void* p) { return *(f32*)((char*)p + 0x3c); }

}
