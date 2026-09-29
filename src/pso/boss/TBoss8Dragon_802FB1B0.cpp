#include "types.h"
struct S_802FB290 { u32 a; f32 b; f32 c; u32 d; u32 e; };

struct F3_802FB290 { f32 f[3]; };

struct G_802FB290 { F3_802FB290 *value; u8 rest[8]; };

extern "C" {
s32 setup_instance__12TBoss8DragonFPv(void *, int, void *, int);
extern S_802FB290 lbl_80474AB8;
extern G_802FB290 TBoss8Dragon__data_80541DDC;
void TBoss8Dragon__sub_802FB290(void *o, int x, u32 a, int w);
}

extern "C" {

void TBoss8Dragon__sub_802FB290(void *o, int x, u32 a, int w) {
    S_802FB290 s = lbl_80474AB8;
    s.b = TBoss8Dragon__data_80541DDC.value->f[0];
    s.a = a;
    setup_instance__12TBoss8DragonFPv(o, x, &s, w);
}

}
