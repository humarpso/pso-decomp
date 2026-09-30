#include "types.h"
struct Entry_800E31C4 { s32 id; u8 data[0xC]; };

struct Vec_800E31C4 { f32 x; f32 y; f32 z; };

struct Obj_800E31C4 { Entry_800E31C4 *list; Vec_800E31C4 *vecs; };

struct Base_800E32C0 { u8 pad[0x18]; };

struct Pair_800E32C0 { s32 a; f32 b; };

struct V_800E32C0 : Base_800E32C0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual f32 m21(s32, void *, s32, s32, s32);
    virtual void v22();
    virtual void m23(void *);
};

struct Obj_800E32C0 { u8 pad0[0x10]; s32 f10; u8 pad1[0x388-0x14]; V_800E32C0 *f388; f32 f38C; };

struct Base_800E3374 { u8 pad[0x18]; };

struct Pair_800E3374 { s32 a; f32 b; };

struct V_800E3374 : Base_800E3374 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual f32 m21(s32, void *, s32, s32, s32);
    virtual void v22();
    virtual void m23(void *);
};

struct Obj_800E3374 { u8 pad0[0x10]; s32 f10; u8 pad1[0x384-0x14]; V_800E3374 *f384; u8 pad2[4]; f32 f38C; };

struct Vec_800E35C8 { f32 x, y, z; };

struct Obj_800E35C8 { u8 pad0[0x38]; Vec_800E35C8 pos; u8 pad1[0x378 - 0x44]; f32 f378; };

struct Player_800E35C8 { u8 pad0[0x30]; u32 f30; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern Vec_800E31C4 lbl_80495A88;
Obj_800E31C4 *fn_800E31C4(Obj_800E31C4 *self, Entry_800E31C4 *list, Vec_800E31C4 *vecs);
extern Pair_800E32C0 lbl_8043CDF8[];
extern const f32 lbl_805DA5A0;
void fn_800E32C0(Obj_800E32C0 *arg0, V_800E32C0 *arg1);
extern Pair_800E3374 lbl_8043CDF0[];
extern const f32 lbl_805DA5A0;
void fn_800E3374(Obj_800E3374 *arg0, V_800E3374 *arg1);
Player_800E35C8 *get_player_data__10TObjPlayerFi(s32);
void fn_800E322C(void *, void *);
void fn_800E3374(Obj_800E3374 *arg0, V_800E3374 *arg1);
f32 TObjPlayer__sub_80141CF8(void *, void *);
extern s32 lbl_805D586C;
void fn_800E35C8(Obj_800E35C8 *arg0);
}

extern "C" {

Obj_800E31C4 *fn_800E31C4(Obj_800E31C4 *self, Entry_800E31C4 *list, Vec_800E31C4 *vecs) {
    Entry_800E31C4 *p;
    Vec_800E31C4 *q;
    self->list = list;
    self->vecs = vecs;
    p = self->list;
    q = self->vecs;
    while (p->id != -1) {
        VecCopy__FP3VecPC3Vec(q, &lbl_80495A88);
        p++;
        q++;
    }
    return self;
}
void fn_800E32C0(Obj_800E32C0 *arg0, V_800E32C0 *arg1) {
    Pair_800E32C0 sp10 = lbl_8043CDF8[0];
    Pair_800E32C0 sp8;
    sp10.b = arg0->f38C;
    if (arg0->f388 != arg1) {
        sp8.a = sp10.a; *(s32 *)&sp8.b = *(s32 *)&sp10.b;
        if (lbl_805DA5A0 != arg1->m21(arg0->f10, &sp8, 0, -1, -1)) {
            arg1->m23(arg0);
        }
        arg0->f388 = arg1;
    }
}
void fn_800E3374(Obj_800E3374 *arg0, V_800E3374 *arg1) {
    Pair_800E3374 sp10 = lbl_8043CDF0[0];
    Pair_800E3374 sp8;
    sp10.b = arg0->f38C;
    if (arg0->f384 != arg1) {
        sp8.a = sp10.a; *(s32 *)&sp8.b = *(s32 *)&sp10.b;
        if (lbl_805DA5A0 != arg1->m21(arg0->f10, &sp8, 0, -1, -1)) {
            arg1->m23(arg0);
        }
        arg0->f384 = arg1;
    }
}
void fn_800E35C8(Obj_800E35C8 *arg0) {
    s32 i;
    Player_800E35C8 *p;
    f32 lim = arg0->f378 * arg0->f378;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && !(p->f30 & 0x02000A00) && !(TObjPlayer__sub_80141CF8(&arg0->pos, (u8 *) p + 0x2FC) > lim)) {
            fn_800E3374((Obj_800E3374 *)(arg0), (V_800E3374 *)(p));
        }
    }
    fn_800E322C(arg0, &arg0->pos);
}

}
