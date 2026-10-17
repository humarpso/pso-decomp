#include "types.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/object/TObjMotion.h"

#include "pso/enemy/TObjEnemy.h"
#include "pso/player/TObjPlayer.h"
extern "C" {
void* construct_actor_base__10TObjPlayerFPvPv(TObjEnemy*,void*);
extern s32 __vt__9TObjEnemy[];
extern void* TObjEnemy_class_name;
extern const f32 lbl_805DA8E0;
void *__dt__9TObjEnemyFv(void *arg0, s16 arg1);
int unregister_object_by_id__13TUnk_804AF8A0Fv(void*);
s32 __dl__7TObjectFPv(void *);
s32 copy_header__6TLobbyFPv(s32);

void *__dt__9TObjEnemyFv(void *arg0, s16 arg1) {
    u16 temp_r0;

    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TObjEnemy;
        ((TObjEnemy *)arg0)->apply_player_54a00();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            temp_r0 = *(u16 *)((s8 *)arg0 + 0x1C);
            if ((temp_r0 >= 0x1000U) && (temp_r0 < 0x4000U)) {
                ((TObjEnemy *)arg0)->mask_sub_flags(-3);
                *(u32 *)((s8 *)arg0 + 0x80) = 0U;
            }
        }
        ((TUnk_804806E8 *)arg0)->destroy_motion_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TLobby__data_805D6144;

}

TObjEnemy* TObjEnemy::initialize(void* parent) {
    TObjEnemy* self=this;
    construct_actor_base__10TObjPlayerFPvPv(self,parent);
    *(void **)((u8 *)self + 0x18) = (void *)(((u32 *)&__vt__9TObjEnemy));
    self->m_name=(const char *)TObjEnemy_class_name;
    self->targetId=0xFFFF;
    self->variant=0;
    self->state36C=0;
    self->control=0;
    self->subtype=0;
    self->group=0;
    self->previous=0;
    self->next=0;
    self->children=0;
    self->movementParameters=0;
    self->resetTimer=0;
    self->timer=0;
    self->referenceHp=self->hp;
    for(int i=0;i<5;++i)self->parameters[i]=lbl_805DA8E0;
    self->actorFlags|=0x20000000;
    self->animationFlags|=1;
    return self;
}

extern "C" {
s32 TObjEnemy::apply_by_index(s16 arg0) {
    if (arg0 > 0xB4F) {
        return 0;
    }
    copy_header__6TLobbyFPv(TLobby__data_805D6144 + (arg0 * 0xC));
    return 1;
}

int TObjEnemy::apply_player_54a00() { return unregister_object_by_id__13TUnk_804AF8A0Fv(this); }
void TUnk_804AF8A0::clear_shadow_flag() { this->m_flags &= 0xfffffbff; }
void TUnk_804AF8A0::set_shadow_flag() { this->m_flags |= 0x400; }

}
