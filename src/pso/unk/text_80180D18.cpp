#include "types.h"
typedef s32 M2C_UNK;

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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

struct Rec16_80180D18 { s32 f0; s32 f4; s32 f8; s32 fc; };

extern "C" {
M2C_UNK scroll_strip_uvs(int, s16, int);
M2C_UNK get_city_common_model(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_object();
M2C_UNK draw_chunk_object(int, void *);
extern M2C_UNK city_aircar_model_indices[];
extern M2C_UNK lbl_80443B40[];
extern M2C_UNK lbl_80443B54[];
extern M2C_UNK air_car_buffer_pair_table[];
extern void **lbl_805D5B24;
extern void **city_common_texture_list;
extern const f32 lbl_805DBBA0;
extern const f32 lbl_805DBBA4;
void render__18TObjCityAirCar_CarFPv(u8 *arg0);
}
struct Vec_80180E70 { f32 x, y, z; };

struct Car_80180E70 {
    u8 pad0[0x38];
    Vec_80180E70 pos;
    u8 pad44[0x60 - 0x44];
    s32 yaw;
    u8 pad64[0x90 - 0x64];
    f32 frame;
    f32 speed;
    s32 path;
    s32 model;
    s32 fa0;
    s32 fa4;
    u32 light;
};

struct Vec_80181074 { f32 x, y, z; };

struct Car_80181074 {
    u8 pad0[0x38];
    Vec_80181074 pos;
    u8 pad44[0x5C - 0x44];
    s32 roll;
    s32 heading;
    s32 yaw;
    u8 pad68[0x90 - 0x68];
    f32 frame;
    f32 speed;
    s32 path;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 spawn_continuous_particle_effect_with_flags(void *, int, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, void *);
M2C_UNK update_technique_slot__10TTecRaFoieFi(M2C_UNK, int, int);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u32 lbl_805D5B20;
extern const f32 lbl_805DBBA8;
extern const f32 lbl_805DBBAC;
extern const f32 lbl_805DBBB0;
extern const f32 lbl_805DBBB4;
extern const f32 lbl_805DBBB8;
extern const f32 lbl_805DBBBC;
void run_task__18TObjCityAirCar_CarFv(Car_80180E70 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 angle_diff_s16(s32, s32);
s32 sample_aircar_path_position(s32, void *, f32);
M2C_UNK vec3_add_to(void *, void *);
extern const f64 lbl_80443B90;
extern const f32 lbl_805DBBC0;
extern const f32 lbl_805DBBC4;
s32 update_path_motion__18TObjCityAirCar_CarFv(Car_80181074 *self);
}

extern "C" {

void render__18TObjCityAirCar_CarFPv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBBA0, lbl_805DBBA4) != 0) {
        end_effect_render__13TParticleCtrlFv();
        push_matrix();
        post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
            rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
        }
        set_global_param__8TObjFishFi((int) (city_common_texture_list));
        get_city_common_model((int) (M2C_FIELD(((u8 *)(city_aircar_model_indices) + (M2C_FIELD(arg0, s32 *, 0x9C) * 4)), s32 *, 0)));
        ((void (*)()) draw_chunk_object)();
        begin_effect_render__13TParticleCtrlFv();
        get_city_common_model((int) (M2C_FIELD(((u8 *)(lbl_80443B40) + (M2C_FIELD(arg0, s32 *, 0x9C) * 4)), s32 *, 0)));
        draw_ginja_object();
        if ((void *) lbl_805D5B20 != NULL) {
            temp_r3 = (u8 *)(M2C_FIELD(lbl_805D5B24, u8 **, 0));
            temp_r31 = M2C_FIELD(temp_r3, s32 *, 0x20);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) >= 0x14) {
                M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) M2C_FIELD(temp_r3, s32 *, 8);
            }
            set_global_param__8TObjFishFi((int) (lbl_805D5B24));
            scroll_strip_uvs(air_car_buffer_pair_table[M2C_FIELD(arg0, s32 *, 0x9C)], M2C_FIELD(arg0, s32 *, 0xA0), 0);
            draw_chunk_object(M2C_FIELD(lbl_805D5B20, Rec16_80180D18 **, 0x42C)[((s32 *)lbl_80443B54)[M2C_FIELD(arg0, s32 *, 0x9C)]].f8, (void *) (lbl_805D5B20));
            M2C_FIELD(M2C_FIELD(lbl_805D5B24, u8 **, 0), s32 *, 0x20) = temp_r31;
        }
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

#pragma push
#pragma fp_contract on
struct Car_80181074;
void run_task__18TObjCityAirCar_CarFv(Car_80180E70 *self) {
    Vec_80180E70 v;
    f32 scale;
    f32 t;
    t = self->frame;
    self->frame = t + self->speed;
    if (update_path_motion__18TObjCityAirCar_CarFv((Car_80181074 *)((Car_80181074 *)self)) == 0) {
        queue_destruction__7TObjectFv(self);
    }
    if ((self->path == 1 && self->frame >= lbl_805DBBA8 && self->frame <= lbl_805DBBAC) ||
        (self->path == 2 && self->frame >= lbl_805DBBB0 && self->frame <= lbl_805DBBB4)) {
        if (self->model == 4) {
            play_persistent_sound(0x4004CB02, self, &self->pos, 0, 0);
        } else if (self->model == 0) {
            update_technique_slot__10TTecRaFoieFi(play_persistent_sound(0x4004C101, self, &self->pos, 0, 0), -0x200, 0);
        } else {
            play_persistent_sound(0x4004C101, self, &self->pos, 0, 0);
        }
    }
    if (lbl_805D5B20 != 0) {
        self->fa0 -= 0xA;
        if (self->fa0 < 0) {
            self->fa0 += 0x100;
        }
        self->fa4++;
        if (self->fa4 >= 0x28) {
            self->fa4 = 0;
        }
        if (self->light == 0) {
            self->light = spawn_continuous_particle_effect_with_flags(&self->pos, 0x8A, 0x40);
        }
        if (self->light != 0) {
            if (self->model == 0) {
                scale = lbl_805DBBB8;
            } else {
                scale = lbl_805DBBBC;
            }
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            v.x -= scale * sin_table_lookup(self->yaw);
            v.z -= scale * cos_table_lookup(self->yaw);
            copy_pos__11TNowLoadingFPvPv(self->light, &v);
        }
    }
}
s32 update_path_motion__18TObjCityAirCar_CarFv(Car_80181074 *self) {
    Vec_80181074 a;
    Vec_80181074 b;
    s32 ang;
    s32 ok;
    s32 d;
    s32 p;
    s32 r;
    sample_aircar_path_position(self->path, &a, self->frame);
    ok = sample_aircar_path_position(self->path, &b, lbl_805DBBC0 + self->frame);
    VecCopy__FP3VecPC3Vec(&self->pos, &b);
    vec3_add_to(&self->pos, &a);
    self->pos.x *= lbl_805DBBC4;
    self->pos.y *= lbl_805DBBC4;
    self->pos.z *= lbl_805DBBC4;
    ang = lbl_80443B90 * atan2_float(b.x - a.x, b.z - a.z);
    d = angle_diff_s16(self->heading, ang);
    self->heading = ang;
    p = self->yaw;
    r = self->roll;
    if (d > 0x30) {
        if (r > 0) {
            r = 0;
        }
        r -= 0x40;
        if (r < -0x200) {
            r = -0x200;
        }
        p += r;
        if (p < -0x3800) {
            p = -0x3800;
        }
    } else if (d < -0x30) {
        if (r < 0) {
            r = 0;
        }
        r += 0x40;
        if (r > 0x200) {
            r = 0x200;
        }
        p += r;
        if (p > 0x3800) {
            p = 0x3800;
        }
    } else {
        r = 0;
        if (p > 0x100) {
            p -= 0x100;
        } else if (p < -0x100) {
            p += 0x100;
        } else {
            p = 0;
        }
    }
    self->yaw = p;
    self->roll = r;
    return ok;
}

#undef self
#pragma pop

}
