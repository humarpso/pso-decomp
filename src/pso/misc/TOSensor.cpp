#include "types.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TORockCave.h"
#include "pso/misc/TOSensorAncient01.h"
#include "pso/misc/TOSensor.h"
#include "pso/system/BmlResourceDescriptor.h"

extern char lbl_80442980[];
extern char lbl_80442998[];
extern char lbl_804429B0[];
extern const char *bm_fs_obj_o_sensor01_model_names[2];
extern const char *bm_fs_obj_o_sensor01_motion_names[2];
extern BmlResourceDescriptor TOSensorAncient01__resource_descriptor;

struct VBase_801755BC { u8 pad[0x18]; };

struct Obj_801755BC : VBase_801755BC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual s32 m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    u16 id;
    u8 pad1e[0x3C - 0x1E];
    f32 y3c;
    u8 pad40[0x54 - 0x40];
    f32 y54;
    u8 pad58[0xC8 - 0x58];
    s32 switchId;
    u8 padcc[0xD4 - 0xCC];
    s32 state;
};

struct Pkt_801755BC { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Obj_801756C4 { u8 pad[0x38]; f32 pos[3]; u8 pad44[0xCC - 0x44]; f32 range; s32 mode; s32 state; };

struct Player_801756C4 { u8 pad[0x38]; f32 pos[3]; };

extern "C" {
void play_persistent_sound(int, void *, void *, int, int);
void TOSensor__sub_8017546C(u8 *arg0);
void TOSensor__sub_80175514(u8 *arg0);
s32 get_current_floor();
void queue_destruction__7TObjectFv(void *);
extern s32 local_client_id;
extern const f32 lbl_805DB980;
s32 obj_testFlags30(void *, s32);
f32 horizontal_distance_squared(void *, void *);
Player_801756C4 *get_player_by_client_id(s32);
void *TOSensor__ct(void *arg0);
void *__dt__8TOSensorFv(void *arg0, s16 arg1);
void render__8TOSensorFv(void);
void TOKey__ct(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);

void TOSensor::vfunc_25() {  }

extern s32 __vt__8TOSensor[];

void TOSensor__sub_8017546C(u8 *arg0) {
    switch (TOKeyMachine01::get_global_state()) {
    case 3:
    case 4:
    case 5:
        play_persistent_sound(0x43C1C, arg0, arg0 + 0x38, 0, 0);
        return;
    case 6:
    case 7:
        play_persistent_sound(0x4004BC13, arg0, arg0 + 0x38, 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        play_persistent_sound(0x46419, arg0, arg0 + 0x38, 0, 0);
    case 0:
        return;
    case 1:
        return;
    case 2:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

void TOSensor__sub_80175514(u8 *arg0) {
    switch (TOKeyMachine01::get_global_state()) {
    case 3:
    case 4:
    case 5:
        play_persistent_sound(0x4411D, arg0, arg0 + 0x38, 0, 0);
        return;
    case 6:
    case 7:
        play_persistent_sound(0x4004C114, arg0, arg0 + 0x38, 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        play_persistent_sound(0x4641A, arg0, arg0 + 0x38, 0, 0);
    case 0:
        return;
    case 1:
        return;
    case 2:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

void TOSensor::update_armed_switch() {
    Obj_801755BC *self = (Obj_801755BC *)this;
    self->m12();
    if (self->state != 1) {
        self->m15();
        TOSensor__sub_8017546C((u8 *)self);
        if (self->m13() == 1) {
            Pkt_801755BC pkt;
            self->m16();
            ((TLobby *)(&pkt))->init_6x05_switch_changed();
            pkt.object = self->id;
            pkt.zero = local_client_id;
            pkt.switchId = self->switchId;
            pkt.area = get_current_floor();
            pkt.flags = 1;
            ((TLobby *)(&pkt))->finalize_and_send_60();
        }
    } else {
        self->m14();
        TOSensor__sub_80175514((u8 *)self);
    }
    if (lbl_805DB980 + self->y54 < self->y3c) {
        queue_destruction__7TObjectFv(self);
    }
}

s32 TOSensor::is_confirm_pressed() {
    Obj_801756C4 *self = (Obj_801756C4 *)this;
    Player_801756C4 *pl;
    if (self->state != 1) {
        pl = get_player_by_client_id(local_client_id);
        switch (self->mode) {
        case 1:
            if (pl != NULL && obj_testFlags30(pl, 0x400000) != 0) {
                if (horizontal_distance_squared(pl->pos, self->pos) < self->range * self->range) {
                    self->state = 1;
                }
            }
            break;
        case 2:
            if (local_client_id == TWindowCtrl::get_window_id() && pl != NULL) {
                if (horizontal_distance_squared(pl->pos, self->pos) < self->range * self->range) {
                    self->state = 1;
                }
            }
            break;
        }
    }
    return self->state;
}

void *__dt__8TOSensorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TOSensor;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D3140;

void *TOSensor__ct(void *arg0) {
    TOKey__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TOSensor;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 80), (void *)((char *)arg0 + 56));
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3140;
    return arg0;
}

void TOSensor::vfunc_16() {  }
void TOSensor::vfunc_17() {  }
void render__8TOSensorFv(void) {  }

void TOSensorAncient01::vfunc_25() {  }

#pragma push
#pragma opt_common_subs off
void TOSensorAncient01::update_pulse_value() {
    if (*(s32 *)&this->unk_F4 & 1) {
        this->m_f0 += (0.26666668f);
        if ((4.0f) < this->m_f0) {
            this->m_f0 = (f32) (4.0f);
            *(s32 *)&this->unk_F4 = (s32) (*(s32 *)&this->unk_F4 & 0xFFFFFFFE);
        }
    } else {
        this->m_f0 = (f32) (this->m_f0 - (0.26666668f));
        if (this->m_f0 < (0.0f)) {
            this->m_f0 = (f32) (0.0f);
            *(s32 *)&this->unk_F4 = (s32) (*(s32 *)&this->unk_F4 | 1);
        }
    }
}
#pragma pop

void TOSensorAncient01::vfunc_17() {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)this + 0xEC);
    *(s32 *)((s8 *)this + 0xEC) = (s32) (temp_r4 + 0x28F);
    update_pulse_value();
}
void TOSensorAncient01::vfunc_16() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    *(s32 *)((s8 *)arg0 + 0xEC) += (1.31e+03f);
    ((TOSensorAncient01 *)arg0)->update_pulse_value();
    temp_r3 = this->m_e8;
    if (temp_r3 > 0) {
        this->m_e8 = (s32) (temp_r3 - 1);
        return;
    }
    this->m_e8 = 0;
    *(f32 *)((s8 *)arg0 + 0x3C) += (1.0f);
}

}

#include "pso/TParticleCtrl.h"
#include "pso/misc/TOKey.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct VBase_80175994 { char pad[0x18]; };
struct VObj_80175994 : VBase_80175994 {
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

struct RecoveredGlobal_80175E2C___vt__17TOSensorAncient01 { s32 value; u8 remaining[0x6C]; };

struct Model_80175D0C { u8 pad[0xC]; s32 c; };

struct Obj_80175D0C { u8 pad[0x42C]; Model_80175D0C *model; };

struct Buf_80175D0C { s32 a; s32 b; s32 c; s32 d; };

extern "C" {
extern s32 __vt__17TOSensorAncient01[];
extern s32 TOSensorAncient01_class_name;
extern u32 sensor_ancient01_model_resource;
u8 *TOSensorAncient01__ct(u8 *arg0, s32 arg1, s32 arg2);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
void *mem_alloc(s32);
s32 load_gvm_texture_file(const void *);
extern void *ancient_sensor_resource_pair_table;
extern s32 lbl_805D5A90;
extern s32 lbl_805D5A94;
extern s32 lbl_805D5A98;
extern s32 sensor_texture_table_index;
void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void *__nw__7TObjectFUl(int);
s32 mem_free(void*);

void draw_ginja_model(s32);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
struct Pair_80175994 { s32 a; s32 b; };

void TOSensorAncient01::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r30;
    u8 *temp_r30_2;
    u8 *temp_r30_3;
    u8 *temp_r30_4;
    u8 *temp_r30_5;
    u8 *temp_r30_6;
    u8 *temp_r30_7;
    u8 *temp_r30_8;
    u8 *temp_r30_9;

    if (((VObj_80175994 *)arg0)->m8(this->m_c0, *(f32 *)&this->m_c4) != 0) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (this->rotation_y));
        TObjFish::set_global_param(*(s32 *)((s8 *)ancient_sensor_resource_pair_table + (*(s32 *)&this->m_8c * 8)));
        temp_r30 = (u8 *)(*(u8 * *)&this->model);
        post_translate_matrix((void *) (temp_r30 + 8));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30 + 4));
        TParticleCtrl::begin_effect_render();
        push_matrix();
        temp_r30_2 = (u8 *)(*(u8 **)((s8 *)temp_r30 + 0x2C));
        if ((f32) this->m_e8 < (3e+01f)) {
            Pair_80175994 *tbl = (Pair_80175994 *)ancient_sensor_resource_pair_table;
            TObjFish::set_global_param(tbl[sensor_texture_table_index].b);
        }
        post_translate_matrix((void *) (temp_r30_2 + 8));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_2 + 4));
        pop_matrix();
        push_matrix();
        temp_r30_3 = (u8 *)(*(u8 **)((s8 *)temp_r30_2 + 0x30));
        if ((f32) this->m_e8 < (6e+01f)) {
            Pair_80175994 *tbl = (Pair_80175994 *)ancient_sensor_resource_pair_table;
            TObjFish::set_global_param(tbl[sensor_texture_table_index].b);
        }
        post_translate_matrix((void *) (temp_r30_3 + 8));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_3 + 4));
        pop_matrix();
        push_matrix();
        temp_r30_4 = (u8 *)(*(u8 **)((s8 *)temp_r30_3 + 0x30));
        if ((f32) this->m_e8 < (9e+01f)) {
            Pair_80175994 *tbl = (Pair_80175994 *)ancient_sensor_resource_pair_table;
            TObjFish::set_global_param(tbl[sensor_texture_table_index].b);
        }
        post_translate_matrix((void *) (temp_r30_4 + 8));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_4 + 4));
        pop_matrix();
        TParticleCtrl::end_effect_render();
        push_matrix();
        temp_r30_5 = (u8 *)(*(u8 **)((s8 *)temp_r30_4 + 0x30));
        post_translate_matrix((void *) (temp_r30_5 + 8));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0xEC)));
        TParticleCtrl::begin_effect_render();
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_5 + 4));
        TParticleCtrl::end_effect_render();
        push_matrix();
        temp_r30_6 = (u8 *)(*(u8 **)((s8 *)temp_r30_5 + 0x2C));
        translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r30_6 + 8) + this->m_f0), (f32) (*(f32 *)((s8 *)temp_r30_6 + 0xC)), (f32) (*(f32 *)((s8 *)temp_r30_6 + 0x10)));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_6 + 4));
        pop_matrix();
        push_matrix();
        temp_r30_7 = (u8 *)(*(u8 **)((s8 *)temp_r30_6 + 0x30));
        translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r30_7 + 8)), (f32) (*(f32 *)((s8 *)temp_r30_7 + 0xC)), (f32) (*(f32 *)((s8 *)temp_r30_7 + 0x10) - this->m_f0));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_7 + 4));
        pop_matrix();
        push_matrix();
        temp_r30_8 = (u8 *)(*(u8 **)((s8 *)temp_r30_7 + 0x30));
        translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r30_8 + 8) - this->m_f0), (f32) (*(f32 *)((s8 *)temp_r30_8 + 0xC)), (f32) (*(f32 *)((s8 *)temp_r30_8 + 0x10)));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_8 + 4));
        pop_matrix();
        push_matrix();
        temp_r30_9 = (u8 *)(*(u8 **)((s8 *)temp_r30_8 + 0x30));
        translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r30_9 + 8)), (f32) (*(f32 *)((s8 *)temp_r30_9 + 0xC)), (f32) (*(f32 *)((s8 *)temp_r30_9 + 0x10) + this->m_f0));
        draw_ginja_model(*(s32 *)((s8 *)temp_r30_9 + 4));
        pop_matrix();
        pop_matrix();
        pop_matrix();
    }
}

extern void *tl_05;

void *TOSensorAncient01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOSensorAncient01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOSensorAncient01::destroy() {
    if ((void *) ancient_sensor_resource_pair_table != NULL) {
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)ancient_sensor_resource_pair_table + 0));
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)ancient_sensor_resource_pair_table + 0xC));
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)ancient_sensor_resource_pair_table + 8));
        if ((void *) ancient_sensor_resource_pair_table != NULL) {
            mem_free((void*)ancient_sensor_resource_pair_table);
            ancient_sensor_resource_pair_table = NULL;
        }
    }
    if ((u32) sensor_ancient01_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)sensor_ancient01_model_resource, 1);
        sensor_ancient01_model_resource = 0U;
    }
}

extern "C" {
extern const char lbl_804429E8[];
extern const char lbl_80442A00[];
extern const char lbl_80442A18[];
}

void TOSensorAncient01::load_resources() {
    void *p;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 1, &TOSensorAncient01__resource_descriptor, 0, 0, 0);
    }
    sensor_ancient01_model_resource = (u32)p;
    ancient_sensor_resource_pair_table = mem_alloc(0x10);
    ((Buf_80175D0C *)ancient_sensor_resource_pair_table)->b = ((Obj_80175D0C *)sensor_ancient01_model_resource)->model->c;
    ((Buf_80175D0C *)ancient_sensor_resource_pair_table)->a = load_gvm_texture_file(lbl_804429E8);
    ((Buf_80175D0C *)ancient_sensor_resource_pair_table)->d = load_gvm_texture_file(lbl_80442A00);
    ((Buf_80175D0C *)ancient_sensor_resource_pair_table)->c = load_gvm_texture_file(lbl_80442A18);
    lbl_805D5A90 = 0;
    lbl_805D5A94 = 0;
    lbl_805D5A98 = 0;
    sensor_texture_table_index = 0;
}

extern "C" {
__declspec(section ".rodata") extern const char lbl_804429E8[] = "fs_obj_o_sensor01r.gvm";
__declspec(section ".rodata") extern const char lbl_80442A00[] = "fs_obj_o_sensor02.gvm";
__declspec(section ".rodata") extern const char lbl_80442A18[] = "fs_obj_o_sensor02r.gvm";
}

void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TOSensorAncient01;
        ((void (*)(void *, int))__dt__8TOSensorFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
u8 *TOSensorAncient01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    ((s32 (*)(void *))TOSensor__ct)((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80175E2C___vt__17TOSensorAncient01 *)&__vt__17TOSensorAncient01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOSensorAncient01_class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    ((TOKey *)arg0)->init_switch_id();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x8C);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x8C) = 0;
    } else if (temp_r0 >= 2) {
        *(s32 *)((s8 *)arg0 + 0x8C) = 1;
    }
    *(u8 **)((s8 *)arg0 + 0x34) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&sensor_ancient01_model_resource) + 0x42C)) + 8));
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&sensor_ancient01_model_resource) + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - (1.0f));
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) (1.0f);
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) (4e+02f);
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) ((5e+01f) + *(f32 *)((s8 *)arg0 + 0x68));
    if (*(f32 *)((s8 *)arg0 + 0xCC) < (0.0f)) {
        *(f32 *)((s8 *)arg0 + 0xCC) = (f32) (0.0f);
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
        *(s32 *)((s8 *)arg0 + 0xD0) = 2;
    } else {
        *(s32 *)((s8 *)arg0 + 0xD0) = 1;
    }
    *(s32 *)((s8 *)arg0 + 0xE8) = 0x78;
    *(s32 *)((s8 *)arg0 + 0xEC) = 0;
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) (0.0f);
    *(s32 *)((s8 *)arg0 + 0xF4) = 0;
    return arg0;
}
#pragma pop

__declspec(section ".data") const char *bm_fs_obj_o_sensor01_model_names[2] = { lbl_80442980, NULL };
__declspec(section ".data") const char *bm_fs_obj_o_sensor01_motion_names[2] = { lbl_80442998, NULL };
BmlResourceDescriptor TOSensorAncient01__resource_descriptor = { lbl_804429B0, bm_fs_obj_o_sensor01_model_names, bm_fs_obj_o_sensor01_motion_names, 1, 1 };
}
