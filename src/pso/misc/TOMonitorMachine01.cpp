#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Mon_8017205C {
    u8 pad0[0x84];
    s32 f84;
    u8 pad88[0xAC - 0x88];
    s32 fAC;
    u8 padB0[0xCC - 0xB0];
    f32 fCC;
    f32 fD0;
    f32 fD4;
} Mon_8017205C;

struct Node_80172220 { u8 pad0[4]; s32 f4; u8 pad8[0x30 - 8]; Node_80172220 *next; };

struct NodeHead_80172220 { u8 pad[0x2C]; Node_80172220 *root; };

struct VBase_80172220 { char pad[0x18]; };

struct VObj_80172220 : VBase_80172220 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Mon_80172220 : VObj_80172220 {
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    NodeHead_80172220 *model;
    u8 pad38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x84 - 0x64];
    s32 f84;
    u8 pad88[0xC0 - 0x88];
    f32 fC0;
    f32 fC4;
    u8 padC8[0xCC - 0xC8];
    f32 fCC;
    f32 fD0;
};

extern "C" {
void TLobby__sub_8001FE7C(void *, s32);
extern s32 TOMonitorMachine01__data_8050DB68[];
extern s32 TOMonitorMachine01__data_805D5A5C;
extern void *TOMonitorMachine01__data_805D5A58;
void TOMonitorMachine01__sub_8017240C(void);
void scroll_ginja_mesh_uvs(s32, s32, s32, s32, s32);
extern s32 TOMonitorMachine01__data_8050DB68[];
extern s32 TOMonitorMachine01__data_805D5A5C;
extern s32 lbl_805D53A4;
extern const f32 lbl_805DB8F0;
extern const f32 lbl_805DB8F4;
extern const f32 TOMonitorMachine01__data_805DB8F8;
extern const f32 lbl_805DB8FC;
extern const f32 lbl_805DB900;
extern const f32 lbl_805DB904;
extern const f32 lbl_805DB908;
void run_task__18TOMonitorMachine01Fv(Mon_8017205C *self);
int rotate_matrix_y(int, int);
int TObjPlayer__sub_803D9B2C();
int pop_matrix();
int TOHangerMachine01__sub_803D9C00(void *);
int set_global_param__8TObjFishFi(int);
int TOSignCave03__sub_803DB510(int);
void translate_matrix(s32, f32, f32, f32);
void scale_matrix(s32, f32, f32, f32);
int begin_effect_render__13TParticleCtrlFv();
int end_effect_render__13TParticleCtrlFv();
extern const f32 lbl_805DB8F0;
extern const f32 TOMonitorMachine01__data_805DB8F8;
void render__18TOMonitorMachine01Fv(Mon_80172220 *self);
}

extern "C" {

void *__dt__18TOMonitorMachine01Fv(void *arg0, s16 arg1);
void *create__18TOMonitorMachine01FPv(void *arg0);
void *TOMonitorMachine01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

void run_task__18TOMonitorMachine01Fv(Mon_8017205C *self) {
    if (TOMonitorMachine01__data_805D5A5C != lbl_805D53A4) {
        TOMonitorMachine01__data_805D5A5C = lbl_805D53A4;
        scroll_ginja_mesh_uvs(TOMonitorMachine01__data_8050DB68[0], 1, 0, 1, 1);
        scroll_ginja_mesh_uvs(TOMonitorMachine01__data_8050DB68[1], 1, 0, 1, 1);
    }
    switch (self->fAC) {
    default:
        self->fD4 += lbl_805DB8F0;
        if (lbl_805DB8F4 <= self->fD4) {
            self->fAC = 1;
            self->fD4 = TOMonitorMachine01__data_805DB8F8;
            self->f84++;
            if (self->f84 >= 4) {
                self->f84 = 0;
            }
        }
        break;
    case 1:
        self->fCC += lbl_805DB8FC;
        self->fD0 += lbl_805DB900;
        if (lbl_805DB904 <= self->fCC) {
            self->fAC = 2;
            self->fCC = lbl_805DB904;
            self->fD0 = lbl_805DB8F0;
        }
        break;
    case 2:
        self->fD4 += lbl_805DB8F0;
        if (lbl_805DB908 <= self->fD4) {
            self->fAC = 3;
            self->fD4 = TOMonitorMachine01__data_805DB8F8;
        }
        break;
    case 3:
        self->fCC -= lbl_805DB8FC;
        self->fD0 -= lbl_805DB900;
        if (self->fCC <= TOMonitorMachine01__data_805DB8F8) {
            self->fAC = 0;
            self->fD0 = TOMonitorMachine01__data_805DB8F8;
            self->fCC = TOMonitorMachine01__data_805DB8F8;
        }
        break;
    }
}

void render__18TOMonitorMachine01Fv(Mon_80172220 *self) {
    Node_80172220 *n;
    if (self->m8(self->fC0, self->fC4) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((u8 *)self + 0x38);
        rotate_matrix_y(0, self->f60);
        set_global_param__8TObjFishFi(self->f24);
        n = self->model->root;
        TObjPlayer__sub_803D9B2C();
        translate_matrix(0, -self->fCC, 0.0f, 0.0f);
        TOSignCave03__sub_803DB510(n->f4);
        pop_matrix();
        begin_effect_render__13TParticleCtrlFv();
        n = n->next;
        if (self->f84 == 2) {
            TObjPlayer__sub_803D9B2C();
            scale_matrix(0, self->fD0, self->fD0, lbl_805DB8F0);
            TOSignCave03__sub_803DB510(n->f4);
            pop_matrix();
        }
        n = n->next;
        if (self->f84 == 1) {
            TObjPlayer__sub_803D9B2C();
            scale_matrix(0, self->fD0, self->fD0, lbl_805DB8F0);
            TOSignCave03__sub_803DB510(n->f4);
            pop_matrix();
        }
        end_effect_render__13TParticleCtrlFv();
        n = n->next;
        TObjPlayer__sub_803D9B2C();
        translate_matrix(0, self->fCC, TOMonitorMachine01__data_805DB8F8, TOMonitorMachine01__data_805DB8F8);
        TOSignCave03__sub_803DB510(n->f4);
        pop_matrix();
        begin_effect_render__13TParticleCtrlFv();
        n = n->next;
        if (self->f84 == 0) {
            TObjPlayer__sub_803D9B2C();
            scale_matrix(0, self->fD0, self->fD0, lbl_805DB8F0);
            TOSignCave03__sub_803DB510(n->f4);
            pop_matrix();
        }
        n = n->next;
        if (self->f84 == 3) {
            TObjPlayer__sub_803D9B2C();
            scale_matrix(0, self->fD0, self->fD0, lbl_805DB8F0);
            TOSignCave03__sub_803DB510(n->f4);
            pop_matrix();
        }
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void *create__18TOMonitorMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOMonitorMachine01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__18TOMonitorMachine01[];

void TOMonitorMachine01__sub_8017240C(void) {
    s32 i;
    TOMonitorMachine01__data_805D5A5C = 0;
    for (i = 0; i < 2; i++) {
        TOMonitorMachine01__data_8050DB68[i] = 0;
    }
    if (TOMonitorMachine01__data_805D5A58 != 0) {
        TLobby__sub_8001FE7C(TOMonitorMachine01__data_805D5A58, 1);
        TOMonitorMachine01__data_805D5A58 = 0;
    }
}

void *__dt__18TOMonitorMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOMonitorMachine01;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
