#include "pso/TBoss2PhotonPad.h"

TBoss2PhotonPad::~TBoss2PhotonPad() {}

#include "types.h"

struct Rec_80039288 { s32 a, b, c; f32 d; };

typedef struct Pad_80039140 {
    u8 pad0[0x10];
    void *parent;
    u8 pad14[8];
    s32 unk1C;
    u8 pos[8];
    u8 unk28[4];
    s32 level;
    s32 shots;
    s32 timer;
} Pad_80039140;

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
void queue_destruction__7TObjectFv(void *);
void *get_instance__13TBoss2DeRolLeFv(void);
void *TBoss2PhotonBullet__ct(void *, void *, void *, s32, void *, f32);
void *__nw__7TObjectFUl(u32);
extern const f32 lbl_805D8524;
void run_task__15TBoss2PhotonPadFv(Pad_80039140 *self);
S_80039288 *__ct__15TBoss2PhotonPadFv(S_80039288 *o, void *parent, s32 arg2, void *arg3, s32 arg4);
}

extern "C" {

void render__15TBoss2PhotonPadFv(void);

void render__15TBoss2PhotonPadFv(void) {  }
void run_task__15TBoss2PhotonPadFv(Pad_80039140 *self) {
    void *inst;
    void *p;

    self->timer--;
    if (self->timer <= 0) {
        inst = get_instance__13TBoss2DeRolLeFv();
        if (inst != NULL) {
            p = __nw__7TObjectFUl(0xE8);
            if (p != NULL) {
                TBoss2PhotonBullet__ct(p, self->parent, inst, self->unk1C, self->pos, lbl_805D8524 * lbl_80435B08[self->level].d);
            }
        }
        self->timer = lbl_80435B08[self->level].b;
        TObjBoss2Tunnel__sub_8007E7D8(self->pos, self->unk28, lbl_80435B08[self->level].c / lbl_80435B08[self->level].a);
        self->shots--;
        if (self->shots == 0) {
            queue_destruction__7TObjectFv(self);
        }
    }
}
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
