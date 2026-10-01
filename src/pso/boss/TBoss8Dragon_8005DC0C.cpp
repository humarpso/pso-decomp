#include "types.h"
struct V_8005DC0C { f32 x, y, z; };

struct Obj_8005DC0C {
    u8 pad0[0x326];
    s16 f326;
    u8 pad328[0x3C0 - 0x328];
    V_8005DC0C pts[8];
    u8 pad420[0x4E4 - 0x420];
    s32 f4e4;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_bit6__12TBoss8DragonFPv();
s32 TBoss8Dragon__sub_8005E1E8(void *, void *, f32);
void TCameraCtrl__sub_80069094(s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
u8 *TPhotonMylla__sub_80154CB4();
void TBoss6Type1__sub_803D9370(void *, void *);
extern s32 lbl_80437E94[];
extern u8 lbl_804FF5CC[];
extern u8 lbl_804FF5D8[];
extern f32 lbl_805D4DC0;
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D80;
s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0);
}

extern "C" {

s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0) {
    V_8005DC0C cam;
    V_8005DC0C dir;
    f32 len;
    u8 *pl;
    s32 i;
    if (lbl_805D4DF0 == 0) {
        return 0;
    }
    if (arg0->f326 == 4) {
        return 0;
    }
    if (get_flag_bit6__12TBoss8DragonFPv() != 0) {
        return 0;
    }
    if (arg0->f4e4 != 0) {
        return 0;
    }
    TCameraCtrl__sub_80069094(-1);
    pl = TPhotonMylla__sub_80154CB4();
    if (pl == 0) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&cam, lbl_805D4DF0 + 0x178);
    cam.y = lbl_805D8D5C;
    VecCopy__FP3VecPC3Vec(&dir, pl + 0x38);
    TBoss6Type1__sub_803D9370(&dir, &cam);
    dir.y = lbl_805D8D5C;
    len = clamp_velocity__15TObjBoss2TunnelFPv(&dir);
    VecCopy__FP3VecPC3Vec(lbl_804FF5CC, &cam);
    VecCopy__FP3VecPC3Vec(lbl_804FF5D8, &dir);
    lbl_805D4DC0 = len;
    for (i = 0; i < 4; i++) {
        if (TBoss8Dragon__sub_8005E1E8(arg0, &arg0->pts[lbl_80437E94[i]], lbl_805D8D80) != 0) {
            return 1;
        }
    }
    return 0;
}

}
