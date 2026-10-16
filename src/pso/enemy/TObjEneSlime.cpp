#include "types.h"
#include "pso/enemy/TObjEneSlime.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_800EBB18_800EB9F0 { char pad[0x18]; };
struct VObj_800EBB18_800EB9F0 : Base_800EBB18_800EB9F0 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m77(s32 *);
};

struct Slot_800EB910 { s32 state; void *obj; };

struct Obj_800EB910 { u8 pad[0x3b8]; Slot_800EB910 slots[4]; };

struct Slot_800EB984 { s32 state; void *obj; };

struct Obj_800EB984 { u8 pad[0x3b8]; Slot_800EB984 slots[4]; };

extern "C" {
void TObjEneSlimeOne__sub_800EC470(void* p);
void TObjEneSlime__sub_800EB9F0(void* p, void* q);
void spawn_slime_in_slot(void *, s32, s32, s32);
extern const Slot_800EB984 lbl_8043D218;
void init_slots__12TObjEneSlimeFPv(Obj_800EB984 *self);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 set_cull_none__8TObjFishFv();
s32 set_cull_mode_front__8TObjFishFv();
s32 set_cull_back__8TObjFishFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();
void debug_printf_at(s32 id, const char *fmt, ...);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *, void *);
s32 set_global_param__8TObjFishFl();
s32 draw_chunk_object();
s32 func_803e11e8__FUl(int);
s32 func_803e11f0__Fv();
extern char lbl_8043D298[];
extern s32 slime_debug_label_table[];
extern s32 lbl_80496368[];
extern s32 slime_bml_resource;
extern u32 model_render_flags;
}

extern "C" {

void TObjEneSlime__sub_800EB9F0(void* p, void* q);
void vfunc_63__12TObjEneSlimeFv(void* p);
s32 exchange_object_state__6TLobbyFls(void *, s32 *, s32);
s32 send_6x0A_enemy_state(void *, s32 *);
s32 has_no_active_slot(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);

void TObjEneSlime::release_split_slimes() {
    Obj_800EB910 *self = (Obj_800EB910 *)this;
    s32 i;
    for (i = 0; i < 4; i++) {
        Slot_800EB910 *s = &self->slots[i];
        if (s->state == 1) {
            if (s->obj != 0) {
                TObjEneSlimeOne__sub_800EC470(s->obj);
                s->obj = 0;
            }
            s->state = 2;
        }
    }
}

void init_slots__12TObjEneSlimeFPv(Obj_800EB984 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TObjEneSlime__sub_800EB9F0(&self->slots[i], (void *)&lbl_8043D218);
    }
    spawn_slime_in_slot(self, 0, 0, 0);
}

void TObjEneSlime__sub_800EB9F0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

void TObjEneSlime::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r31;
    temp_r31 = toggle_flag_9_if_flag_10_is_clear__7TObjectFv();
    if (TObjPlayer::check_demo_mode() != 0) {
        temp_r30 = (*(s32 *)&this->state36C * 4) & 4;
        debug_printf_at((int) (0x130020), lbl_8043D298, (int) (*(s32 *)((s8 *)((u8 *)(slime_debug_label_table) + temp_r30) + 0)));
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        temp_r30_2 = *(s32 *)((s8 *)((u8 *)(lbl_80496368) + temp_r30) + 0);
        post_translate_matrix((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80496368));
        TObjFish__sub_8001EDB0((void *) (slime_bml_resource), (int) (temp_r30_2));
        set_global_param__8TObjFishFl();
        if (temp_r31 != 0) {
            model_render_flags |= 0x400000;
            func_803e11e8__FUl((int) (1));
            get_bml_model((void *) (slime_bml_resource), (int) (temp_r30_2));
            draw_chunk_object();
            func_803e11f0__Fv();
            model_render_flags &= 0xFFBFFFFF;
        } else {
            func_803e11e8__FUl((int) (2));
            set_cull_back__8TObjFishFv();
            get_bml_model((void *) (slime_bml_resource), (int) (temp_r30_2));
            draw_chunk_object();
            set_cull_mode_front__8TObjFishFv();
            get_bml_model((void *) (slime_bml_resource), (int) (temp_r30_2));
            draw_chunk_object();
            set_cull_none__8TObjFishFv();
            func_803e11f0__Fv();
        }
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}

void TObjEneSlime::run_task() {
    s32 sp8;

    if ((TObjPlayer::check_demo_mode() == 0) && (has_no_active_slot(this) != 0)) {
        sp8 = 0x800;
        send_6x0A_enemy_state(this, &sp8);
        exchange_object_state__6TLobbyFls(this, &sp8, 0);
        ((VObj_800EBB18_800EB9F0 *)this)->m77(&sp8);
        send_entity_set_flags__6TLobbyFPv(this);
        queue_destruction__7TObjectFv(this);
    }
}

void TObjEneSlime::vfunc_63() { ((TObjEneSlime *)this)->release_split_slimes(); }

}
