#include "types.h"
typedef struct Msg_801BAA6C {
    u8 pad0[2];
    u16 slot;
    s32 floor;
} Msg_801BAA6C;

struct Msg_801BAB1C { u16 cmd; u16 id; s32 value; u8 pad8[8]; };

struct Vec_801BAB78 { f32 x, y, z; };

struct VBase_801BAB78 { char pad[0x18]; };

struct VObj_801BAB78 : VBase_801BAB78 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
    virtual void m63(s32, Vec_801BAB78 *);
    u8 pad1c[0x3C - 0x1C];
    f32 f3c;
    u8 pad40[0x60 - 0x40];
    s32 f60;
    u8 pad64[0x248 - 0x64];
    u8 f248[4];
};

extern "C" {
s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
void TObjPlayer__sub_801C1890(void *m);
s32 get_field_3e4__10TObjPlayerFPv(void *);
void set_state_flags__10TObjPlayerFPvUi(void *, u32);
void *get_player_by_client_id(u16);
void set_floor__10TObjPlayerFPvi(void *, s32);
void set_floor_index__10TObjPlayerFPvi(void *, s32);
void TObjPlayer__sub_801C1820(void *);
void copy_warp_target__10TObjPlayerFPvPv(void *, void *);
s32 get_player_floor__6TLobbyFi(s32);
s32 validate_6x21_inter_level_warp(void *);
void handle_6x21_inter_level_warp(void *arg0);
void TObjPlayer__sub_801C18AC(Msg_801BAB1C *m);
void TTecLuker__sub_801BAB1C(void *obj, s32 value);
void TObjPlayer__sub_800F09E8(s32);
void direction_to_rotation_xz(void *, void *, void *);
void scale_matrix(int, f32, f32, f32);
void rotate_matrix_y(int, s32);
void rotate_matrix_z(int, s32);
void translate_matrix(int, f32, f32, f32);
void rotate_matrix_x(int, s32);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
extern const f32 TObjPlayer__data_805DC294;
extern const f32 lbl_805DC2C8;
void TObjPlayer__sub_801BAB78(VObj_801BAB78 *self, f32 *pos, s32 arg2);
}

extern "C" {

void handle_6x21_inter_level_warp(void *arg0) {
    Msg_801BAA6C m;
    void *p;

    TObjPlayer__sub_801C1890(&m);
    copy_warp_target__10TObjPlayerFPvPv(&m, arg0);
    TObjPlayer__sub_801C1820(&m);
    if (validate_6x21_inter_level_warp(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if (p != NULL) {
            if ((((s32 (*)(void))obj_isState2_324)() != 0) && (m.floor != get_field_3e4__10TObjPlayerFPv(p))) {
                set_state_flags__10TObjPlayerFPvUi(p, 0x40000);
            }
            set_floor_index__10TObjPlayerFPvi(p, get_player_floor__6TLobbyFi(m.floor));
            set_floor__10TObjPlayerFPvi(p, m.floor);
        }
    }
}

void TTecLuker__sub_801BAB1C(void *obj, s32 value) {
    if (obj == 0 || obj_isState2_324(obj) == 0) {
        Msg_801BAB1C m;
        TObjPlayer__sub_801C1890(&m);
        m.id = obj_getField1c(obj);
        m.value = value;
        TObjPlayer__sub_801C18AC(&m);
    }
}
void TObjPlayer__sub_801BAB78(VObj_801BAB78 *self, f32 *pos, s32 arg2) {
    Vec_801BAB78 v;
    s32 a;
    s32 b;
    self->m63(1, &v);
    TObjPlayer__sub_803D9B2C();
    direction_to_rotation_xz(self->f248, &a, &b);
    translate_matrix(0, v.x, lbl_805DC2C8 + self->f3c, v.z);
    rotate_matrix_z(0, b);
    rotate_matrix_x(0, a);
    rotate_matrix_y(0, self->f60);
    rotate_matrix_x(0, -0x4000);
    if (pos != NULL) {
        scale_matrix(0, pos[0], pos[2], TObjPlayer__data_805DC294);
    }
    TObjPlayer__sub_800F09E8(arg2);
    pop_matrix();
}

}
