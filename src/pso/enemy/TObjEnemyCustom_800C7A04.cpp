#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/player/TObjPlayer.h"

struct ObjPad18_800c7ae4 { u8 pad[0x18]; };
struct Obj2A8_800c7ae4 : ObjPad18_800c7ae4 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual s32 v18(void *a, f32 f);
    virtual void v19();
    virtual s32 v20(void *a, f32 f);
    virtual void v21();
    virtual void v22();
    virtual s32 v23(void *a, f32 f);
};

struct Vec_800C7C30 { s32 x, y, z; };

extern "C" {
s32 apply_actor_gravity(void *, s32, f32);
f32 update_enemy_wander_move(void *, void *, int, int, f32);
s32 advance_animation_playback(void *);
s32 update_collisions__10TObjPlayerFv(void *);
extern const f32 lbl_805DA070;
}

extern "C" {

s32 advance_animation_playback(void *);
int update_if_active__15TObjEneMe1GiGueFl(void*, int);
s32 apply_actor_gravity(void *, s32, f32);
s32 enemy_turn_toward_dest(void *, s32);
s32 update_collisions__10TObjPlayerFv(void *);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805DA070;

void TObjEnemyCustom::update_state_machine() {
    s16 temp_r4;
    s32 temp_r0;

    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case 0:
        this->m_b8 = 0;
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFF9FFFFF);
        *(s32 *)&this->state = 1;
    case 1:
        advance_animation_playback(this);
        if (!(*(s32 *)&this->actorFlags & 0x800000)) {
            apply_actor_gravity(this, 0, lbl_805DA070);
        }
        update_collisions__10TObjPlayerFv(this);
        temp_r4 = *(s16 *)&this->timer;
        *(s16 *)&this->timer = (s16) (temp_r4 - 1);
        if (temp_r4 < 0) {
            *(s32 *)&this->state = -1;
        }
        break;
    case -1:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFFFFEFF);
        *(s16 *)&this->timer = (s16) *(s16 *)&this->resetTimer;
        this->referenceHp = (s16) this->hp;
        *(s32 *)&this->next_action = 1;
        break;
    }
}

void TObjEnemyCustom::vfunc_61() {  }

extern const f32 lbl_805DA068;
extern const f32 lbl_805DA074;
extern const f32 lbl_805DA090;

void TObjEnemyCustom::update() {
    s32 temp_r0;
    Obj2A8_800c7ae4 *temp_r3;
    Obj2A8_800c7ae4 *temp_r3_2;
    Obj2A8_800c7ae4 *temp_r3_3;

    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case 0:
        this->m_b8 = 2;
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags | 0x200000);
        *(s32 *)&this->state = 1;
    case 1:
        enemy_turn_toward_dest(this, *(s32 *)((s8 *)(*(void * *)&this->movementParameters) + 8));
        advance_animation_playback(this);
        if (objInBand__FP7GameObjf(this, lbl_805DA068) != 0) {
            temp_r3 = *(Obj2A8_800c7ae4 * *)&this->target;
            if (temp_r3->v18(this, lbl_805DA074) != 0) {
                temp_r3_2 = *(Obj2A8_800c7ae4 * *)&this->target;
                temp_r3_2->v20(this, lbl_805DA074);
                temp_r3_3 = *(Obj2A8_800c7ae4 * *)&this->target;
                temp_r3_3->v23(this, lbl_805DA090);
            }
        }
        update_collisions__10TObjPlayerFv(this);
        if ((u32) *(u32 *)&this->m_b4 != 4U) {
            *(s32 *)&this->state = -1;
        }
        return;
    case -1:
        *(s32 *)&this->next_action = 1;
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFDFFFFF);
        break;
    }
}

void TObjEnemyCustom::vfunc_60() { update_if_active__15TObjEneMe1GiGueFl(this, 2); }
void TObjEnemyCustom::update_wander_state() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    s32 temp_r0;
    u8 *temp_r3;
    u8 *temp_r6;
    u8 *temp_r7;
    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        this->m_b8 = 1;
        *(s32 *)&this->state = 1;
    case 1:
        advance_animation_playback((void *) (arg0));
        temp_r7 = (unsigned char *) (*(void * *)&this->target);
        if (temp_r7 != NULL) {
            Vec_800C7C30 v = *(Vec_800C7C30 *)(temp_r7 + 0x2FC);
            temp_r6 = (unsigned char *) (*(void * *)&this->movementParameters);
            temp_f1 = update_enemy_wander_move((void *) (arg0), (void *) (&v), (int) (1), (int) (temp_r6), (f32) (*(f32 *)((s8 *)temp_r6 + 4)));
            temp_r3 = (unsigned char *) (*(void * *)&this->movementParameters);
            if ((*(f32 *)((s8 *)temp_r3 + 0) < temp_f1) || (temp_f1 < *(f32 *)((s8 *)temp_r3 + 4))) {
                *(void * *)&this->target = NULL;
            }
            ((TObjPlayer *)arg0)->update_angle((s32)((void *) (*(s32 *)((s8 *)(*(void * *)&this->movementParameters) + 8))), (void *)(arg0 + 0x308));
        }
        apply_actor_gravity((void *)((void *) (arg0)), (s32)((int) (0)), (f32) (lbl_805DA070));
        update_collisions__10TObjPlayerFv((void *) (arg0));
        return;
    }
}

}
