#include "pso/misc/RenderFadeState.h"
#include "pso/system/vector.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/item/TObjContainerJungEnemy.h"
#include "pso/item/TObjContainerIdo.h"
#include "pso/item/TUnk_804B97C0.h"
#include "pso/misc/TContainerAncient01.h"
#include "pso/misc/TContainerAncient01R.h"

#include "types.h"

struct RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018BD00_lbl_804B6DEC {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_8018BD00___vt__19TContainerAncient01 {
    s32 value;
    u8 remaining[0x13C];
};

struct B_8018BE30 { u8 pad[0x18]; };

struct V_8018BE30 : B_8018BE30 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct B_8018BE98 { u8 pad[0x18]; };

struct V_8018BE98 : B_8018BE98 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct Vec_8018BEE4 { f32 x, y, z; };

extern "C" {
s32 construct_actor_base__10TObjPlayerFPvPv(void *);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
s32 init_collision_body_parts(void *, void *, int);
extern RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0 TContainerAncient01__collision_body_parts;
extern RecoveredGlobal_8018BD00_lbl_804B6DEC TContainerAncient01__anim_table;
extern s32 __vt__19TContainerAncient01[];
extern s32 TContainerAncient01__name;
extern s32 TContainerAncient01__bml_resource;
extern const f32 lbl_805DBD5C;
u8 *TContainerAncient01__ct(u8 *arg0, s32 arg1, s32 arg2);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD14;
f32 xyz_distance_squared(u8 *arg0, u8 *arg1);
void matrix_mult_vec(int, void *, void *);
void project_world_to_screen(int, void *, void *, void *);
extern Vec_8018BEE4 lbl_804FF610;
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805DBD60;
extern const f32 lbl_805DBD68;
s32 TContainerAncient01__sub_8018BE90(void);
void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);

void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TContainerAncient01;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804806E8 *)arg0)->destroy_motion_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0_size[sizeof(RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018BD00_lbl_804B6DEC_size[sizeof(RecoveredGlobal_8018BD00_lbl_804B6DEC) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_8018BD00___vt__19TContainerAncient01_size[sizeof(RecoveredGlobal_8018BD00___vt__19TContainerAncient01) == 0x140 ? 1 : -1];
u8 *TContainerAncient01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018BD00___vt__19TContainerAncient01 *)&__vt__19TContainerAncient01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TContainerAncient01__name;
    ((TContainerAncient01 *)(arg0))->apply_object_set_data((void *)arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((int) ((*(u8 * *)&TContainerAncient01__bml_resource)), 0);
    ((TContainerAncient01 *)arg0)->texture_id = TObjFish__sub_8001EDB0((int) ((*(u8 * *)&TContainerAncient01__bml_resource)), 0);
    ((TContainerAncient01 *)arg0)->action_table = &TContainerAncient01__anim_table.value;
    ((TObjMotion *)arg0)->set_field_d8((s32)((void *) (((TContainerAncient01 *)arg0)->action_table)));
    *(s32 *)((s8 *)arg0 + 0xDC) = (s32) *(s32 *)((s8 *)(*(u8 * *)&TContainerAncient01__bml_resource) + 0x430);
    ((TContainerAncient01 *)arg0)->m_b8 = 0;
    ((TObjMotion *)arg0)->set_animation((((TContainerAncient01 *)arg0)->m_b8));
    ((TObjMotion *)arg0)->set_field_b8((int) (((TContainerAncient01 *)arg0)->m_b8));
    ((TContainerAncient01 *)arg0)->actorFlags = (s32) (((TContainerAncient01 *)arg0)->actorFlags | 0x60000000);
    init_collision_body_parts(arg0, (void *)&TContainerAncient01__collision_body_parts.value, 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    VecCopy((Vec *)(arg0 + 0x74), (const Vec *)(arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) ((*(f32 *)((s8 *)&TContainerAncient01__collision_body_parts.value + 4) * lbl_805DBD5C) + *(f32 *)((s8 *)arg0 + 0x78));
    VecCopy((Vec *)(arg0 + 0x2FC), (const Vec *)(arg0 + 0x74));
    ((TContainerAncient01 *)arg0)->mode = 0;
    ((TContainerAncient01 *)arg0)->init_state_vectors();
    return arg0;
}
#pragma pop

f32 TContainerAncient01R::receive_weapon_special_attack(void *, void *) {
    V_8018BE30 *self = (V_8018BE30 *)this;
    self->m20(0, TContainerAncient01__data_805DBD10);
    return TContainerAncient01__data_805DBD14;
}

void TContainerAncient01R::apply_knockback_from_attacker(u8 *) {  }
s32 TContainerAncient01R::try_start_action(s32, s32) { return 1; }
s32 TContainerAncient01R::roll_physical_accuracy(void *, s32, f32) { return 1; }

    extern int TContainerAncient01__effect_id_table[];
int TContainerAncient01::get_table_entry(int a0) {  return TContainerAncient01__effect_id_table[a0]; }

s32 TContainerAncient01__sub_8018BE90(void) {
    return TContainerAncient01__bml_resource;
}

f32 TContainerAncient01::receive_weapon_special_attack(void *, void *) {
    V_8018BE98 *self = (V_8018BE98 *)this;
    self->m20(0, TContainerAncient01__data_805DBD10);
    return TContainerAncient01__data_805DBD14;
}

void TContainerAncient01::apply_knockback_from_attacker(u8 *) {  }
s32 TContainerAncient01::try_start_action(s32, s32) { return 1; }
s32 TContainerAncient01::roll_physical_accuracy(void *, s32, f32) { return 1; }
#pragma push
#pragma fp_contract on
s16 TObjContainerIdo::update_object_view_visibility(f32 farg0, f32 farg1) {
    u8 *arg0 = (u8 *)this;
    Vec_8018BEE4 p;
    f32 out[2];
    matrix_mult_vec(0, (u8 *)&this->m_c0, &p);
    if (xyz_distance_squared((u8 *)&this->position, camera_ctrl_instance + 0x178) < farg1 * farg1) {
        return 1;
    }
    if (p.z + farg1 * lbl_805DBD60 > 0.0f) {
        return 0;
    }
    if (p.z < -farg0) {
        return 0;
    }
    if (p.x < 0.0f) {
        p.x = lbl_804FF610.x * farg1 + *(f32 *)((s8 *)arg0 + 0x38);
        p.y = lbl_804FF610.y * farg1 + *(f32 *)((s8 *)arg0 + 0x3C);
        p.z = lbl_804FF610.z * farg1 + *(f32 *)((s8 *)arg0 + 0x40);
        project_world_to_screen(0, &p, out, &lbl_804FF610);
        if (out[0] < 0.0f) {
            return 0;
        }
    } else {
        p.x = *(f32 *)((s8 *)arg0 + 0x38) - lbl_804FF610.x * farg1;
        p.y = *(f32 *)((s8 *)arg0 + 0x3C) - lbl_804FF610.y * farg1;
        p.z = *(f32 *)((s8 *)arg0 + 0x40) - lbl_804FF610.z * farg1;
        project_world_to_screen(0, &p, out, &lbl_804FF610);
        if (out[0] > lbl_805DBD68) {
            return 0;
        }
    }
    return 1;
}
#pragma pop

struct VOuter_8018C06C {
    char pad[0x18];
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
struct VMem_8018C06C {
    char pad[0x14];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

u8 *TObjContainerIdo__ct(u8 *arg0, s32 arg1, s32 arg2);
void render__16TObjContainerIdoFv(u8 *arg0);
s32 post_translate_matrix(void *);
void draw_ginja_object(void *);
s32 rotate_matrix_x(s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void *__nw__7TObjectFUl(int);

extern u32 TObjContainerIdo__model_resource;
extern const f32 lbl_805DBD6C;
extern const f32 lbl_805DBD70;

void render__16TObjContainerIdoFv(u8 *arg0) {
    s32 var_r31;

    if (((VOuter_8018C06C*)arg0)->m8(lbl_805DBD6C, lbl_805DBD70) != 0) {
        var_r31 = 0;
        if (TRaderMapCore::is_not_split_screen() == 0) {
            var_r31 = ((RenderFadeState*)(arg0 + 0xF0))->updateFromCamera((const f32*)(arg0 + 0x38));
        }
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m6();
        }
        {
            extern const u32 container_ido_texture_gvm_handle;
            u32 temp = (u32) container_ido_texture_gvm_handle;
            if (temp != 0U) {
                TObjFish::set_global_param(temp);
            }
        }
        push_matrix();
        post_translate_matrix(arg0 + 0xC0);
        rotate_matrix_y(0, ((TObjContainerIdo *)arg0)->rotation_y);
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x5C));
        draw_ginja_object((void *)get_bml_model(TObjContainerIdo__model_resource, 0));
        pop_matrix();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, ((TObjContainerIdo *)arg0)->rotation_y);
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x5C));
        draw_ginja_object((void *)get_bml_model(TObjContainerIdo__model_resource, 1));
        pop_matrix();
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m7();
        }
    }
}

struct Vec3_8018C18C { f32 x, y, z; };
struct VObj_8018C18C {
    char pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
struct Ido_8018C18C {
    u8 pad0[0x38];
    Vec3_8018C18C pos;
    u8 pad44[0x5C - 0x44];
    s32 f5c;
    s32 f60;
    u8 pad64[0xC0 - 0x64];
    Vec3_8018C18C c0;
    s32 ids[4];
    s32 dc;
    u32 e0;
    f32 e4;
    f32 e8;
    f32 ec;
    u8 f0[4];
};
u8 is_current_floor_switch_set(u16);
f32 xyz_distance(void *, void *);
s32 push_matrix_from(void *);
void rotate_vector_by_matrix(int, void *, void *);
s32 play_persistent_sound(s32 id, s32 a1, u32 src, s32 a3, s32 flags);
void play_sound_effect(s32, void *, s32, s32);
s32 rand();
void *spawn_particle_effect(void *pos, s32 id);
int update_obstruction_fade(void*);
extern const Vec3_8018C18C lbl_80445110;
extern const Vec3_8018C18C lbl_8044511C;
extern u8 identity_matrix[];
extern const f32 TObjContainerIdo__data_805DBD64;
extern const f32 lbl_805DBD74;
extern const f32 lbl_805DBD78;
extern const f32 lbl_805DBD7C;
extern const f32 lbl_805DBD80;
extern const f32 lbl_805DBD84;
extern const f32 lbl_805DBD88;
extern const f32 lbl_805DBD8C;
extern const f32 lbl_805DBD90;

#pragma push
#pragma fp_contract on
void run_task__16TObjContainerIdoFv(Ido_8018C18C *self) {
    f32 prev;
    u32 old;
    s32 i;

    prev = self->e4;
    old = self->e0 & 0xF;
    self->e4 = TObjContainerIdo__data_805DBD64;
    for (i = 0; i < self->dc; i++) {
        if (is_current_floor_switch_set((u16)self->ids[i]) == 1) {
            self->e0 |= 1 << i;
            self->e4 += self->e8;
        } else {
            self->e0 &= ~(1 << i);
        }
    }
    if ((old ^ (self->e0 & 0xF)) != 0) {
        if (prev - self->e4 < TObjContainerIdo__data_805DBD64) {
            self->e0 &= ~0x02000000;
            self->e0 &= ~0x01000000;
        } else {
            self->e0 |= 0x02000000;
            self->e0 &= ~0x01000000;
        }
    }
    self->e0 &= ~0x04000000;
    if (self->e0 & 0x02000000) {
        if (xyz_distance(&self->c0, &self->pos) > self->e4) {
            Vec3_8018C18C v = lbl_80445110;
            v.z = -self->ec;
            push_matrix_from(identity_matrix);
            rotate_matrix_y(0, self->f60);
            rotate_matrix_x(0, self->f5c);
            rotate_vector_by_matrix(0, &v, &v);
            pop_matrix();
            self->pos.x -= v.x;
            self->pos.y -= v.y;
            self->pos.z -= v.z;
            self->e0 |= 0x04000000;
            play_persistent_sound(0x4B717, (s32)self, (u32)&self->pos, 0, 0);
        } else if (!(self->e0 & 0x01000000)) {
            play_sound_effect(0x4C118, &self->pos, 0, 0);
            self->e0 |= 0x01000000;
        }
    } else {
        if (xyz_distance(&self->c0, &self->pos) < self->e4) {
            Vec3_8018C18C w = lbl_8044511C;
            w.z = -self->ec;
            push_matrix_from(identity_matrix);
            rotate_matrix_y(0, self->f60);
            rotate_matrix_x(0, self->f5c);
            rotate_vector_by_matrix(0, &w, &w);
            pop_matrix();
            self->pos.x += w.x;
            self->pos.y += w.y;
            self->pos.z += w.z;
            self->e0 |= 0x04000000;
            play_persistent_sound(0x4B717, (s32)self, (u32)&self->pos, 0, 0);
        } else if (!(self->e0 & 0x01000000)) {
            play_sound_effect(0x4C118, &self->pos, 0, 0);
            self->e0 |= 0x01000000;
        }
    }
    if (!(self->e0 & 0x08000000) && (self->e0 & 0x04000000)) {
        if (lbl_805DBD74 * (f32)rand() < lbl_805DBD78 && ((VObj_8018C18C *)self)->m8(lbl_805DBD6C, lbl_805DBD7C) != 0) {
            Vec3_8018C18C a;
            Vec3_8018C18C b;
            Vec3_8018C18C out;
            a.x = lbl_805DBD80;
            a.y = lbl_805DBD84;
            a.z = lbl_805DBD88 * (lbl_805DBD74 * (f32)rand()) - lbl_805DBD8C;
            b.x = lbl_805DBD90;
            b.y = lbl_805DBD84;
            b.z = lbl_805DBD88 * (lbl_805DBD74 * (f32)rand()) - lbl_805DBD8C;
            push_matrix_from(identity_matrix);
            post_translate_matrix(&self->pos);
            rotate_matrix_y(0, self->f60);
            rotate_matrix_x(0, self->f5c);
            matrix_mult_vec(0, &a, &out);
            spawn_particle_effect(&out, 0x42);
            matrix_mult_vec(0, &b, &out);
            spawn_particle_effect(&out, 0x42);
            pop_matrix();
        }
    }
    update_obstruction_fade(self->f0);
}
#pragma pop

extern void *tl_05;

void *TObjContainerIdo::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TObjContainerIdo__ct((u8 *)o, (s32)tl_05, (s32)arg0);
    }
    return o;
}

}

#include "pso/TParticleCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/npc/TObjNpcEnemy.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    s32 value;
    u8 remaining[0x38];
};

struct Obj_8018CBF0 { u8 pad0[0x84]; s32 id; };

struct Obj_8018CB44 { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x62]; u32 f80; s32 f84; };

struct Pkt_8018CB44 { u16 a; u16 b; s32 c; s32 d; s32 e; };

struct Ido_8018C7BC { u8 pad[0xCC]; s32 ids[4]; };

extern "C" {
void queue_destruction__7TObjectFv(void *arg0);
extern u32 container_ido_texture_gvm_handle;
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80445130;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 container_ido_resource_descriptor;
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80445430[];
extern char lbl_8044543C[];
s32 get_current_floor();
extern s32 local_client_id;
extern const f32 lbl_805DBD98;
extern u8 container_ido_collision_parts[];
extern s32 __vt__16TObjContainerIdo[];
extern s32 obj_container_ido_class_name;
void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 scale_matrix(s32, f32, f32, f32);
void *__dt__13TUnk_804949A8Fv(void *arg0, s16 arg1);

void TObjContainerIdo::free_resources() {
    if ((u32) container_ido_texture_gvm_handle != 0U) {
        TLobby__sub_803DA16C((void*)container_ido_texture_gvm_handle);
        TAdSinglePlyChrSelectGC::safe_free(container_ido_texture_gvm_handle);
        container_ido_texture_gvm_handle = 0U;
    }
    if ((u32) TObjContainerIdo__model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjContainerIdo__model_resource, 1);
        TObjContainerIdo__model_resource = 0U;
    }
}

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void TObjContainerIdo::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &container_ido_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjContainerIdo__model_resource) = var_r0;
    (*(u8 * *)&container_ido_texture_gvm_handle) = load_gvm_texture_file((s32) &lbl_80445130.value);
}

void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjContainerIdo;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        __dt__13TUnk_804949A8Fv((s8 *)arg0 + 0xF0, -1);
        ((TUnk_804B97C0 *)arg0)->dt(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805DBD9C;

u8 *TObjContainerIdo__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    ((TUnk_804B97C0 *)arg0)->init_positions();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjContainerIdo;
    ((TObjPlayer *)(arg0 + 0xF0))->init_and_activate();
    *(s32 *)((s8 *)arg0 + 0) = obj_container_ido_class_name;
    ((TObjContainerIdo *)(arg0))->apply_object_set_data((void *)arg2);
    VecCopy((Vec *)(arg0 + 0xC0), (const Vec *)(arg0 + 0x38));
    VecCopy((Vec *)(arg0 + 0xB4), (const Vec *)(arg0 + 0x38));
    *(f32 *)&((TObjContainerIdo *)arg0)->m_b0 = lbl_805DBD7C;
    *(s32 *)&((TObjContainerIdo *)arg0)->m_dc = *(s32 *)((s8 *)arg0 + 0x88);
    if (*(s32 *)&((TObjContainerIdo *)arg0)->m_dc < 1) {
        *(s32 *)&((TObjContainerIdo *)arg0)->m_dc = 1;
    }
    if (*(s32 *)&((TObjContainerIdo *)arg0)->m_dc > 4) {
        *(s32 *)&((TObjContainerIdo *)arg0)->m_dc = 4;
    }
    for (i = 0; i < *(s32 *)&((TObjContainerIdo *)arg0)->m_dc; i++) {
        ((Ido_8018C7BC *)arg0)->ids[i] = ((TObjContainerIdo *)arg0)->m_84 + i;
    }
    ((TObjContainerIdo *)arg0)->m_e0 = 0;
    if (*(s32 *)&((TObjContainerIdo *)arg0)->m_8c != 0) {
        ((TObjContainerIdo *)arg0)->m_e0 |= 0x08000000;
    } else {
        ((TObjContainerIdo *)arg0)->m_e0 &= ~0x08000000;
    }
    *(f32 *)((s8 *)arg0 + 0xE4) = TObjContainerIdo__data_805DBD64;
    ((TObjContainerIdo *)arg0)->m_e8 = ((TObjContainerIdo *)arg0)->scale / *(s32 *)&((TObjContainerIdo *)arg0)->m_dc;
    *(f32 *)((s8 *)arg0 + 0xEC) = ((TObjContainerIdo *)arg0)->target_scale;
    ((TObjPlayer *)(arg0 + 0xF0))->activate_and_dispatch();
    init_collision_body_parts(arg0, container_ido_collision_parts, 1);
    ((TObjContainerIdo *)arg0)->actorFlags |= 0x40000000;
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

void TObjContainerJungEnemy::vfunc_6(s16 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((TObjContainerJungEnemy *)arg0)->vfunc_79();
            ((TUnk_804AF8A0 *)arg0)->clear_player_status_flag(0, 1);
            ((TUnk_804AF8A0 *)arg0)->set_flag8();
            queue_destruction__7TObjectFv((arg0));
            this->mode = 1;
        }
    } else if ((s16) *arg1 == 1) {
        ((TUnk_804AF8A0 *)arg0)->clear_player_status_flag(0, 1);
        ((TUnk_804AF8A0 *)arg0)->set_flag8();
        queue_destruction__7TObjectFv((arg0));
        this->mode = 1;
    }
}

struct Vec_8018C9F0 { f32 x, y, z; };
struct Spawn_8018C9F0 {
    u8 pad0[0xC];
    Vec_8018C9F0 pos;
    u8 pad18[0x20];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};
struct Obj_8018C9F0 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x10];
    Vec_8018C9F0 pos;
    u8 pad44[0x326 - 0x44];
    s16 f326;
    u8 pad328[0x36C - 0x328];
    s32 f36c;
    s32 f370;
};

void *spawn_particle_effect_with_flags(void *pos, s32 id, s32 flags);
u8 *construct_debris__8TObjChipFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);
}
void play_container_break_sound(s32 arg0);
extern Spawn_8018C9F0 lbl_80445398;
extern Spawn_8018C9F0 lbl_804453E4;

#pragma push
#pragma opt_propagation off
extern "C" {
void TObjContainerJungEnemy__vt77(const Obj_8018C9F0 *self) {
    if (self->f326 != 1) {
        Spawn_8018C9F0 a = lbl_80445398;
        f32 za;
        f32 ya;
        f32 xa;
        xa = self->pos.x;
        ya = self->pos.y;
        za = self->pos.z;
        a.pos.x = xa;
        a.pos.y = ya;
        a.pos.z = za;
        a.f38 = ya;
        a.f40 = self->f36c;
        a.f44 = self->f24;
        Spawn_8018C9F0 b = lbl_804453E4;
        f32 zb;
        f32 yb;
        f32 xb;
        xb = self->pos.x;
        yb = self->pos.y;
        zb = self->pos.z;
        b.pos.x = xb;
        b.pos.y = yb;
        b.pos.z = zb;
        b.f38 = yb;
        b.f40 = self->f370;
        b.f44 = self->f24;
        spawn_particle_effect_with_flags((void *)&self->pos, 0x45, 0x40);
        spawn_particle_effect_with_flags((void *)&self->pos, 0x46, 0x40);
        void *o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&b);
        }
        play_container_break_sound((s32)self);
    }
}
#pragma pop

f32 TObjContainerJungEnemy::receive_physical_attack(void *, f32) {
    Obj_8018CB44 *arg0 = (Obj_8018CB44 *)this;
    s16 sp8;
    Pkt_8018CB44 pkt;
    if ((arg0->f1C >= 0x1000U) && (arg0->f80 != 0U) && (((TUnk_804AF8A0 *)arg0)->access_object_saved_state(&sp8, 1) != 0)) {
        sp8 = 1;
        ((TUnk_804AF8A0 *)arg0)->access_object_saved_state(&sp8, 0);
        ((TUnk_804AF8A0 *)arg0)->send_object_state_update(&sp8);
        ((TLobby *)(&pkt))->init_packet_67_04();
        pkt.b = arg0->f1C;
        pkt.c = get_current_floor();
        pkt.d = arg0->f84;
        pkt.e = local_client_id;
        ((TLobby *)(&pkt))->byteswap_and_send();
    }
    return lbl_805DBD98;
}

void TObjContainerJungEnemy::debug_print_item_box_info() {
    Obj_8018CBF0 *self = (Obj_8018CBF0 *)this;
    ((TObjContainerJungEnemy *)self)->load_models();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x130020, lbl_80445430, self->id);
    debug_printf_at(0x130021, lbl_8044543C);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjContainerJungEnemy::vfunc_81() {

    switch (this->mode) {
    case 0:
        TObjFish::set_global_param(this->texture_id);
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        scale_matrix(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        draw_ginja_object(*(void * *)&this->m_368);
        TParticleCtrl::begin_effect_render();
        draw_ginja_object(*(void * *)&this->m_374);
        TParticleCtrl::end_effect_render();
        pop_matrix();
    case 1:
        return;
    }
}
}
