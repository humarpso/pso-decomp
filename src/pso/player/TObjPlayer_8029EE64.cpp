#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Vec_8029EFFC { f32 x, y, z; };

struct Cam_8029EFFC { Vec_8029EFFC pos; Vec_8029EFFC scale; };

struct Pl_8029EFFC {
    u8 pad0[0x38];
    Vec_8029EFFC pos38;
    u8 pad44[0x2FC - 0x44];
    Vec_8029EFFC pos2FC;
};

struct G_8029EFFC {
    u8 pad0[0x178];
    f32 x178;
    f32 y17C;
    f32 z180;
};

struct Sora_8029EFFC {
    u8 pad0[0x1C];
    u32 f1C;
    u8 pad20[4];
    Vec_8029EFFC pos24;
};

extern "C" {
s32 TCameraCtrl__sub_800689F4();
M2C_UNK calc_projection_screen_offset(void *, void *);
f64 calc_camera_fov_degrees();
M2C_UNK fn_8029F5B0(int, int, int, int);
M2C_UNK PSMTXConcat(void *, void *, void *);
M2C_UNK C_MTXLightPerspective(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_effect_state__10TObjPlayerFi(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
M2C_UNK load_current_pos_matrix(int);
M2C_UNK load_current_tex_matrix(int);
extern const f64 lbl_80465E18;
extern u32 lbl_805D4DF0;
extern u32 lbl_805D65F0;
extern s32 lbl_805D7774;
extern const f32 lbl_805DDDA0;
extern const f32 lbl_805DDDA4;
extern const f32 lbl_805DDDA8;
void setup_projection_texture__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void setup_projection_texture__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void clear_state_if_flag80__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_8029EE2C(void);
void set_id__6TSceneFi(void *f);
void set_active_scene__6TSceneFi(void *f);
int set_instance__6TSceneFi(void *f);
int set_scene_callbacks__6TSceneFv(void);
void VecCopy__FP3VecPC3Vec(Vec_8029EFFC *, Vec_8029EFFC *);
f32 get_random_float__8TObjFishFv(f32);
Pl_8029EFFC *get_player_by_client_id(s32);
s32 is_boss_area();
s32 get_global_state__14TOKeyMachine01Fv();
void render_task_layer_02__9TMainTaskFv(void *);
void render_object_layers__9TMainTaskFi(void *, s32);
s32 fn_8029E7BC(Vec_8029EFFC *, Vec_8029EFFC *);
s32 fn_8029EC3C(Vec_8029EFFC *, s32);
void set_scene_flag__10TSceneSoraFi(s32);
void TSceneSora__sub_8029F584(Vec_8029EFFC *);
void TScene__sub_8029F5D8();
void TScene__sub_8029F5E4(f32);
void TScene__sub_8029F5EC();
void copy_efb_to_texture__10TObjPlayerFPv(s32);
f32 vec_squared_length(Vec_8029EFFC *);
void reflect_matrix_in_plane(s32, Cam_8029EFFC *);
void normalize_vector(Vec_8029EFFC *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
extern Vec_8029EFFC lbl_80465E08;
extern u8 main_task[];
extern s32 TSceneSora__data_805D3620;
extern u32 lbl_805D4DF0;
extern s32 lbl_805D53A0;
extern u32 TSceneSora__data_805D6050;
extern s16 lbl_805D65F8;
extern u8 lbl_805D65FA;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD90;
extern const f32 lbl_805DDDAC;
extern const f32 lbl_805DDDB0;
void render_reflections__10TSceneSoraFPv(Sora_8029EFFC *o);
}

extern "C" {

void TSceneSora__sub_8029F3E4(void);
void clear_state_if_flag80__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
M2C_UNK set_global_effect_state__10TObjPlayerFi(M2C_UNK);

extern s32 some_id_805c6f74;

void clear_state_if_flag80__10TObjPlayerFi(s32 arg0) {
    if (arg0 & 0x80) {
        TObjPlayer__sub_803DC850(0);
        TObjPlayer__sub_803DC83C(0);
        set_global_effect_state__10TObjPlayerFi(0);
        some_id_805c6f74 &= 0xFFF7FFFF;
    }
}

void setup_projection_texture__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp10[0x30];
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    if (((u32) lbl_805D4DF0 != 0U) && ((u32) lbl_805D65F0 != 0U)) {
        calc_projection_screen_offset((void *) (&spC), (void *) (&sp8));
        if (arg2 & 0x80) {
            push_matrix();
            temp_f31 = (f32) (lbl_80465E18 * calc_camera_fov_degrees());
            if (TCameraCtrl__sub_800689F4() != 0) {
                C_MTXLightPerspective((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DDDA0), (f32) (lbl_805DDDA4), (f32) (lbl_805DDDA8), (f32) (lbl_805DDDA4 - spC), (f32) (lbl_805DDDA4 - sp8));
            } else {
                C_MTXLightPerspective((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DDDA0), (f32) (lbl_805DDDA4), (f32) (lbl_805DDDA8), (f32) (lbl_805DDDA4), (f32) (lbl_805DDDA4));
            }
            PSMTXConcat((void *) (&sp10), (void *) (lbl_805D7774), (void *) (lbl_805D7774));
            load_current_tex_matrix((int) (2));
            pop_matrix();
            load_current_pos_matrix((int) (2));
            GXSetTevOrder((int) (1), (int) (1), (int) (2), (int) (4));
            GXSetTevOp((int) (1), (int) (2));
            fn_8029F5B0((int) (1), (int) (0), (int) (0), (int) (0x24));
            some_id_805c6f74 |= 0x80000;
            TObjPlayer__sub_803DC850((M2C_UNK)((int) (1)));
            TObjPlayer__sub_803DC83C((M2C_UNK)((int) (1)));
            set_global_effect_state__10TObjPlayerFi((M2C_UNK)((int) (1)));
        }
    }
}

void render_reflections__10TSceneSoraFPv(Sora_8029EFFC *o) {
    Cam_8029EFFC c3;
    Cam_8029EFFC c2;
    Cam_8029EFFC c1;
    s32 r = 0;
    Vec_8029EFFC v = lbl_80465E08;
    s32 hit;
    s32 i;
    f32 k;
    f32 len;
    Pl_8029EFFC *p;
    if (lbl_805D4DF0 == 0 || o->f1C == 0) {
        return;
    }
    p = get_player_by_client_id(lbl_805D53A0);
    if (p == NULL) {
        return;
    }
    TScene__sub_8029F5EC();
    TScene__sub_8029F5E4(lbl_805DDDAC);
    if (TSceneSora__data_805D6050 != 0) {
        TSceneSora__data_805D3620 = 0;
    }
    TSceneSora__sub_8029F584(&v);
    lbl_805D65F8 = 1;
    {
        Vec_8029EFFC off = p->pos2FC;
        off.y += lbl_805DDDB0;
        hit = fn_8029E7BC(&off, &o->pos24);
    }
    if (is_boss_area() != 0) {
        hit = 1;
    }
    if (hit != 0 || lbl_805D65FA != 0) {
        lbl_805D65FA = 0;
        if (is_boss_area() != 0) {
            if (p != NULL) {
                render_object_layers__9TMainTaskFi(main_task, 2);
                if (get_global_state__14TOKeyMachine01Fv() == 0x20) {
                    c3.pos.x = p->pos38.x;
                    c3.pos.y = p->pos38.y;
                    c3.pos.z = p->pos38.z;
                    c3.scale.x = lbl_805DDD8C;
                    c3.scale.y = lbl_805DDD90;
                    c3.scale.z = c3.scale.x;
                    push_matrix();
                    reflect_matrix_in_plane(0, &c3);
                    render_object_layers__9TMainTaskFi(main_task, 3);
                    pop_matrix();
                }
            }
        } else if (p != NULL) {
            render_object_layers__9TMainTaskFi(main_task, 1);
            c2.pos.x = o->pos24.x;
            c2.pos.y = o->pos24.y;
            c2.pos.z = o->pos24.z;
            c2.scale.x = lbl_805DDD8C;
            c2.scale.y = lbl_805DDD90;
            c2.scale.z = c2.scale.x;
            push_matrix();
            reflect_matrix_in_plane(0, &c2);
            render_object_layers__9TMainTaskFi(main_task, 4);
            pop_matrix();
        }
    }
    render_task_layer_02__9TMainTaskFv(main_task);
    if (p != NULL) {
        c1.pos.x = o->pos24.x;
        c1.pos.y = o->pos24.y;
        c1.pos.z = o->pos24.z;
        c1.scale.x = lbl_805DDD8C;
        c1.scale.y = lbl_805DDD90;
        c1.scale.z = c1.scale.x;
        push_matrix();
        reflect_matrix_in_plane(0, &c1);
        render_object_layers__9TMainTaskFi(main_task, 5);
        pop_matrix();
    }
    k = lbl_805DDD8C;
    lbl_805D65F8 = 0;
    for (i = 0; i < 2; i++) {
        v.x = p->pos38.x - ((G_8029EFFC *)lbl_805D4DF0)->x178;
        v.y = k;
        v.z = p->pos38.z - ((G_8029EFFC *)lbl_805D4DF0)->z180;
        len = get_random_float__8TObjFishFv(v.z);
        if (get_random_float__8TObjFishFv(v.x) >= len) {
            if (i != 0) {
                if (lbl_805DDD8C != v.z) {
                    v.x = lbl_805DDD8C;
                }
            } else if (lbl_805DDD8C != v.x) {
                v.z = lbl_805DDD8C;
            }
        } else if (i != 0) {
            if (lbl_805DDD8C != v.x) {
                v.z = lbl_805DDD8C;
            }
        } else if (lbl_805DDD8C != v.z) {
            v.x = lbl_805DDD8C;
        }
        if (k != vec_squared_length(&v)) {
            Vec_8029EFFC tmp;
            normalize_vector(&v);
            TSceneSora__sub_8029F584(&v);
            push_matrix();
            push_matrix();
            VecCopy__FP3VecPC3Vec(&tmp, &p->pos2FC);
            r = fn_8029EC3C(&tmp, 0x4000);
            if (r == 1) {
                render_object_layers__9TMainTaskFi(main_task, 0);
            }
            pop_matrix();
            pop_matrix();
        }
        if (r != 0) {
            break;
        }
    }
    TScene__sub_8029F5D8();
    TScene__sub_8029F5E4(lbl_805DDD8C);
    if (TSceneSora__data_805D6050 != 0) {
        TSceneSora__data_805D3620 = 1;
    }
    copy_efb_to_texture__10TObjPlayerFPv(o->f1C);
    set_scene_flag__10TSceneSoraFi(o->f1C + 0x1C);
}

void TSceneSora__sub_8029F3E4(void) {  }
int set_scene_callbacks__6TSceneFv(void) {
    set_id__6TSceneFi((void *)setup_projection_texture__10TObjPlayerFiii);
    set_active_scene__6TSceneFi((void *)clear_state_if_flag80__10TObjPlayerFi);
    return set_instance__6TSceneFi((void *)TObjPlayer__sub_8029EE2C);
}

}
