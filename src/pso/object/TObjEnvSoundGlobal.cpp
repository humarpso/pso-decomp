#include "types.h"
#include "pso/object/TObjEnvSoundEx.h"
#include "pso/object/TObjEnvSoundGlobal.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TOKeyMachine01.h"

struct RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal {
    s32 value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_801902D8_lbl_804B7A70 { s32 value; u8 remaining[0x8C]; };

struct Obj_801903B4 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x90 - 0x44]; f32 param; s32 sound; s32 mode; };

struct Env_80190624 {
    u8 pad0[0x38];
    u8 pos[0x90 - 0x38];
    s32 f90;
    f32 vol;
    f32 step;
    s32 f9C;
    s32 mode;
    f32 range;
};

extern "C" {
s32 construct_world_actor_base(void *, void *);
extern s32 __vt__18TObjEnvSoundGlobal[];
extern s32 TObjEnvSoundGlobal__class_name;
u8 *TObjEnvSoundGlobal__ct(u8 *arg0, s32 arg1, s32 arg2);
u8 *TObjEnvSoundEx__ct(u8 *arg0, s32 arg1, s32 arg2);
void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q);
extern RecoveredGlobal_801902D8_lbl_804B7A70 environment_sound_tables_by_area;
extern const f32 lbl_805DBE18;
extern const f32 lbl_805DBE1C;
s32 play_persistent_sound(s32 id, s32 a1, u32 src, s32 a3, s32 flags);
f32 xz_distance_squared(void *, void *);
extern u8 *camera_ctrl_instance;
void run_task__14TObjEnvSoundExFv(Env_80190624 *o);
void * TObjEnvSoundEx__create(void *arg0);
void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int is_not_split_screen__13TRaderMapCoreFv(void *);

#pragma push
#pragma opt_common_subs off
s32 TObjEnvSoundGlobal::setup_sound() {
    s32 var_r31;
    u32 temp_r4;
    var_r31 = 1;
    temp_r4 = *(s32 *)((s8 *)&environment_sound_tables_by_area.value + (TOKeyMachine01::get_global_state() * 4));
    if (temp_r4 != 0U) {
        copy_pair__18TObjEnvSoundGlobalFPvPv((u8 *)&this->m_94, (void*)((int) (temp_r4 + (this->m_84 * 8))));
    } else {
        var_r31 = 0;
        this->m_94 = -1;
        this->m_98 = -1;
    }
    *(f32 *)&this->unk_90 = (f32) *(s32 *)&this->m_88;
    if (*(f32 *)&this->unk_90 < (-127.0f)) {
        *(f32 *)&this->unk_90 = (f32) (-127.0f);
    }
    if (*(f32 *)&this->unk_90 > (127.0f)) {
        *(f32 *)&this->unk_90 = (f32) (127.0f);
    }
    return var_r31;
}
#pragma pop

void copy_pair__18TObjEnvSoundGlobalFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void TObjEnvSoundGlobal::render() {  }

void TObjEnvSoundGlobal::run_task() {
    Obj_801903B4 *self = (Obj_801903B4 *)this;
    switch (self->mode) {
    case 0:
        break;
    case 1:
        play_persistent_sound((s32)self->sound, (s32)self, (u32)self->pos, 0, 0);
        break;
    case 2:
        play_persistent_sound((s32)self->sound, (s32)self, (u32)(0), (s32)self->param, 2);
        break;
    }
}

void *__dt__18TObjEnvSoundGlobalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjEnvSoundGlobal;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal_size[sizeof(RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal) == 0x34 ? 1 : -1];
u8 *TObjEnvSoundGlobal__ct(u8 *arg0, s32 parent, s32 arg2) {
    construct_world_actor_base((void *)arg0, (void *)parent);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80190484___vt__18TObjEnvSoundGlobal *)&__vt__18TObjEnvSoundGlobal).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEnvSoundGlobal__class_name;
    ((TObjEnvSoundGlobal *)(arg0))->apply_object_set_data((void *)arg2);
    ((TObjEnvSoundGlobal *)arg0)->setup_sound();
    return arg0;
}

void * TObjEnvSoundEx__create(void *rader_map_core) {
    void *o;
    if (is_not_split_screen__13TRaderMapCoreFv(rader_map_core) == 1) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xA8);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjEnvSoundEx__ct)(o, tl_05, rader_map_core);
    }
    return o;
}

f32 fabs_float(f32);
void disallow_rendering__7TObjectFv(TObject *arg0);
extern s32 __vt__14TObjEnvSoundEx[];
extern s32 TObjEnvSoundEx__class_name;
void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1);
struct RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx {
    s32 value;
    u8 remaining[0x30];
};

s32 TObjEnvSoundEx::init_sound_params() {
    u8 *arg0 = (u8 *)this;
    s32 var_r31;
    u32 temp_r4;
    var_r31 = 1;
    temp_r4 = *(s32 *)((s8 *)&environment_sound_tables_by_area.value + (TOKeyMachine01::get_global_state() * 4));
    if (temp_r4 != 0U) {
        ((s32 (*)(void *, int))copy_pair__18TObjEnvSoundGlobalFPvPv)(arg0 + 0x9C, (int) (temp_r4 + (this->m_84 * 8)));
    } else {
        var_r31 = 0;
        this->m_9c = -1;
        this->m_a0 = -1;
    }
    this->m_98 = fabs_float(this->target_scale);
    *(f32 *)&this->unk_A4 = (f32) *(f32 *)&this->m_70;
    if (*(f32 *)&this->unk_A4 <= lbl_805DBE18) {
        *(f32 *)&this->unk_A4 = (f32) lbl_805DBE1C;
    }
    this->m_90 = (s32) this->m_88;
    if ((s32) this->m_90 < -0x7F) {
        this->m_90 = -0x7F;
    }
    if ((s32) this->m_90 > 0x7F) {
        this->m_90 = 0x7F;
    }
    return var_r31;
}

void TObjEnvSoundEx::render() {  }

#define F(o) (*(f32 *)(self + (o)))
#define S(o) (*(s32 *)(self + (o)))

#undef F
#undef S

void run_task__14TObjEnvSoundExFv(Env_80190624 *o) {
    if (xz_distance_squared(camera_ctrl_instance + 0x178, o->pos) < o->range * o->range) {
        o->vol += o->step;
        if (o->vol > (f32)o->f90) {
            o->vol = (f32)o->f90;
        }
        switch (o->mode) {
        case 0:
            break;
        case 1:
            play_persistent_sound((s32)o->f9C, (s32)o, (u32)((f32 *)o->pos), 0, 0);
            break;
        case 2:
            play_persistent_sound((s32)o->f9C, (s32)o, (u32)((f32 *)(0)), (s32)((s32)o->vol), 2);
            break;
        }
    } else {
        o->vol -= o->step;
        if (o->vol < -127.0f) {
            o->vol = -127.0f;
        }
        if (o->vol > (-127.0f)) {
            switch (o->mode) {
            case 0:
                break;
            case 1:
                play_persistent_sound((s32)o->f9C, (s32)o, (u32)((f32 *)o->pos), 0, 0);
                break;
            case 2:
                play_persistent_sound((s32)o->f9C, (s32)o, (u32)((f32 *)(0)), (s32)((s32)o->vol), 2);
                break;
            }
        }
    }
}

void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjEnvSoundEx;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx_size[sizeof(RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx) == 0x34 ? 1 : -1];
u8 *TObjEnvSoundEx__ct(u8 *env_sound_ex, s32 arg1, s32 arg2) {
    ((s32 (*)(void *))construct_world_actor_base)(env_sound_ex);
    *(s32 **)((s8 *)env_sound_ex + 0x18) = &(*(RecoveredGlobal_8019080C___vt__14TObjEnvSoundEx *)&__vt__14TObjEnvSoundEx).value;
    *(s32 *)((s8 *)env_sound_ex + 0) = (s32) TObjEnvSoundEx__class_name;
    ((TObjEnvSoundEx *)(env_sound_ex))->apply_object_set_data((void *)arg2);
    ((TObjEnvSoundEx *)env_sound_ex)->init_sound_params();
    *(f32 *)((s8 *)env_sound_ex + 0x94) = (f32) (-127.0f);
    disallow_rendering__7TObjectFv((TObject *)(env_sound_ex));
    return env_sound_ex;
}

}
