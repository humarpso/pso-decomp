#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_28 { u8 bytes[0x28]; };

struct RecoveredGlobal_80074FAC_lbl_8043878C {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct V_80075070 { f32 x, y, z; };

struct Obj_80075070 {
    u8 pad0[0x38];
    V_80075070 pos;
    u8 pad44[0xAC - 0x44];
    s32 fac;
};

struct V_800751BC { f32 x, y, z; };

struct View_800751BC {
    u8 pad0[0x178];
    V_800751BC pos;
    u8 pad184[0xC];
    s32 f190;
    s32 f194;
    s32 f198;
};

typedef s32 M2C_UNK;
struct V_800753DC { f32 x, y, z; };

struct P_800753DC { f32 x, y; };

struct Off_800753DC { s16 x, y; };

struct Obj_800753DC {
    u8 pad0[0x38];
    V_800753DC pos;
    u8 pad44[0xB4 - 0x44];
    f32 scale;
    f32 alphaA;
    f32 alphaB;
    u8 padC0[0x110 - 0xC0];
    char names[6][0x30];
    s32 timer;
};

extern "C" {
u16 get_nth_view_player_id__11TCameraCtrlFi();
M2C_UNK get_camera_no__11TCameraCtrlFv();
u32 get_player_by_client_id(int);
f32 xyz_distance(void *, void *);
extern const f32 TObjTombstone__data_805D9174;
extern f32 TObjTombstone__data_805D9178;
extern f32 TObjTombstone__data_805D917C;
extern const f32 lbl_805D9180;
extern f32 TObjTombstone__data_805D9184;
void update_fade_by_distance__13TObjTombstoneFPv(u8 *arg0);
void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q);
extern RecoveredGlobal_80074FAC_lbl_8043878C lbl_8043878C;
extern RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250 TObjTombstone__data_8048D250;
void TObjTombstone__sub_80074FAC(void);
u32 get_player_by_client_id(int);
f32 vector_length(void *);
void subtract_vector(void *, void *);
extern V_80075070 lbl_804FF938[];
extern s32 lbl_805D53A0;
extern const f32 lbl_805D9170;
extern const f32 TObjTombstone__data_805D9174;
extern f32 TObjTombstone__data_805D917C;
s32 TObjTombstone__sub_80075070(Obj_80075070 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
f32 get_fov__11TCameraCtrlFv();
f32 get_view_scale__11TCameraCtrlFv();
s32 get_screen_width__11TCameraCtrlFv();
s32 get_screen_height__11TCameraCtrlFv();
f32 vec3_dot(void *, void *);
void project_world_to_screen(s32, void *, void *);
void rotate_vector_by_matrix(s32, void *, void *);
void rotate_matrix_y(s32, s32);
void rotate_matrix_z(s32, s32);
void subtract_vector(void *, void *);
void rotate_matrix_x(s32, s32);
void push_matrix_from(void *);
void push_matrix();
void pop_matrix();
extern V_800751BC lbl_80438780;
extern u8 lbl_8058D490[];
extern View_800751BC *lbl_805D4DF0;
extern const f32 TObjTombstone__data_805D9174;
s32 project_to_screen__13TObjTombstoneFPvPvPv(void *arg0, f32 *arg1, void *arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 project_to_screen__13TObjTombstoneFPvPvPv(void *arg0, f32 *arg1, void *arg2);
u32 calc_text_width(const char *);
u32 TWindowSubStatusDisp__sub_80144C6C(const char *);
void draw_menu_font_string(const char *, u32, s32, f32, f32, f32);
f32 sin_table_lookup(s32);
u32 strlen(const char *);
extern Off_800753DC lbl_8048D2F0[];
extern const f32 TObjTombstone__data_805D9174;
extern const f32 lbl_805D9180;
extern const f32 lbl_805D9188;
extern const f32 lbl_805D918C;
extern const f32 lbl_805D9190;
extern const f32 lbl_805D91A0;
M2C_UNK draw_name_labels__13TObjTombstoneFPv(void *arg0_);
}

extern "C" {

s32 check_owner__13TObjTombstoneFPv(void *arg0);
void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q);
void handle_6x96(void);
s32 is_challenge_mode_active();
s32 get_current_floor();
s32 is_flag_set__6TLobbyFv();
s32 is_not_split_screen__13TRaderMapCoreFv();

void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

typedef char RecoveredGlobal_80074FAC_lbl_8043878C_size[sizeof(RecoveredGlobal_80074FAC_lbl_8043878C) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250_size[sizeof(RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250) == 0x28 ? 1 : -1];
void TObjTombstone__sub_80074FAC(void) {
    M2CCopy_28 sp8;
    sp8 = *(const M2CCopy_28 *)((s32) ((u8 *)(&lbl_8043878C.value) + -4) + 4);
    copy_matrix__13TObjTombstoneFPvPv((void*)(&TObjTombstone__data_8048D250.value), (void*)(&sp8));
}

void handle_6x96(void) {  }
s32 check_owner__13TObjTombstoneFPv(void *arg0) {
    s32 var_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r3 = is_challenge_mode_active();
    } else {
        var_r3 = is_flag_set__6TLobbyFv();
    }
    if ((var_r3 == 0) || ((s8) M2C_FIELD(arg0, u8 *, 0xC2) != get_current_floor())) {
        return 1;
    }
    return 0;
}

s32 TObjTombstone__sub_80075070(Obj_80075070 *arg0) {
    f32 best;
    f32 d;
    u32 pl;
    void *ppos;
    s32 i;
    best = TObjTombstone__data_805D917C;
    pl = get_player_by_client_id(lbl_805D53A0);
    if (pl == 0) {
        return 0;
    }
    ppos = (void *)(pl + 0x38);
    for (i = 0; i < 4; i++) {
        if (i != arg0->fac && lbl_805D9170 != lbl_804FF938[i].y) {
            V_80075070 v = lbl_804FF938[i];
            subtract_vector(&v, ppos);
            v.y = TObjTombstone__data_805D9174;
            d = vector_length(&v);
            if (best > d) {
                best = d;
            }
        }
    }
    if (TObjTombstone__data_805D917C == best) {
        return 0;
    }
    V_80075070 w = arg0->pos;
    subtract_vector(&w, ppos);
    w.y = TObjTombstone__data_805D9174;
    d = vector_length(&w);
    if (d < best || (d == best && arg0->fac == lbl_805D53A0)) {
        return 0;
    }
    return 1;
}

s32 project_to_screen__13TObjTombstoneFPvPvPv(void *arg0, f32 *arg1, void *arg2) {
    V_800751BC d;
    V_800751BC v = lbl_80438780;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, lbl_805D4DF0->f194);
    rotate_matrix_x(0, lbl_805D4DF0->f190);
    rotate_matrix_z(0, lbl_805D4DF0->f198);
    rotate_vector_by_matrix(0, &v, &v);
    pop_matrix();
    VecCopy__FP3VecPC3Vec(&d, arg2);
    subtract_vector(&d, &lbl_805D4DF0->pos);
    if (vec3_dot(&v, &d) <= TObjTombstone__data_805D9174) {
        return 0;
    }
    push_matrix();
    project_world_to_screen(0, arg2, arg1);
    pop_matrix();
    if (is_split_screen() != 0) {
        arg1[0] -= (f32)get_screen_height__11TCameraCtrlFv();
        arg1[0] /= get_view_scale__11TCameraCtrlFv();
        arg1[1] -= (f32)get_screen_width__11TCameraCtrlFv();
        arg1[1] /= get_fov__11TCameraCtrlFv();
    }
    return 1;
}

void update_fade_by_distance__13TObjTombstoneFPv(u8 *arg0) {
    f32 temp_f1;
    u32 temp_r3;
    get_camera_no__11TCameraCtrlFv();
    temp_r3 = get_player_by_client_id((int) (get_nth_view_player_id__11TCameraCtrlFi()));
    if (temp_r3 != 0U) {
        temp_f1 = xyz_distance((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
        if (temp_f1 <= lbl_805D9180) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9178;
        } else if (temp_f1 >= TObjTombstone__data_805D917C) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9174;
        } else {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((TObjTombstone__data_805D917C - temp_f1) / TObjTombstone__data_805D9184);
        }
        draw_name_labels__13TObjTombstoneFPv((void *)((void *) (arg0)));
    }
}
#pragma push
#pragma fp_contract on
#define self ((Obj_800753DC *)arg0_)
M2C_UNK draw_name_labels__13TObjTombstoneFPv(void *arg0_) {
    u32 c2;
    u32 c1;
    P_800753DC screen;
    V_800753DC pos;
    f32 m;
    f32 a;
    f32 b;
    u32 alpha;
    if (TObjTombstone__data_805D9174 == self->scale) return;
    VecCopy__FP3VecPC3Vec(&pos, &self->pos);
    pos.y += lbl_805D9188;
    if (project_to_screen__13TObjTombstoneFPvPvPv(self, (f32 *)&screen, &pos) == 0) return;
    m = TObjTombstone__data_805D9174;
    for (s32 i = 0; i < 6; i++) {
        f32 w = calc_text_width(self->names[i]);
        if (m < w) m = w;
    }
    m *= lbl_805D918C;
    if (screen.x - m < TObjTombstone__data_805D9174 || screen.x + m > lbl_805D9190) {
        if ((self->alphaA += -0.16666667f) < 0.0f) self->alphaA = 0.0f;
        if ((self->alphaB += -0.016666668f) < 0.0f) self->alphaB = 0.0f;
    } else {
        if ((self->alphaA += 0.16666667f) > 1.0f) self->alphaA = 1.0f;
        if ((self->alphaB += 0.16666667f) > 1.0f) self->alphaB = 1.0f;
    }
    a = self->scale * self->alphaA;
    b = self->scale * self->alphaB;
    alpha = (s32)(lbl_805D9180 * sin_table_lookup(self->timer << 8)) + 200;
    c1 = (u32)(alpha * a) << 24;
    c2 = ((u32)(alpha * b) << 24) | 0xFFFFFF;
    for (s32 i = 0; i < 6; i++) {
        char *name;
        P_800753DC p = screen;
        name = self->names[i];
        if (strlen(name) != 0) {
            p.x -= lbl_805D918C * TWindowSubStatusDisp__sub_80144C6C(name);
            if (a > TObjTombstone__data_805D9174) {
                s32 j;
                for (j = 0; j < 8; j++) {
                    Off_800753DC o = lbl_8048D2F0[j];
                    draw_menu_font_string(name, c1, 1, p.x + o.x, p.y + o.y, lbl_805D918C);
                }
            }
            if (b > TObjTombstone__data_805D9174) {
                draw_menu_font_string(name, c2, 1, p.x, p.y, lbl_805D918C);
            }
            screen.y += lbl_805D91A0;
        }
    }
}
#undef self
#pragma pop

}
