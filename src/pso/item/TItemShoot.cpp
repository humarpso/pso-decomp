#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemShoot.h"

extern "C" void  disallow_rendering__7TObjectFv(TObject*);
extern "C" void  allow_rendering__7TObjectFv(TObject*);
extern "C" void  queue_destruction__7TObjectFv(TObject*);
extern "C" u32   query_game_join_id__10TObjPlayerFv(void*);
extern "C" void  TBoss4Zako__sub_803D8910(Vec*, Vec*);
extern "C" void  copy_position__15TEffStarLight2DFPv(void*, Vec*);

extern "C" Vec*  VecCopy__FP3VecPC3Vec(Vec*, const Vec*);
extern "C" void  TBoss6Type1__sub_803D9370(Vec*, const Vec*);
extern "C" f32   TBoss6Kakusan__sub_803D8BD8(Vec*);
extern "C" void  TNpcPlayer__sub_803D97B4(Vec*);
extern "C" f64   get_ad_end_text_start__10TObjPlayerFv(f32, f32);
extern "C" void  TBoss1Dragon__sub_8014220C(Vec*, s32*, s32*);
extern "C" void* get_field_d8__10TObjPlayerFPv(void*);
extern "C" TObject*    tl_05;
extern "C" const char* lbl_805D2C60;
extern "C" const f64   lbl_8043E7A0[];

TItemShoot::TItemShoot(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TObject(tl_05) {
    this->m_name = lbl_805D2C60;
    VecCopy__FP3VecPC3Vec(&this->m_pos, pos);
    VecCopy__FP3VecPC3Vec(&this->m_dir, VecCopy__FP3VecPC3Vec(&this->m_44, dir));
    this->m_life = life;
    TBoss6Type1__sub_803D9370(&this->m_dir, pos);
    f32 len = TBoss6Kakusan__sub_803D8BD8(&this->m_dir);
    TNpcPlayer__sub_803D97B4(&this->m_dir);
    f32 scale = len / life;
    this->m_dir.x *= scale;
    this->m_dir.y *= scale;
    this->m_dir.z *= scale;
    this->m_count = (s32)(lbl_8043E7A0[0] * get_ad_end_text_start__10TObjPlayerFv(this->m_dir.x, this->m_dir.z));
    TBoss1Dragon__sub_8014220C(&this->m_dir, &this->m_28, &this->m_30);
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
    TBoss4Zako__sub_803D8910(&this->m_pos, &this->m_dir);
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

#else
#if PSO_CLASS_PACKAGE == 0x8011BD88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 spawn_shoot_particle__10TItemShootFv(void);
M2C_UNK TItemShootParticle__sub_8011B704(s32, M2C_UNK, M2C_UNK);
s32 spawn_shoot_particle__10TObjPlayerFUiiif();

s32 spawn_shoot_particle__10TItemShootFv(void) {
    s32 temp_r3;

    temp_r3 = spawn_shoot_particle__10TObjPlayerFUiiif();
    if (temp_r3 != 0) {
        TItemShootParticle__sub_8011B704(temp_r3, 0x12, 0);
    }
    return temp_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011BDC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 spawn_shoot_particle_attached__10TItemShootFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TItemShootParticle__sub_8011B704(u32, M2C_UNK, M2C_UNK);
u32 TObjPlayer__sub_8011BA54();
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(s32, s32, s32, f32);

u32 spawn_shoot_particle_attached__10TItemShootFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 temp_r31;
    u32 temp_r30;

    temp_r31 = TObjPlayer__sub_8011BA54();
    temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        TItemShootParticle__sub_8011B704(temp_r30, 0x1BD, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011BF94
#include "types.h"

extern "C" {

void TItemShoot__sub_8011BF94(void* p, s32 v);

void TItemShoot__sub_8011BF94(void* p, s32 v) { *(s32*)((char*)p + 0x70) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011BFA0
#include "types.h"

extern "C" {

void TItemShoot__sub_8011BFA0(void* p, s16 v);

void TItemShoot__sub_8011BFA0(void* p, s16 v) { *(s16*)((char*)p + 0x60) = v; }

}
#endif
#endif
