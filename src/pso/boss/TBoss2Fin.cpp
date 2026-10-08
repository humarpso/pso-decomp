#include "pso/TBoss2Fin.h"

TBoss2Fin::~TBoss2Fin() {}

#include "types.h"

struct E_800367C4 { s8 type; f32 a; f32 b; f32 c; s32 d; s32 e; };

struct In_800367C4 { u8 pad[0x8]; s32 f8; u8 pad2[0xC]; s32 f18; };

struct G_800367C4 { u8 pad[0x42c]; In_800367C4 *in; };

struct Rec_80036718 { f32 a, b, c, d; };

struct Obj_80036718 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0x30 - 0x1C];
    u8 f30[0x20];
    Rec_80036718 recs[3];
    s32 f80;
    s32 f84;
};

extern "C" {
extern E_800367C4 lbl_804FE590[];
extern G_800367C4 *lbl_805D4BA4;
extern const f32 TBoss2Fin__data_805D8450;
extern const f32 lbl_805D8460;
void TBoss2Fin__sub_800367C4(void);
void init_link_points__9TBoss2FinFPv(void *);
void fn_800FF8CC(void *, void *, void *, void *);
void *TObjEZRopeBase__ct(void *);
extern u8 __vt__9TBoss2Fin[];
extern E_800367C4 lbl_804FE590[];
extern s32 lbl_805D26B8;
extern const f32 TBoss2Fin__data_805D8450;
extern const f32 lbl_805D8454;
extern const f32 lbl_805D845C;
Obj_80036718 *__ct__9TBoss2FinFv(Obj_80036718 *self, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TBoss2Fin__sub_800367C0(void);

Obj_80036718 *__ct__9TBoss2FinFv(Obj_80036718 *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    Rec_80036718 *p;
    TObjEZRopeBase__ct(self);
    self->vt = __vt__9TBoss2Fin;
    self->f0 = lbl_805D26B8;
    self->f80 = arg2;
    self->f84 = arg3;
    p = self->recs;
    for (i = 0; i < 2; i++, p++) {
        p->a = lbl_805D845C;
        p->b = TBoss2Fin__data_805D8450;
        p->c = TBoss2Fin__data_805D8450;
        p->d = TBoss2Fin__data_805D8450;
    }
    p->a = lbl_805D8454;
    init_link_points__9TBoss2FinFPv(self);
    fn_800FF8CC(self, ((u8 *)&lbl_804FE590), self->f30, self->recs);
    return self;
}

void TBoss2Fin__sub_800367C0(void) {  }
void TBoss2Fin__sub_800367C4(void) {
    E_800367C4 *p = lbl_804FE590;
    s32 i;
    for (i = 0; i < 2; i++) {
        p->type = 6;
        p->a = TBoss2Fin__data_805D8450;
        p->b = TBoss2Fin__data_805D8450;
        p->c = lbl_805D8460;
        p->d = lbl_805D4BA4->in->f18;
        p->e = lbl_805D4BA4->in->f8;
        p++;
    }
    p->type = -1;
}

}
