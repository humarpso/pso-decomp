#include "types.h"

extern "C" {

int TItemMagSub__sub_80113D84(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 TObjPlayer__sub_80113D98(void* p);
int fn_80113DA0(void* p);
int fn_80113DC4(void* p);
int fn_80113DE8(void* p);
int fn_80113E0C(void* p);
void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int is_feed_empty__8TItemMagFPv(void* p);
int TItemMag__sub_80113E30(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
s16 TItemMag__sub_80113E7C(void* p);
s16 TItemMag__sub_80113E84(void* p);
int TItemMag__sub_80113E8C(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int TItemData__sub_8010EE40(void*);
int TItemData__sub_8010EE54(void*);
int TItemData__sub_8010EE68(void*);
int TItemData__sub_8010EE7C(void*);

int TItemMagSub__sub_80113D84(void* p, u32 m) { return *(u32*)((char*)p + 0x64) & m; }
s16 TObjPlayer__sub_80113D90(void* p) { return *(s16*)((char*)p + 0x19a); }
s16 TObjPlayer__sub_80113D98(void* p) { return *(s16*)((char*)p + 0x198); }
int fn_80113DA0(void* p) { return TItemData__sub_8010EE40((char*)p + 0x198); }
int fn_80113DC4(void* p) { return TItemData__sub_8010EE68((char*)p + 0x198); }
int fn_80113DE8(void* p) { return TItemData__sub_8010EE7C((char*)p + 0x198); }
int fn_80113E0C(void* p) { return TItemData__sub_8010EE54((char*)p + 0x198); }

}
