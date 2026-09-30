#include "types.h"

struct Ent_802BA7BC { s32 idx; s32 arg; f32 lo; };

extern "C" {
void TBoss6Type2__sub_802B9BBC(void *, int);
void TBoss6Type2__sub_802B9C00(void *, int);
extern Ent_802BA7BC lbl_80471360[];
extern const f32 lbl_805DE440;
void TBoss6Type2__sub_802BA7BC(u8 *o);
}

extern "C" {

void TBoss6Type2__sub_802BA7B0(void* p);

void TBoss6Type2__sub_802BA7B0(void* p) { *(s32*)((char*)p + 0x520) = -1; }
void TBoss6Type2__sub_802BA7BC(u8 *o) {
    f32 k = lbl_805DE440;
    s32 i = 0;
    do {
        Ent_802BA7BC *e = &lbl_80471360[i];
        f32 lo = e->lo;
        f32 v = *(f32 *)(o + e->idx * 0xC + 0x5A0);
        if (v < lo || v > k + lo) {
            TBoss6Type2__sub_802B9BBC(o, e->arg);
        } else {
            TBoss6Type2__sub_802B9C00(o, e->arg);
        }
        i++;
    } while (i < 6);
}

}
