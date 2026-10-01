#include "types.h"
struct Q_802C2958 { s32 a; s32 b; s32 c; s32 d; };

struct Obj_802C2958 { u8 pad[0x430]; s32 f430; };

struct Vec_802C2C48 { f32 x, y, z; };

struct Entry_802C2C48 { s32 a; s32 b; s32 c; f32 d; s32 e; };

struct Obj_802C2C48 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C2C48 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

extern "C" {
extern u8 lbl_80471838[];
extern u8 lbl_804719B8[];
extern u8 lbl_804E07C4[];
extern Obj_802C2958 *lbl_805D6798;
extern s32 lbl_805D679C;
extern const f32 lbl_805DE51C;
extern const f32 lbl_805DE520;
Obj_802C2958 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Obj_802C2958 *TLobby__sub_80020004(Obj_802C2958 *, s32, void *, s32, s32, s32);
s32 TLanguage__sub_801E4874(void *);
s32 TObjFish__sub_8001EDC4(void *, s32, s32, s32, s32, void *);
void spawn_npc_enemy__6TLobbyFsiiiff(s32, s32, s32, void *, f32, f32);
void TObjPlayer__sub_802C2958(void);
void VecCopy__FP3VecPC3Vec(Vec_802C2C48 *, Vec_802C2C48 *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void TBoss1Dragon__sub_8014220C(Vec_802C2C48 *, s32 *, s32 *);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *, s32, s32, Vec_802C2C48 *, f32);
f32 TBoss6Type1__sub_803D9370(Vec_802C2C48 *, Vec_802C2C48 *);
extern Entry_802C2C48 lbl_804717D4[];
extern const f64 lbl_80471960[];
extern const f32 lbl_805DE4F8;
s32 TObjPlayer__sub_802C2C48(Obj_802C2C48 *self);
}

extern "C" {

void TObjPlayer__sub_802C2958(void) {
    Obj_802C2958 *o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != 0) {
        o = TLobby__sub_80020004(o, 5, lbl_804E07C4, 0, 0, 0);
    }
    lbl_805D6798 = o;
    lbl_805D679C = TLanguage__sub_801E4874(lbl_804719B8);
    Q_802C2958 q = *(Q_802C2958 *)lbl_80471838;
    q.a = lbl_805D6798->f430;
    spawn_npc_enemy__6TLobbyFsiiiff(0x40, TObjFish__sub_8001EDC4(lbl_805D6798, 0, ((Q_802C2958 *)lbl_80471838)->c, ((Q_802C2958 *)lbl_80471838)->b, ((Q_802C2958 *)lbl_80471838)->a, lbl_80471838), lbl_805D679C, &q, lbl_805DE51C, lbl_805DE520);
}
s32 TObjPlayer__sub_802C2C48(Obj_802C2C48 *self) {
    Vec_802C2C48 a;
    Vec_802C2C48 b;
    Vec_802C2C48 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = clamp_value_to_max__10TObjPlayerFPviPvif(self, self->f98, self->fA0, &b, lbl_804717D4[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    TBoss6Type1__sub_803D9370(&d, &a);
    TBoss1Dragon__sub_8014220C(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

}
