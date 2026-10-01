#include "types.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_8017D448 { f32 x, y, z; };

struct Arr_8017D448 { Vec_8017D448 v[9]; };

struct Param_8017D448 {
    s32 f0;
    s32 f4;
    s32 f8;
    Vec_8017D448 pos;
    u8 pad18[0x20];
    f32 f38;
    s32 f3c;
    s32 f40;
    s32 f44;
    s32 f48;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_8017D448 *, Vec_8017D448 *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 TObjFish__sub_8001EDC4(void *, int);
void TObjChip__sub_80180BD4(void *, s32, Param_8017D448 *);
void *__nw__7TObjectFUl(u32);
void TBoss4Zako__sub_803D8910(Vec_8017D448 *, Vec_8017D448 *);
void TScene__sub_803D8DB4(int, Vec_8017D448 *, Vec_8017D448 *);
void TObjPlayer__sub_803D9214(int, int);
void TObjPlayer__sub_803D97F0(void *);
void TObjPlayer__sub_803D9B78(void);
extern Arr_8017D448 lbl_8044355C;
extern Param_8017D448 lbl_804435C8;
extern u8 lbl_8058D490[];
extern void *lbl_805D5AFC;
extern s32 tl_05;
void TOWreckAncientBrakable__sub_8017D448(u8 *arg0);
}

extern "C" {

void TOWreckAncientBrakable__sub_8017D444(void);

void TOWreckAncientBrakable__sub_8017D444(void) {  }
void TOWreckAncientBrakable__sub_8017D448(u8 *arg0) {
    Vec_8017D448 tmp;
    Arr_8017D448 arr = lbl_8044355C;
    Param_8017D448 p = lbl_804435C8;
    s32 i;
    void *obj;
    p.pos.x = *(f32 *)(arg0 + 0x38);
    p.pos.y = *(f32 *)(arg0 + 0x3C);
    p.pos.z = *(f32 *)(arg0 + 0x40);
    p.f38 = p.pos.y;
    for (i = 0; i < 9; i++) {
        VecCopy__FP3VecPC3Vec(&tmp, &arr.v[i]);
        TObjPlayer__sub_803D97F0(lbl_8058D490);
        TObjPlayer__sub_803D9214(0, *(s32 *)(arg0 + 0x60));
        TScene__sub_803D8DB4(0, &tmp, &tmp);
        TObjPlayer__sub_803D9B78();
        VecCopy__FP3VecPC3Vec(&p.pos, (Vec_8017D448 *)(arg0 + 0x38));
        TBoss4Zako__sub_803D8910(&p.pos, &tmp);
        p.f40 = TObjFish__sub_8001EDC4(lbl_805D5AFC, i);
        p.f44 = TObjFish__sub_8001EDB0(lbl_805D5AFC, i);
        obj = __nw__7TObjectFUl(0x234);
        if (obj != 0) {
            TObjChip__sub_80180BD4(obj, tl_05, &p);
        }
    }
}

}
