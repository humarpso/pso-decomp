#include "pso/boss/TBoss7LaserPtcl.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss7PhotonBullet.h"
#include "pso/boss/TUnk_804F1C88.h"
#include <stddef.h>
#include "pso/misc/TNowLoading.h"
#include "pso/object/TObjOnlineEnding.h"
#include "pso/player/TObjPlayer.h"
typedef char Laser_state_offset[offsetof(TBoss7LaserPtcl, state) == 0x1C ? 1 : -1];
typedef char Laser_position_offset[offsetof(TBoss7LaserPtcl, position) == 0x20 ? 1 : -1];
typedef char Laser_direction_offset[offsetof(TBoss7LaserPtcl, direction) == 0x2C ? 1 : -1];
typedef char Laser_displacement_offset[offsetof(TBoss7LaserPtcl, displacement) == 0x38 ? 1 : -1];
typedef char Laser_particles_offset[offsetof(TBoss7LaserPtcl, particles) == 0x44 ? 1 : -1];
typedef char Laser_distance_offset[offsetof(TBoss7LaserPtcl, travel_distance) == 0x4C ? 1 : -1];
typedef char Laser_last_known_offset[offsetof(TBoss7LaserPtcl, m_54) == 0x54 ? 1 : -1];

extern "C" {

typedef TBoss7LaserPtclVector Vec_8035AAEC;
struct Ang_8035AAEC { s32 x, y, z; };

f32 atan2_float(f32 y, f32 x);
void *create_oneshot_particle_emitter(void *pos, void *dir, s32 id, s32 flags);
void direction_to_rotation_xz(u8 *arg0, s32 *arg1, s32 *arg2);
void vec3_add_to(void *, void *);
void normalize_vector(void *);
extern const f64 lbl_804796D8[];
extern const f32 lbl_805E0100;
extern const f32 lbl_805E0104;
extern const f32 lbl_805E0108;
}

struct RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl_size[sizeof(RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8035AE54_lbl_804F1C88 {
    s32 value;
    u8 remaining[0x14];
};

struct Ptcl_8035AD68 {
    u8 pad0[0x10];
    void *x10;
    u8 pad14[0x8];
    u8 x1c[0x24];
    f32 x40;
};

extern "C" {
void *spawn_continuous_particle_effect_with_flags(void *parent, s32 idx, s32 flags);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__15TBoss7LaserPtcl[];
extern s32 TBoss7LaserPtcl__class_name;
extern const f32 lbl_805E010C;
u8 *TBoss7LaserPtcl__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
void *create_timed_particle_emitter(void *owner, s32 id, s32 b, s32 c);
void *spawn_particle_effect(void *pos, s32 id);
extern s32 lbl_804F1C88[];
extern const f32 lbl_805E0118;
u8 *TBoss7LaserPtcl__sub_8035AE54(u8 *arg0, s32 arg1, s32 arg2);
void queue_destruction__7TObjectFv(void *);
void reset_global_table(void);
extern const f32 lbl_805E0110;
extern const f32 lbl_805E0114;
void *__dt__13TUnk_804F1C88Fv(void *arg0, s16 arg1);
void TBoss7LaserPtcl__sub_8035AF0C(void);
void TBoss7LaserPtcl__sub_8035AF10(void);
void TBoss7LaserPtcl__sub_8035AF14(void);
void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TBoss7LaserPtcl::render() {  }

}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
void TBoss7LaserPtcl::run_task() {
    TBoss7LaserPtcl *o = this;
    Vec_8035AAEC v;
    Vec_8035AAEC w;
    Ang_8035AAEC a;
    void **p;
    s32 i;
    s32 n;

    p = o->particles;
    for (i = 2; i != 0; i--) {
        if (*p != NULL) {
            ((TNowLoading *)(*p++))->copy_pos(&o->position);
        }
    }
    if (o->state == 1) {
        o->travel_distance += lbl_805E0100;
        ((TBoss7LaserPtcl *)o)->update_position();
        VecCopy((Vec *)&v, (const Vec *)&o->displacement);
        VecCopy((Vec *)&w, (const Vec *)&o->position);
        normalize_vector(&v);
        v.x *= lbl_805E0104;
        v.y *= lbl_805E0104;
        v.z *= lbl_805E0104;
        a.y = (s32)(lbl_804796D8[0] * atan2_float(v.x, v.z));
        direction_to_rotation_xz((u8 *)&v, (s32 *)&a.x, (s32 *)&a.z);
        for (n = (s32)o->travel_distance / 8; n != 0; n--) {
            create_oneshot_particle_emitter(&w, &a, 0x206, 0x40);
            create_oneshot_particle_emitter(&w, &a, 0x207, 0x40);
            vec3_add_to(&w, &v);
        }
        if (lbl_805E0108 <= o->travel_distance) {
            o->state = 2;
            ((TBoss7LaserPtcl *)o)->destroy_particles();
        }
    }
}
#pragma pop

extern "C" {

void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TBoss7LaserPtcl;
        ((TBoss7LaserPtcl *)arg0)->destroy_particles();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TBoss7LaserPtcl__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl *)&__vt__15TBoss7LaserPtcl).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss7LaserPtcl__class_name;
    *(f32 *)((s8 *)arg0 + 0x4C) = (f32) lbl_805E010C;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    VecCopy((Vec *)(arg0 + 0x20), (const Vec *)arg2);
    VecCopy((Vec *)(arg0 + 0x2C), (const Vec *)arg3);
    ((TBoss7LaserPtcl *)arg0)->update_position();
    *(s32 *)((s8 *)arg0 + 0x44) = (s32)spawn_continuous_particle_effect_with_flags(arg2, 0x204, 0x40);
    *(s32 *)((s8 *)arg0 + 0x48) = (s32)spawn_continuous_particle_effect_with_flags(arg2, 0x205, 0x40);
    return arg0;
}

void TUnk_804F1C88::render() {  }

void TUnk_804F1C88::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 i;
    Ptcl_8035AD68 *o = (Ptcl_8035AD68 *)arg0;
    o->x40 += lbl_805E0110;
    reset_global_table();
    TObjPlayer::apply_status_effect((s32)o->x1c);
    for (i = 0; i != TObjOnlineEnding::get_instance(); i++) {
        u8 **e = (u8 **)TObjOnlineEnding::get_attack_entry(i);
        ((TBoss7PhotonBullet *)(o->x10))->emit_hit_effect(*e + 0x38);
    }
    reset_global_table();
    if (lbl_805E0114 < o->x40) {
        queue_destruction__7TObjectFv(o);
    }
}

void *__dt__13TUnk_804F1C88Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F1C88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8035AE54_lbl_804F1C88_size[sizeof(RecoveredGlobal_8035AE54_lbl_804F1C88) == 0x18 ? 1 : -1];
u8 *TBoss7LaserPtcl__sub_8035AE54(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *)arg0, (void *)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8035AE54_lbl_804F1C88 *)&lbl_804F1C88).value;
    *(f32 *)((s8 *)arg0 + 0x34) = (f32) lbl_805E0118;
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) lbl_805E0118;
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805E0118;
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) lbl_805E0118;
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) lbl_805E0118;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0x11F07;
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) lbl_805E0118;
    *(f32 *)((s8 *)arg0 + 0x54) = (f32) lbl_805E0118;
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) lbl_805E0118;
    *(f32 *)((s8 *)arg0 + 0x5C) = (f32) lbl_805E0118;
    *(u8 **)((s8 *)arg0 + 0x1C) = (unsigned char *) ((void *) (arg0 + 0x34));
    *(s32 *)((s8 *)arg0 + 0x20) = 1;
    VecCopy((Vec *)(arg0 + 0x24), (const Vec *)(arg2));
    spawn_particle_effect((arg0 + 0x24), 0x211);
    create_timed_particle_emitter((arg0 + 0x24), 0x213, 0, 0x1E);
    return arg0;
}

void TBoss7LaserPtcl__sub_8035AF0C(void) {  }
void TBoss7LaserPtcl__sub_8035AF10(void) {  }
void TBoss7LaserPtcl__sub_8035AF14(void) {  }

}
