#include "types.h"
typedef struct Vec_802FB304 { f32 x, y, z; } Vec_802FB304;

typedef struct Eff_802FB304 { s32 a; s32 b; f32 f; s32 c; s32 d; } Eff_802FB304;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss1Dragon__sub_80027A80(void *, void *);
void fn_8002B094(s32);
void reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
void emit_effect__12TBoss8DragonFPv(void *, void *, void *, s32);
extern u8 TBoss8Dragon__data_804744C8[];
extern s32 TBoss8Dragon__data_80541DC8[];
extern const f32 TBoss8Dragon__data_805DED64;
extern const f32 lbl_805DEE0C;
extern const f32 lbl_805DEE50;
void TBoss8Dragon__sub_802FB304(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_802FB304(u8 *arg0) {
    Vec_802FB304 *pts[10];
    Eff_802FB304 e;
    Vec_802FB304 v;
    s32 i;
    reset_hp__9TObjEneDDFPv(arg0, 0, TBoss8Dragon__data_80541DC8[4], 0);
    fn_8002B094(*(s32 *)(arg0 + 0x680));
    TBoss1Dragon__sub_80027A80(&e, TBoss8Dragon__data_804744C8);
    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x4C4);
    e.f = lbl_805DEE0C;
    emit_effect__12TBoss8DragonFPv(arg0, &v, &e, *(s32 *)(arg0 + 0x680));
    e.f = TBoss8Dragon__data_805DED64;
    pts[0] = (Vec_802FB304 *)(arg0 + 0x488);
    pts[1] = (Vec_802FB304 *)(arg0 + 0x4A0);
    for (i = 0; i < 2; i++) {
        emit_effect__12TBoss8DragonFPv(arg0, pts[i], &e, *(s32 *)(arg0 + 0x680));
    }
    e.f = lbl_805DEE50;
    pts[0] = (Vec_802FB304 *)(arg0 + 0x4DC);
    pts[1] = (Vec_802FB304 *)(arg0 + 0x4E8);
    pts[2] = (Vec_802FB304 *)(arg0 + 0x4F4);
    pts[3] = (Vec_802FB304 *)(arg0 + 0x500);
    for (i = 0; i < 4; i++) {
        emit_effect__12TBoss8DragonFPv(arg0, pts[i], &e, *(s32 *)(arg0 + 0x680));
    }
    reset_hp__9TObjEneDDFPv(arg0, 0, TBoss8Dragon__data_80541DC8[0], 0);
}

}
