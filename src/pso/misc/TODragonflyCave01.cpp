#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

extern "C" {
extern char lbl_80441100[];
extern char lbl_80441110[];
extern char lbl_80441124[];
extern char lbl_80441138[];
extern char lbl_80441150[];
extern char lbl_80441168[];
extern const char *bm_fs_obj_tombo_model_names[2];
extern const char *bm_fs_obj_tombo_motion_names[2];
extern BmlResourceDescriptor dragonfly_cave01_resource_descriptor;
extern const char *fs_obj_ex_entombo_model_names[2];
extern const char *fs_obj_ex_entombo_motion_names[2];
extern BmlResourceDescriptor TODragonflyCave01__resource_descriptor;
}

struct VBase_18_1a504b { char pad[0x18]; };
struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(void *);
};

extern "C" {
u8 *TODragonfly__ct(u8 *arg0);
f32 sin_table_lookup(s32);
s32 rand(void);
extern s32 __vt__17TODragonflyCave01[];
extern s32 TODragonflyCave01__class_name;
extern u32 TODragonflyCave01__static_model_resource;
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB564;
extern const f32 lbl_805DB568;
extern const f32 lbl_805DB56C;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
u8 *TODragonflyCave01__ct(u8 *arg0, void *arg1);
}

extern "C" {
u8 *TODragonfly__ct(u8 *arg0);
s32 rand(void);
}

extern "C" {

void *TODragonflyCave01__create(void *arg0);
void *__dt__17TODragonflyCave01Fv(void *arg0, s16 arg1);
void release_static_instance__17TODragonflyCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__dt__11TODragonflyFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);

void *TODragonflyCave01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TODragonflyCave01__ct((u8 *)(o), (void *)(arg0));
    }
    return o;
}

extern u32 TODragonflyCave01__static_model_resource;

void release_static_instance__17TODragonflyCave01Fv(void) {
    if ((u32) TODragonflyCave01__static_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TODragonflyCave01__static_model_resource, 1);
        TODragonflyCave01__static_model_resource = 0U;
    }
}

void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_global_state__14TOKeyMachine01Fv();

void load_resources__17TODragonflyCave01Fv(void) {
    void *o;

    switch (get_global_state__14TOKeyMachine01Fv()) {
    default:
        o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, &dragonfly_cave01_resource_descriptor, 0, 0, 0);
        }
        TODragonflyCave01__static_model_resource = (u32)o;
        break;
    case 0x10:
    case 0x15:
    case 0x16:
        o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, &TODragonflyCave01__resource_descriptor, 0, 0, 0);
        }
        TODragonflyCave01__static_model_resource = (u32)o;
        break;
    }
}

extern s32 __vt__17TODragonflyCave01[];

void *__dt__17TODragonflyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TODragonflyCave01;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
f32 sin_table_lookup(s32);
extern s32 __vt__17TODragonflyCave01[];
extern s32 TODragonflyCave01__class_name;
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB564;
extern const f32 lbl_805DB568;
extern const f32 lbl_805DB56C;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;

#pragma pop

}

#include "types.h"

struct DfBase_80164cc4_80164760 { char pad[0x18]; };
struct DfV_80164cc4_80164760 : DfBase_80164cc4_80164760 {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual void vf05(); virtual void vf06(); virtual void vf07();
    virtual void vf08(); virtual void vf09(); virtual void vf10(); virtual void vf11();
    virtual void vf12();
};

struct RecoveredGlobal_80164764_lbl_8050BEE0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80164764_lbl_8050BFA0 {
    s32 value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_80164764_lbl_8058D490 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80164DEC___vt__11TODragonfly { s32 value; u8 remaining[0x38]; };

struct Self_8016492C { u8 pad[0x38]; u8 pos[0x70 - 0x38]; f32 radius; u8 pad74[0xAC - 0x74]; s32 state; u8 padb0[0xD4 - 0xB0]; u8 target[0xE0 - 0xD4]; u8 vec[0xC]; };

struct O_80164A90 { u8 pad[0x38]; u8 pos[0x34]; f32 f6c; f32 f70; u8 pad74[0xAC - 0x74]; s32 st; u8 padb0[0xCC - 0xB0]; s32 cc; u8 padd0[4]; u8 d4[0xC]; u8 e0[0xC]; };

extern "C" {
s32 is_any_player_within_radius_xz(s32, f32);
s32 rand(void);
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB588;
extern const f32 lbl_805DB58C;
void TODragonfly__sub_80164990(u8 *arg0);
s32 is_any_player_within_radius_xz(s32, f32);
s32 rand(void);
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB58C;
extern const f32 lbl_805DB590;
void update_idle__11TODragonflyFi(s32 arg0);
f32 atan2_float(f64, f64);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_camera_distance__10TObjPlayerFi(void *);
s32 rand(void);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(s32, s32);
f32 subtract_vector(void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern const f64 lbl_804411B0;
extern RecoveredGlobal_80164764_lbl_8050BEE0 lbl_8050BEE0;
extern RecoveredGlobal_80164764_lbl_8050BFA0 lbl_8050BFA0;
extern RecoveredGlobal_80164764_lbl_8058D490 identity_matrix;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB580;
s32 pick_random_destination__11TODragonflyFPvf(u8 *arg0, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 init_map_object_base(void *, int);
s32 rand(void);
f32 sin_table_lookup(s32);
extern s32 __vt__11TODragonfly[];
extern s32 TODragonfly__class_name;
extern s32 tl_05;
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB56C;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB580;
extern const f32 lbl_805DB594;
u8 *TODragonfly__ct(u8 *arg0);
f32 horizontal_distance_squared(void *, void *);
f32 vec3_add_to(void *, void *);
extern const f32 lbl_805DB584;
void move_toward_target__11TODragonflyFPv(Self_8016492C *self);
f32 horizontal_distance_squared(void *, void *);
s32 is_any_player_within_radius_xz(s32, f32);
s32 pick_random_destination__11TODragonflyFPvf(u8 *arg0, f32 farg0);
f32 vec3_add_to(void *, void *);
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB584;
extern const f32 lbl_805DB590;
void TODragonfly__sub_80164A90(O_80164A90 *arg0);
}

extern "C" {

struct Base_80164c34_80164760 { char pad[0x18]; };
struct VObj_80164c34_80164760 : Base_80164c34_80164760 {
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

void TODragonfly__sub_80164760(void);
void *__dt__11TODragonflyFv(void *arg0, s16 arg1);
void draw_model__11TODragonflyFPv(u8 *arg0);
void update__11TODragonflyFPv(void *arg0);
f32 sin_table_lookup(s32);
s32 post_translate_matrix(void *);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 set_global_param__8TObjFishFi(s32);
s32 update_anim_phase__17TOBarrierEnergy01FPv(void *);

#pragma push
#pragma fp_contract on
u8 *TODragonflyCave01__ct(u8 *arg0, void *arg1) {
    TODragonfly__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TODragonflyCave01;
    *(s32 *)((s8 *)arg0 + 0) = TODragonflyCave01__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(void **)((s8 *)arg0 + 0x34) = *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODragonflyCave01__static_model_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODragonflyCave01__static_model_resource) + 0x42C)) + 0xC);
    *(void **)((s8 *)arg0 + 0xBC) = *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODragonflyCave01__static_model_resource) + 0x430)) + 4);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32)*(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB560;
    *(f32 *)((s8 *)arg0 + 0xB8) = lbl_805DB564;
    *(f32 *)((s8 *)arg0 + 0xC0) = lbl_805DB568;
    *(f32 *)((s8 *)arg0 + 0xC4) = *(f32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    *(s32 *)((s8 *)arg0 + 0xAC) = 0;
    *(f32 *)((s8 *)arg0 + 0xF4) = lbl_805DB56C * (f32)*(s32 *)((s8 *)arg0 + 0x84) + lbl_805DB560;
    *(s32 *)((s8 *)arg0 + 0xF8) = (s32)(lbl_805DB570 * (lbl_805DB574 / (lbl_805DB578 / *(f32 *)((s8 *)arg0 + 0xF4))));
    *(s32 *)((s8 *)arg0 + 0xFC) = (s32)(lbl_805DB570 * (lbl_805DB574 * (lbl_805DB57C * (f32)rand())));
    *(f32 *)((s8 *)arg0 + 0xEC) = lbl_805DB56C * (f32)*(s32 *)((s8 *)arg0 + 0x88) + lbl_805DB560;
    *(f32 *)((s8 *)arg0 + 0xF0) = *(f32 *)((s8 *)arg0 + 0xEC) * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0xFC));
    return arg0;
}
#pragma pop

void TODragonfly__sub_80164760(void) {  }

extern const f32 lbl_805DB580;

typedef char RecoveredGlobal_80164764_lbl_8050BEE0_size[sizeof(RecoveredGlobal_80164764_lbl_8050BEE0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80164764_lbl_8050BFA0_size[sizeof(RecoveredGlobal_80164764_lbl_8050BFA0) == 0x40 ? 1 : -1];
typedef char RecoveredGlobal_80164764_lbl_8058D490_size[sizeof(RecoveredGlobal_80164764_lbl_8058D490) == 0x30 ? 1 : -1];
s32 pick_random_destination__11TODragonflyFPvf(u8 *arg0, f32 farg0) {
    *(f32 *)((s8 *)(&lbl_8050BEE0.value) + 0) = (f32) lbl_805DB580;
    *(f32 *)((s8 *)(&lbl_8050BEE0.value) + 4) = farg0;
    *(f32 *)((s8 *)(&lbl_8050BEE0.value) + 8) = (f32) (*(f32 *)((s8 *)arg0 + 0xD0) * (lbl_805DB57C * (f32) rand()));
    *(s32 *)((s8 *)(&lbl_8050BFA0.value) + 4) = (s32) (lbl_805DB570 * (lbl_805DB574 * (lbl_805DB57C * (f32) rand())));
    push_matrix_from((void *) (&identity_matrix.value));
    rotate_matrix_y((s32)((int) (0)), (s32)((int) (*(s32 *)((s8 *)(&lbl_8050BFA0.value) + 4))));
    rotate_vector_by_matrix((int) (0), (void *) (&lbl_8050BEE0.value), (void *) (&lbl_8050BEE0.value));
    pop_matrix();
    vec3_add_to((void *) (&lbl_8050BEE0.value), (void *) (arg0 + 0x50));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD4), (void *) (&lbl_8050BEE0.value));
    subtract_vector((void *) (&lbl_8050BEE0.value), (void *) (arg0 + 0x38));
    if (check_camera_distance__10TObjPlayerFi((void *) (&lbl_8050BEE0.value)) == 1) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 1;
        *(s32 *)((s8 *)arg0 + 0xCC) = 0;
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (lbl_804411B0 * atan2_float((f64) *(f32 *)((s8 *)(&lbl_8050BEE0.value) + 0), (f64) *(f32 *)((s8 *)(&lbl_8050BEE0.value) + 8)));
        *(f32 *)((s8 *)arg0 + 0xE0) = (f32) (*(f32 *)((s8 *)(&lbl_8050BEE0.value) + 0) * *(f32 *)((s8 *)arg0 + 0x70));
        *(f32 *)((s8 *)arg0 + 0xE4) = (f32) (*(f32 *)((s8 *)(&lbl_8050BEE0.value) + 4) * *(f32 *)((s8 *)arg0 + 0x70));
        *(f32 *)((s8 *)arg0 + 0xE8) = (f32) (*(f32 *)((s8 *)(&lbl_8050BEE0.value) + 8) * *(f32 *)((s8 *)arg0 + 0x70));
        return 1;
    }
    return 0;
}

void move_toward_target__11TODragonflyFPv(Self_8016492C *self) {
    f32 d = horizontal_distance_squared(self->target, self->pos);
    if (d < (lbl_805DB584 + self->radius) * (lbl_805DB584 + self->radius)) {
        self->state = 2;
    } else {
        vec3_add_to(self->pos, self->vec);
    }
}

#pragma push
#pragma fp_contract on
void TODragonfly__sub_80164990(u8 *arg0) {
    s32 temp_r5;
    temp_r5 = *(s32 *)((s8 *)arg0 + 0xCC);
    *(s32 *)((s8 *)arg0 + 0xCC) = (s32) (temp_r5 + 1);
    if (lbl_805DB578 < (f32) temp_r5) {
        if (is_any_player_within_radius_xz((s32) arg0, lbl_805DB588) == 1) {
            if (pick_random_destination__11TODragonflyFPvf((u8 *)(arg0), lbl_805DB578 + *(f32 *)((s8 *)arg0 + 0x6C)) == 1) {
                *(s32 *)((s8 *)arg0 + 0xAC) = 3;
                *(s32 *)((s8 *)arg0 + 0xCC) = 0;
            }
        } else if (pick_random_destination__11TODragonflyFPvf((u8 *)(arg0), *(f32 *)((s8 *)arg0 + 0x6C) * ((lbl_805DB58C * (lbl_805DB57C * (f32) rand())) - lbl_805DB560)) == 1) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 1;
            *(s32 *)((s8 *)arg0 + 0xCC) = 0;
        }
    }
}
#pragma pop

void TODragonfly__sub_80164A90(O_80164A90 *arg0) {
    f32 t;
    f32 d;
    if (is_any_player_within_radius_xz((s32)arg0, lbl_805DB590) == 1) {
        if (pick_random_destination__11TODragonflyFPvf((u8 *)arg0, lbl_805DB578 + arg0->f6c) == 1) {
            arg0->st = 3;
            arg0->cc = 0;
        }
    } else {
        d = horizontal_distance_squared(arg0->d4, arg0->pos);
        t = lbl_805DB584 + arg0->f70;
        if (d < t * t) {
            arg0->st = 0;
            return;
        }
        vec3_add_to(arg0->pos, arg0->e0);
    }
}

#pragma push
#pragma fp_contract on
void update_idle__11TODragonflyFi(s32 arg0) {
    s32 temp_r4;
    if (is_any_player_within_radius_xz(arg0, lbl_805DB590) == 1) {
        if (pick_random_destination__11TODragonflyFPvf((u8 *)((void *) arg0), lbl_805DB578 + *(f32 *)((s8 *)arg0 + 0x6C)) == 1) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 3;
            *(s32 *)((s8 *)arg0 + 0xCC) = 0;
        }
    } else {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0xCC);
        *(s32 *)((s8 *)arg0 + 0xCC) = (s32) (temp_r4 + 1);
        if ((lbl_805DB578 < (f32) temp_r4) && (pick_random_destination__11TODragonflyFPvf((u8 *)((void *) arg0), *(f32 *)((s8 *)arg0 + 0x6C) * ((lbl_805DB58C * (lbl_805DB57C * (f32) rand())) - lbl_805DB560)) == 1)) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 1;
            *(s32 *)((s8 *)arg0 + 0xCC) = 0;
        }
    }
}
#pragma pop

void draw_model__11TODragonflyFPv(u8 *arg0) {
    if (((VObj_80164c34_80164760 *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        translate_matrix(0, lbl_805DB580, *(f32 *)((s8 *)arg0 + 0xF0), lbl_805DB580);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0x34), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB0));
        pop_matrix();
    }
}

void update__11TODragonflyFPv(void *arg0) {
    s32 temp_r0;

    *(s32 *)((s8 *)arg0 + 0xFC) = (s32) (*(s32 *)((s8 *)arg0 + 0xFC) + *(s32 *)((s8 *)arg0 + 0xF8));
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0xFC)));
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((DfV_80164cc4_80164760 *)arg0)->vf12();
        return;
    }
    update_anim_phase__17TOBarrierEnergy01FPv(arg0);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xAC);
    switch (temp_r0) {
    case 0:
        update_idle__11TODragonflyFi((s32)(arg0));
        return;
    case 1:
        TODragonfly__sub_80164A90((O_80164A90 *)(arg0));
        return;
    case 2:
        TODragonfly__sub_80164990((u8 *)(arg0));
        return;
    case 3:
        move_toward_target__11TODragonflyFPv((Self_8016492C *)(arg0));
        return;
    }
}

extern s32 __vt__11TODragonfly[];

void *__dt__11TODragonflyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TODragonfly;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
u8 *TODragonfly__ct(u8 *arg0) {
    init_map_object_base((void *) (arg0), (int) (tl_05));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80164DEC___vt__11TODragonfly *)&__vt__11TODragonfly).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TODragonfly__class_name;
    *(s32 *)((s8 *)arg0 + 0xCC) = 0;
    *(f32 *)((s8 *)arg0 + 0xD0) = (f32) (lbl_805DB594 + *(f32 *)((s8 *)arg0 + 0x68));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD4), (void *) (arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0xE8) = (f32) lbl_805DB580;
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) lbl_805DB580;
    *(f32 *)((s8 *)arg0 + 0xE0) = (f32) lbl_805DB580;
    *(f32 *)((s8 *)arg0 + 0xF4) = (f32) ((lbl_805DB56C * (f32) *(s32 *)((s8 *)arg0 + 0x84)) + lbl_805DB560);
    *(s32 *)((s8 *)arg0 + 0xF8) = (s32) (lbl_805DB570 * (lbl_805DB574 / (lbl_805DB578 / *(f32 *)((s8 *)arg0 + 0xF4))));
    *(s32 *)((s8 *)arg0 + 0xFC) = (s32) (lbl_805DB570 * (lbl_805DB574 * (lbl_805DB57C * (f32) rand())));
    *(f32 *)((s8 *)arg0 + 0xEC) = (f32) ((lbl_805DB56C * (f32) *(s32 *)((s8 *)arg0 + 0x88)) + lbl_805DB560);
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) * sin_table_lookup((s32)((int) (*(s32 *)((s8 *)arg0 + 0xFC)))));
    return arg0;
}
#pragma pop

}

extern "C" {
__declspec(section ".data") const char *bm_fs_obj_tombo_model_names[2] = { lbl_80441100, NULL };
__declspec(section ".data") const char *bm_fs_obj_tombo_motion_names[2] = { lbl_80441110, NULL };
BmlResourceDescriptor dragonfly_cave01_resource_descriptor = { lbl_80441124, bm_fs_obj_tombo_model_names, bm_fs_obj_tombo_motion_names, 1, 1 };
__declspec(section ".data") const char *fs_obj_ex_entombo_model_names[2] = { lbl_80441138, NULL };
__declspec(section ".data") const char *fs_obj_ex_entombo_motion_names[2] = { lbl_80441150, NULL };
BmlResourceDescriptor TODragonflyCave01__resource_descriptor = { lbl_80441168, fs_obj_ex_entombo_model_names, fs_obj_ex_entombo_motion_names, 1, 1 };
}
