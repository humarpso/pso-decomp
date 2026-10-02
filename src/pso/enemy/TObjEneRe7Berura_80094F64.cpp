#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8009518C { u8 pad[0x3f4]; s32 idx; u8 pad2[0x418 - 0x3f8]; u32 flags[1]; };

typedef s32 M2C_UNK;
struct Node_8009503C {
    u32 flags;
    u8 pad4[0x2C - 0x4];
    struct Node_8009503C *child;
    struct Node_8009503C *next;
};

struct Mtx_8009503C { f32 m[3][4]; };

struct Vec_800951AC { f32 x, y, z; };

struct Player_800951AC {
    u8 pad0[0x38];
    Vec_800951AC pos38;
    u8 pad44[0x2FC - 0x44];
    Vec_800951AC pos;
};

struct Berura_800951AC {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x2FC - 0x64];
    Vec_800951AC pos;
};

extern "C" {
u8 TObjEneRe7Berura__sub_8009518C(O_8009518C *self);
s32 TObjPlayer__sub_803D7CA4(int);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
void TObjPlayer__sub_803D898C(void *);
void TObjPlayer__sub_803D9324(int, void *);
void translate_matrix(s32, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9730(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D97F0(void *, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
extern M2C_UNK lbl_8058D490[];
extern s32 lbl_805D4F90;
extern s32 lbl_805D4F94;
extern s32 TObjEneRe7Berura__data_805D4F98;
extern s32 lbl_805D4F9C;
extern const f32 TObjEneRe7Berura__data_805D972C;
extern const f32 TObjEneRe7Berura__data_805D9764;
extern const f32 lbl_805D9774;
M2C_UNK TObjEneRe7Berura__sub_8009503C(void *arg0, int idx);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Player_800951AC *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv();
u32 csnLookAt(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);
s32 is_alive__9TObjEneDDFPv(void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 TObjEneRe7Berura__data_805D9724;
extern const f32 TObjEneRe7Berura__data_805D972C;
s32 TObjEneRe7Berura__sub_800951AC(Berura_800951AC *self);
}

extern "C" {

void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1);
void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0);
M2C_UNK TObjPlayer__sub_803D9730(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D97F0(void *, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TObjPlayer__sub_803E4684(s32);

extern s32 TObjEneRe7Berura__data_805D4F98;

void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;
    void *var_r30;

    var_r30 = arg0;
    do {
        TObjPlayer__sub_803D9B2C();
        temp_r4 = TObjEneRe7Berura__data_805D4F98;
        TObjEneRe7Berura__data_805D4F98 = temp_r4 + 0x30;
        TObjPlayer__sub_803D9730(0, temp_r4);
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        if (!(temp_r31 & 8)) {
            TObjPlayer__sub_803E4684(M2C_FIELD(var_r30, s32 *, 4));
        }
        pop_matrix();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__16TObjEneRe7BeruraFPv((void *)(M2C_FIELD(var_r30, void **, 0x2C)));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0x30);
    } while (var_r30 != NULL);
}

extern M2C_UNK lbl_8058D490[];
extern s32 lbl_805D4F90;
extern s32 lbl_805D4F94;
extern s32 TObjEneRe7Berura__data_805D4F98;
extern s32 lbl_805D4F9C;

void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    TObjEneRe7Berura__data_805D4F98 = temp_r6;
    temp_r5 = M2C_FIELD(arg1, s32 *, 4);
    lbl_805D4F90 = temp_r5;
    temp_r4 = M2C_FIELD(arg1, s32 *, 8);
    lbl_805D4F94 = temp_r4;
    lbl_805D4F9C = (long) (arg1 + 0x58);
    TObjPlayer__sub_803D97F0((void *) (lbl_8058D490), (int) (temp_r4), (int) (temp_r5), (int) (temp_r6));
    TObjEneRe7Berura__sub_8009503C((void *)((void *) (arg0)), (int)((int) (0)));
    pop_matrix();
}

#define V ((f32 *)lbl_805D4F9C)
#define node ((Node_8009503C *)arg0)
M2C_UNK TObjEneRe7Berura__sub_8009503C(void *arg0, int idx) {
    Mtx_8009503C m;
    u32 flags;
    do {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D7CA4((int)node);
        flags = node->flags;
        if (idx == lbl_805D4F90) {
            V[0] = TObjEneRe7Berura__data_805D972C;
            V[1] = TObjEneRe7Berura__data_805D972C;
            V[2] = TObjEneRe7Berura__data_805D972C;
            TCameraCtrl__sub_803D8934(0, V, V);
            V[1] = V[1] + lbl_805D9774;
            V[2] = V[2] + TObjEneRe7Berura__data_805D9764;
            TObjPlayer__sub_803D898C(&m);
            ((M2C_UNK (*)(void *))TObjPlayer__sub_803D97F0)(lbl_8058D490);
            translate_matrix(0, -V[0], -V[1], -V[2]);
            ((M2C_UNK (*)(M2C_UNK, void *))TObjPlayer__sub_803D9730)(0, &m);
            TObjPlayer__sub_803D898C(&m);
            pop_matrix();
            TObjPlayer__sub_803D9324(0, &m);
        }
        if (idx >= lbl_805D4F90 && idx <= lbl_805D4F94) {
            s32 p = TObjEneRe7Berura__data_805D4F98;
            TObjEneRe7Berura__data_805D4F98 = p + 0x30;
            TObjPlayer__sub_803D898C((void *)p);
        }
        idx++;
        if (!(flags & 0x10)) {
            idx = TObjEneRe7Berura__sub_8009503C(node->child, idx);
        }
        pop_matrix();
        arg0 = node->next;
    } while (arg0 != NULL);
    return idx;
}

u8 TObjEneRe7Berura__sub_8009518C(O_8009518C *self) {
    return !(self->flags[self->idx] & 2);
}
#pragma fp_contract on
s32 TObjEneRe7Berura__sub_800951AC(Berura_800951AC *self) {
    Vec_800951AC v;
    s32 n;
    Player_800951AC *p;
    u16 id;
    s32 i;
    f32 c;
    f32 s;
    f32 limit;
    f32 d;
    f32 best;
    best = TObjEneRe7Berura__data_805D972C;
    id = 0xFFFF;
    limit = TBoss8Dragon__sub_803D64DC(0xAAA);
    s = TBoss8Dragon__sub_803D64C0(self->angle);
    c = TBoss8Dragon__sub_803D64DC(self->angle);
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_alive__9TObjEneDDFPv(p) != 0) {
            VecCopy__FP3VecPC3Vec(&v, &p->pos38);
            TBoss6Type1__sub_803D9370(&v, &self->pos);
            v.y = TObjEneRe7Berura__data_805D972C;
            d = clamp_velocity__15TObjBoss2TunnelFPv(&v);
            if (d < TObjEneRe7Berura__data_805D9724 && d > best &&
                s * v.x + c * v.z > limit &&
                csnLookAt(&self->pos, &p->pos) == 0) {
                id = obj_getField1c(p);
                best = d;
            }
        }
    }
    if (id != 0xFFFF) {
        TBoss8Dragon__sub_800B9958(self, id);
        return 1;
    }
    return 0;
}

}
