#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
void release_split_slimes__12TObjEneSlimeFPv(Obj_800EB910 *self);
void TObjEneSlime__sub_800EB9F0(void* p, void* q);
void spawn_slime_in_slot(void *, s32, s32, s32);
extern const Slot_800EB984 lbl_8043D218;
void init_slots__12TObjEneSlimeFPv(Obj_800EB984 *self);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK get_bml_model(void *, int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK set_cull_none__8TObjFishFv();
M2C_UNK set_cull_mode_front__8TObjFishFv();
M2C_UNK set_cull_back__8TObjFishFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();
void debug_printf_at(s32 id, const char *fmt, ...);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *, void *);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK draw_chunk_object();
M2C_UNK func_803e11e8__FUl(int);
M2C_UNK func_803e11f0__Fv();
extern char lbl_8043D298[];
extern M2C_UNK slime_debug_label_table[];
extern M2C_UNK lbl_80496368[];
extern s32 slime_bml_resource;
extern u32 some_id_805c6f74;
void render__12TObjEneSlimeFv(u8 *arg0);
}

extern "C" {

void TObjEneSlime__sub_800EB9F0(void* p, void* q);
void TObjEneSlime__vt61(void* p);
void run_task__12TObjEneSlimeFv(void *arg0);
M2C_UNK exchange_object_state__6TLobbyFPvis(void *, s32 *, M2C_UNK);
M2C_UNK TLobby__sub_800F6510(void *, s32 *);
s32 check_demo_mode__10TObjPlayerFv();
s32 has_no_active_slot(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);

void release_split_slimes__12TObjEneSlimeFPv(Obj_800EB910 *self) {
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

void render__12TObjEneSlimeFv(u8 *arg0) {
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r31;
    temp_r31 = toggle_flag_9_if_flag_10_is_clear__7TObjectFv();
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        temp_r30 = (M2C_FIELD(arg0, s32 *, 0x36C) * 4) & 4;
        debug_printf_at((int) (0x130020), lbl_8043D298, (int) (M2C_FIELD(((u8 *)(slime_debug_label_table) + temp_r30), s32 *, 0)));
        toggle_particle_effect__10TObjPlayerFv();
        push_matrix();
        temp_r30_2 = M2C_FIELD(((u8 *)(lbl_80496368) + temp_r30), s32 *, 0);
        post_translate_matrix((void *) ((u8 *)(arg0) + 0x38), (void *) (lbl_80496368));
        TObjFish__sub_8001EDB0((void *) (slime_bml_resource), (int) (temp_r30_2));
        set_global_param__8TObjFishFi();
        if (temp_r31 != 0) {
            some_id_805c6f74 |= 0x400000;
            func_803e11e8__FUl((int) (1));
            get_bml_model((void *) (slime_bml_resource), (int) (temp_r30_2));
            draw_chunk_object();
            func_803e11f0__Fv();
            some_id_805c6f74 &= 0xFFBFFFFF;
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
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__12TObjEneSlimeFv(void *arg0) {
    s32 sp8;

    if ((check_demo_mode__10TObjPlayerFv() == 0) && (has_no_active_slot(arg0) != 0)) {
        sp8 = 0x800;
        TLobby__sub_800F6510(arg0, &sp8);
        exchange_object_state__6TLobbyFPvis(arg0, &sp8, 0);
        ((VObj_800EBB18_800EB9F0 *)arg0)->m77(&sp8);
        send_entity_set_flags__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void TObjEneSlime__vt61(void* p) { release_split_slimes__12TObjEneSlimeFPv((Obj_800EB910 *)(p)); }

}
