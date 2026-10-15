#include "types.h"
#include "pso/item/TObjContainerJung.h"

struct VBase { char pad[0x18]; };

struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77();
};

struct RecoveredGlobal_8018D47C_lbl_804B7134 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8018D47C_lbl_804B7134_size[sizeof(RecoveredGlobal_8018D47C_lbl_804B7134) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8018D85C_lbl_804B7168 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018D85C___vt__17TObjContainerJung {
    s32 value;
    u8 remaining[0x148];
};

struct Vec_8018D4DC { f32 x, y, z; };

struct Spawn_8018D4DC {
    u8 pad0[0xC];
    Vec_8018D4DC pos;
    u8 pad18[0x20];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};

struct Obj_8018D4DC {
    u8 pad0[0x38];
    Vec_8018D4DC pos;
    u8 pad44[0x326 - 0x44];
    s16 f326;
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 request_box_item_drop(void *, void *, int);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, int, int);
s32 set_flag8__6TLobbyFPv(void *);
void TObjContainerJung__vt4(u8 *arg0, s16 *arg1, s32 arg2);
u8 * get_bml_model(void *, int);
extern s32 TObjContainerJung__bml_model_resource;
s32 TObjFish__sub_8001EDB0(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
extern RecoveredGlobal_8018D47C_lbl_804B7134 TObjContainerJung__resource_descriptor;
extern s32 TObjContainerJung__bml_model_resource;
extern s32 TObjContainerJung__bml_aux_handle;
void VecCopy__FP3VecPC3Vec(void *, void *);
void reset_photon_effect__10TObjPlayerFv(s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_container_base(void *, s32);
extern RecoveredGlobal_8018D85C_lbl_804B7168 container_jung_collision_desc;
extern s32 __vt__17TObjContainerJung[];
extern s32 TObjContainerJung__name;
u8 *TObjContainerJung__ct(u8 *arg0, s32 arg1, s32 _w2);
u8 * get_bml_model(void *, int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 scale_matrix(s32, f32, f32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(s32);
s32 draw_ginja_object();
extern s32 TObjContainerJung__bml_model_resource;
extern s32 TObjContainerJung__bml_aux_handle;
extern const f32 lbl_805DBD9C;
void TObjContainerJung__vt79(u8 *arg0);
u8 * get_bml_model(void *, int);
void spawn_particle_effect_with_flags(void *, int, int);
void construct_debris__8TObjChipFPvPvPv(void *, void *, void *);
void play_container_break_sound(void *);
void *__nw__7TObjectFUl(int);
extern Spawn_8018D4DC container_jung_debris_desc;
extern Spawn_8018D4DC container_jung_spawn_params;
extern s32 TObjContainerJung__bml_model_resource;
extern s32 TObjContainerJung__bml_aux_handle;
extern void *tl_05;
void TObjContainerJung__vt77(const Obj_8018D4DC *self);
}

extern "C" {

s32 TObjContainerJung__sub_8018D3B8(void);
void TObjContainerJung__vt78(void *arg0);
void *__dt__17TObjContainerJungFv(void *arg0, s16 arg1);
s32 TLobby__sub_8001FE7C(s32, s32);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_container_object__10TObjPlayerFs(void *, s32);

extern s32 TObjContainerJung__bml_aux_handle;

s32 TObjContainerJung__sub_8018D3B8(void) {
    return TObjContainerJung__bml_aux_handle;
}

extern void *tl_05;

u8 *TObjContainerJung::get_model_by_index(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJung__bml_model_resource) != NULL) {
        return get_bml_model((*(u8 * *)&TObjContainerJung__bml_model_resource), arg0);
    }
    return NULL;
}

void *TObjContainerJung::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJung__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 TObjContainerJung__bml_model_resource;
extern s32 TObjContainerJung__bml_aux_handle;

void TObjContainerJung::release() {
    TLobby__sub_8001FE7C(TObjContainerJung__bml_model_resource, 1);
    TObjContainerJung__bml_model_resource = 0;
    TObjContainerJung__bml_aux_handle = 0;
}

void TObjContainerJung::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &TObjContainerJung__resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TObjContainerJung__bml_model_resource) = (unsigned char *) ((void *) var_r0);
    TObjContainerJung__bml_aux_handle = TObjFish__sub_8001EDB0((void *) var_r0, 0);
}

#pragma push
#pragma opt_propagation off
void TObjContainerJung__vt77(const Obj_8018D4DC *self) {
    void *o;
    if (self->f326 != 1) {
        Spawn_8018D4DC a = container_jung_debris_desc;
        f32 pz;
        f32 py;
        f32 px;
        px = self->pos.x;
        py = self->pos.y;
        pz = self->pos.z;
        a.pos.x = px;
        a.pos.y = py;
        a.pos.z = pz;
        a.f38 = py;
        a.f40 = (s32) get_bml_model((void *) TObjContainerJung__bml_model_resource, 1);
        a.f44 = TObjContainerJung__bml_aux_handle;
        Spawn_8018D4DC b = container_jung_spawn_params;
        f32 qz;
        f32 qy;
        f32 qx;
        qx = self->pos.x;
        qy = self->pos.y;
        qz = self->pos.z;
        b.pos.x = qx;
        b.pos.y = qy;
        b.pos.z = qz;
        b.f38 = qy;
        b.f40 = (s32) get_bml_model((void *) TObjContainerJung__bml_model_resource, 2);
        b.f44 = TObjContainerJung__bml_aux_handle;
        spawn_particle_effect_with_flags((void *)&self->pos, 0x45, 0x40);
        spawn_particle_effect_with_flags((void *)&self->pos, 0x46, 0x40);
        o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &b);
        }
        play_container_break_sound((void *)self);
    }
}
#pragma pop

void TObjContainerJung__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj*)arg0)->m77();
            request_box_item_drop((void *) (arg0), (void *) (arg0 + 0x38), (int) (1));
            clear_player_status_flag__10TObjPlayerFlUl((void *) (arg0), (int) (0), (int) (1));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            *(s16 *)((s8 *)arg0 + 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        clear_player_status_flag__10TObjPlayerFlUl((void *) (arg0), (int) (0), (int) (1));
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        *(s16 *)((s8 *)arg0 + 0x326) = 1;
    }
}

void TObjContainerJung__vt79(u8 *arg0) {
    if ((void *)(*(u8 **)&TObjContainerJung__bml_model_resource) != NULL) {
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
            set_global_param__8TObjFishFl(TObjContainerJung__bml_aux_handle);
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            scale_matrix(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
            get_bml_model(*(u8 **)&TObjContainerJung__bml_model_resource, 0);
            draw_ginja_object();
            begin_effect_render__13TParticleCtrlFv();
            get_bml_model(*(u8 **)&TObjContainerJung__bml_model_resource, 3);
            draw_ginja_object();
            end_effect_render__13TParticleCtrlFv();
            pop_matrix();
            break;
        case 1:
            break;
        }
    }
}

void TObjContainerJung__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x364) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    case 1:
        return;
    }
}

extern s32 __vt__17TObjContainerJung[];

void *__dt__17TObjContainerJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjContainerJung;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_container_object__10TObjPlayerFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018D85C_lbl_804B7168_size[sizeof(RecoveredGlobal_8018D85C_lbl_804B7168) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018D85C___vt__17TObjContainerJung_size[sizeof(RecoveredGlobal_8018D85C___vt__17TObjContainerJung) == 0x14C ? 1 : -1];
u8 *TObjContainerJung__ct(u8 *arg0, s32 arg1, s32 _w2) {
    init_container_base(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018D85C___vt__17TObjContainerJung *)&__vt__17TObjContainerJung).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjContainerJung__name;
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x60000000);
    init_collision_body_parts(arg0, (s32) &container_jung_collision_desc.value, 1);
    reset_photon_effect__10TObjPlayerFv((s32) arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&container_jung_collision_desc.value) + 4));
    return arg0;
}

}
