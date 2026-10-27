#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/misc/TCameraCtrl_800687BC.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/system/vector.h"

struct Obj_800C7DF8 { u8 pad0[0x326]; s16 state; };

extern "C" {
void TObjEnemyCustom__sub_800C77A4(u8 *arg0);
s32 advance_animation_playback(void *);
void apply_actor_gravity(TObjEnemy *arg0, s32 *arg1, f32 farg0);
s32 TObjVoloptCage__sub_800C76F0(void *);
int update_if_active__15TObjEneMe1GiGueFl(void*, int);
extern f32 lbl_805DA070;
extern const char *TObjEnemyCustom_class_name;
extern s32 enemy_custom_camera_active_flag;
}

void TObjEnemyCustom::update_camera_if_active() {
    if ((s32) enemy_custom_camera_active_flag != 0) {
        restore_player_cameras();
    }
}

TObjEnemyCustom::TObjEnemyCustom(TObject *parent) : TObjEnemy(parent) {
    m_name = TObjEnemyCustom_class_name;
    next_action = 0;
    m_378 = 0;
    state = 0;
    m_380 = 0;
    resetTimer = 0xF;
    timer = resetTimer;
    m_388 = 0;
}

TObjEnemyCustom::~TObjEnemyCustom() {
}

void TObjEnemyCustom::run_task() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::check_demo_mode() == 1) {
        TObjVoloptCage__sub_800C76F0(arg0);
        return;
    }
    if ((s16) this->mode != (s32) this->next_action) {
        if ((s32) this->state != -1) {
            this->state = -1;
            ((TObjEnemyCustom *)arg0)->dispatch_state();
        }
        this->mode = (s16) this->next_action;
        this->state = 0;
    }
    ((TObjEnemyCustom *)arg0)->dispatch_state();
    if ((s32) this->state == -1) {
        this->state = -1;
        ((TObjEnemyCustom *)arg0)->dispatch_state();
        this->mode = (s16) this->next_action;
        this->state = 0;
    }
    ((TObjEnemy *)arg0)->update_prev_position();
    VecCopy((Vec *)&this->m_74, (const Vec *)&this->m_2fc);
}

void TObjEnemyCustom::dispatch_state() {
    Obj_800C7DF8 *arg0 = (Obj_800C7DF8 *)this;
    switch (this->mode) {
    case 0: update_state(); return;
    case 1: ((TObjEnemyCustom *)arg0)->update_wander_state(); return;
    case 2: ((TObjEnemyCustom *)arg0)->update(); return;
    case 3: ((TObjEnemyCustom *)arg0)->update_state_machine(); return;
    case 4: ((TObjEnemyCustom *)arg0)->update_knockback_state(); return;
    case 5: TObjEnemyCustom__sub_800C77A4((u8 *)arg0); return;
    case 6: break;
    }
}

void TObjEnemyCustom::vfunc_28() {  }

void TObjEnemyCustom::vfunc_58() { update_if_active__15TObjEneMe1GiGueFl(this, 0); }

void TObjEnemyCustom::update_state() {

    switch (this->state) {
    case 0:
        this->m_b8 = 0;
        this->state = 1;
    case 1:
        advance_animation_playback(this);
        if (!(this->actorFlags & 0x800000)) {
            apply_actor_gravity((TObjEnemy *)this, (s32 *)(0), lbl_805DA070);
        }
        break;
    case -1:
        this->actorFlags = (s32) (this->actorFlags & 0xFFFBFFFF);
        break;
    }
}

void TObjEnemyCustom::vfunc_59() { update_if_active__15TObjEneMe1GiGueFl(this, 1); }
