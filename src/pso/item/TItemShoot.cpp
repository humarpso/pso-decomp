#include "pso/TItemShoot.h"

extern "C" void  disallow_rendering__7TObjectFv(TObject*);
extern "C" void  allow_rendering__7TObjectFv(TObject*);
extern "C" void  queue_destruction__7TObjectFv(TObject*);
extern "C" u32   query_game_join_id__10TObjPlayerFv(void*);
extern "C" void  vec3_add_to(Vec*, Vec*);
extern "C" void  copy_position__15TEffStarLight2DFPv(void*, Vec*);

extern "C" Vec*  VecCopy__FP3VecPC3Vec(Vec*, const Vec*);
extern "C" void  subtract_vector(Vec*, const Vec*);
extern "C" f32   vector_length(Vec*);
extern "C" void  normalize_vector(Vec*);
extern "C" f64   get_ad_end_text_start__10TObjPlayerFv(f32, f32);
extern "C" void  direction_to_rotation_xz(Vec*, s32*, s32*);
extern "C" void* get_field_d8__10TObjPlayerFPv(void*);
extern "C" TObject*    tl_05;
extern "C" const char* TItemShoot__class_name;
extern "C" const f64   lbl_8043E7A0[];

extern "C" {
void __dt__19TItemShootModelRotZFv();
void render__19TItemShootModelRotZFv();
void hook__19TItemShootModelRotZFv();
void __dt__13TItemShootGunFv();
void render__13TItemShootGunFv();
void hook__13TItemShootGunFv();
void __dt__18TItemShootParticleFv();
void TItemShootParticle__vt4();
void __dt__15TItemShootModelFv();
void render__15TItemShootModelFv();
void run_task__10TItemShootFv();
void hook__10TItemShootFv();
void render__7TObjectFv();
void render_shadows__7TObjectFv();

void *__vt__19TItemShootModelRotZ[7] = {
    0, 0, (void *)__dt__19TItemShootModelRotZFv, (void *)run_task__10TItemShootFv,
    (void *)render__19TItemShootModelRotZFv, (void *)render_shadows__7TObjectFv,
    (void *)hook__19TItemShootModelRotZFv,
};
void *__vt__13TItemShootGun[7] = {
    0, 0, (void *)__dt__13TItemShootGunFv, (void *)run_task__10TItemShootFv,
    (void *)render__13TItemShootGunFv, (void *)render_shadows__7TObjectFv,
    (void *)hook__13TItemShootGunFv,
};
void *__vt__18TItemShootParticle[7] = {
    0, 0, (void *)__dt__18TItemShootParticleFv, (void *)run_task__10TItemShootFv,
    (void *)render__7TObjectFv, (void *)render_shadows__7TObjectFv,
    (void *)TItemShootParticle__vt4,
};
void *__vt__15TItemShootModel[7] = {
    0, 0, (void *)__dt__15TItemShootModelFv, (void *)run_task__10TItemShootFv,
    (void *)render__15TItemShootModelFv, (void *)render_shadows__7TObjectFv,
    (void *)hook__10TItemShootFv,
};
}

TItemShoot::TItemShoot(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TObject(tl_05) {
    this->m_name = TItemShoot__class_name;
    VecCopy__FP3VecPC3Vec(&this->m_pos, pos);
    VecCopy__FP3VecPC3Vec(&this->m_dir, VecCopy__FP3VecPC3Vec(&this->m_44, dir));
    this->m_life = life;
    subtract_vector(&this->m_dir, pos);
    f32 len = vector_length(&this->m_dir);
    normalize_vector(&this->m_dir);
    f32 scale = len / life;
    this->m_dir.x *= scale;
    this->m_dir.y *= scale;
    this->m_dir.z *= scale;
    this->m_count = (s32)(lbl_8043E7A0[0] * get_ad_end_text_start__10TObjPlayerFv(this->m_dir.x, this->m_dir.z));
    direction_to_rotation_xz(&this->m_dir, &this->m_28, &this->m_30);
    this->m_50 = NULL;
    this->m_54 = get_field_d8__10TObjPlayerFPv(owner);
    disallow_rendering__7TObjectFv(this);
}

extern "C" const f32 lbl_805DAC68;
extern "C" const f32 lbl_805DAC60;
#define kLifeDecay lbl_805DAC68
#define kLifeFloor lbl_805DAC60

void TItemShoot::run_task() {
    if (query_game_join_id__10TObjPlayerFv(this->m_54) == 0) {
        disallow_rendering__7TObjectFv(this);
        queue_destruction__7TObjectFv(this);
    }
    allow_rendering__7TObjectFv(this);
    vec3_add_to(&this->m_pos, &this->m_dir);
    if (this->m_50 != nullptr) {
        copy_position__15TEffStarLight2DFPv(this->m_50, &this->m_pos);
    }
    this->hook();
    this->m_life -= kLifeDecay;
    if (this->m_life <= kLifeFloor) {
        queue_destruction__7TObjectFv(this);
    }
}

TItemShoot::~TItemShoot() {
    if (this->m_50 != nullptr) {
        queue_destruction__7TObjectFv(this->m_50);
    }
}
