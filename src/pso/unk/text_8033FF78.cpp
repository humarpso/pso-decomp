#include "types.h"
struct O_80340040 { u8 pad[0x60]; void *o[10]; };

struct Vec_8033FF78 { f32 x, y, z; };

struct O_8033FF78 { u8 pad[0x24]; s32 f24; u8 pad28[0x40 - 0x28]; Vec_8033FF78 pos; };

struct P_8033FF78 { u8 pad[0x38]; Vec_8033FF78 pos; };

struct Vec_8034009C { f32 x, y, z; };

struct E_8034009C { Vec_8034009C a; Vec_8034009C b; s32 f18; };

struct P_8034009C {
    u8 pad0[0xC];
    Vec_8034009C a;
    s32 f18;
    s32 f1c;
    s32 f20;
    Vec_8034009C b;
    s32 f30;
    s32 f34;
};

struct O_8034009C { u8 pad[0x60]; void *o[10]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void fn_80340040(O_80340040 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
P_8033FF78 *get_player_data__10TObjPlayerFi(int);
s32 get_game_mode__6TLobbyFv();
s32 is_active__14TBoss6PlotFalzFPv(void *);
f32 vector_length(void *);
s32 subtract_vector(void *, void *);
extern const f32 lbl_805DFAF8;
extern const f32 lbl_805DFB10;
void check_any_player_near(O_8033FF78 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 create__10TObjMapCsnFi(void *);
extern E_8034009C lbl_8047843C[];
void fn_8034009C(O_8034009C *arg0);
}

extern "C" {

void check_any_player_near(O_8033FF78 *arg0) {
    Vec_8033FF78 v;
    s32 n;
    s32 i;
    f32 lim;
    f32 y;
    P_8033FF78 *p;
    arg0->f24 = 0;
    n = get_game_mode__6TLobbyFv();
    y = lbl_805DFAF8;
    lim = lbl_805DFB10;
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv(p) != 0) {
            VecCopy__FP3VecPC3Vec(&v, &arg0->pos);
            subtract_vector(&v, &p->pos);
            v.y = y;
            if (vector_length(&v) <= lim) {
                arg0->f24 = 1;
                return;
            }
        }
    }
}

void fn_80340040(O_80340040 *arg0) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (arg0->o[i] != 0) {
            queue_destruction__7TObjectFv(arg0->o[i]);
            arg0->o[i] = 0;
        }
    }
}
void fn_8034009C(O_8034009C *arg0) {
    P_8034009C prm;
    s32 i;
    s32 j;
    for (j = 0; j < 10; j++) {
        arg0->o[j] = 0;
    }
    prm.f30 = 2;
    prm.f34 = 0;
    for (i = 0; i < 10; i++) {
        E_8034009C *e = &lbl_8047843C[i];
        VecCopy__FP3VecPC3Vec(&prm.a, &e->a);
        prm.f18 = 0;
        prm.f1c = e->f18;
        prm.f20 = 0;
        VecCopy__FP3VecPC3Vec(&prm.b, &e->b);
        arg0->o[i] = (void *)create__10TObjMapCsnFi(&prm);
    }
}

}
