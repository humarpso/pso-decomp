#include "types.h"

#include "pso/enemy/TObjEnemy.h"
extern "C" {
void* construct_actor_base__10TObjPlayerFPvPv(TObjEnemy*,void*);
extern s32 __vt__9TObjEnemy[];
extern void* TObjEnemy_class_name;
extern const f32 lbl_805DA8E0;
}

extern "C" {

void *__dt__9TObjEnemyFv(void *arg0, s16 arg1);
s32 apply_by_index__9TObjEnemyFs(s16 arg0);
int apply_player_54a00__9TObjEnemyFPv(void* p);
void clear_shadow_flag__10TObjPlayerFPv(void* p);
void set_shadow_flag__10TObjPlayerFPv(void* p);
int unregister_object_by_id(void*);
s32 __dl__7TObjectFPv(void *);
s32 copy_header__6TLobbyFPvPv(s32);
s32 destroy_motion_object__10TObjPlayerFPvs(void *, s32);
s32 mask_sub_flags__9TObjEnemyFPvi(void *, s32);

extern s32 __vt__9TObjEnemy[];

void *__dt__9TObjEnemyFv(void *arg0, s16 arg1) {
    u16 temp_r0;

    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TObjEnemy;
        apply_player_54a00__9TObjEnemyFPv((void*)(arg0));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            temp_r0 = *(u16 *)((s8 *)arg0 + 0x1C);
            if ((temp_r0 >= 0x1000U) && (temp_r0 < 0x4000U)) {
                mask_sub_flags__9TObjEnemyFPvi(arg0, -3);
                *(u32 *)((s8 *)arg0 + 0x80) = 0U;
            }
        }
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
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
    self->dispatch=((u32 *)&__vt__9TObjEnemy);
    self->typeName=TObjEnemy_class_name;
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
s32 apply_by_index__9TObjEnemyFs(s16 arg0) {
    if (arg0 > 0xB4F) {
        return 0;
    }
    copy_header__6TLobbyFPvPv(TLobby__data_805D6144 + (arg0 * 0xC));
    return 1;
}

int apply_player_54a00__9TObjEnemyFPv(void* p) { return unregister_object_by_id(p); }
void clear_shadow_flag__10TObjPlayerFPv(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffbff; }
void set_shadow_flag__10TObjPlayerFPv(void* p) { *(u16*)((char*)p + 0x4) |= 0x400; }

}
