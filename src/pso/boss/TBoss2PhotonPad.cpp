#include "pso/TBoss2PhotonPad.h"

TBoss2PhotonPad::~TBoss2PhotonPad() {}

#include "types.h"

struct Rec_80039288 { s32 a, b, c, d; };

struct S_80039288 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1c;
    u8 v20[8];
    u8 v28[4];
    s32 f2c, f30, f34;
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TObjBoss2Tunnel__sub_8007E7D8(void *, void *, s32);
extern Rec_80039288 lbl_80435B08[];
extern u8 __vt__15TBoss2PhotonPad[];
extern s32 lbl_805D26D8;
S_80039288 *__ct__15TBoss2PhotonPadFv(S_80039288 *o, void *parent, s32 arg2, void *arg3, s32 arg4);
}

extern "C" {

void render__15TBoss2PhotonPadFv(void);

void render__15TBoss2PhotonPadFv(void) {  }
S_80039288 *__ct__15TBoss2PhotonPadFv(S_80039288 *o, void *parent, s32 arg2, void *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(o, parent);
    o->vt = __vt__15TBoss2PhotonPad;
    o->f0 = lbl_805D26D8;
    o->f1c = arg2;
    o->f2c = arg4;
    VecCopy__FP3VecPC3Vec(o->v20, arg3);
    TObjBoss2Tunnel__sub_8007E7D8(o->v20, o->v28, -(lbl_80435B08[o->f2c].c / 2));
    o->f30 = lbl_80435B08[o->f2c].a;
    o->f34 = 0;
    return o;
}

}
