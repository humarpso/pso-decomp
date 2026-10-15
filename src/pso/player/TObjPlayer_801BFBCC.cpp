#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_801BFBEC_lbl_804C3E38 {
    s32 value;
    u8 remaining[0x8];
};

struct O_801BFC90 { u16 a; u16 b; s32 c; };

extern "C" {
s32 reset_type__10TObjPlayerFv(void *);
extern RecoveredGlobal_801BFBEC_lbl_804C3E38 lbl_804C3E38;
void TObjPlayer__sub_801BFC90(O_801BFC90 *p);
void clear_id__10TObjPlayerFv(void *);
void set_speed__10TObjPlayerFf(void *, f32);
extern const f32 lbl_805DC2DC;
int init_player_scale_state(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801BFD3C(void* p);
int zero_vec3(void*);
int init_forward__10TObjPlayerFv(void*);
int init_pair__10TObjPlayerFPv(void*);
int reset_counter_field4__10TObjPlayerFv(void*);
int reset_stat_scale_and_ring__10TObjPlayerFi(void*);
int set_vec4_const__10TObjPlayerFv(void*);

extern const f32 TObjPlayer__data_805DC278;

void TObjPlayer::reset_scale_vector() {
    *(f32 *)((s8 *)this + 0x10) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)this + 0xC) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)this + 8) = (f32) TObjPlayer__data_805DC278;
    *(s32 *)((s8 *)this + 4) = 0;
    *(s32 *)((s8 *)this + 0) = 0;
}

typedef char RecoveredGlobal_801BFBEC_lbl_804C3E38_size[sizeof(RecoveredGlobal_801BFBEC_lbl_804C3E38) == 0xC ? 1 : -1];
u8 *TObjPlayer::construct_hurt_timer() {
    u8 *arg0 = (u8 *)this;
    *(s32 **)((s8 *)arg0 + 4) = &lbl_804C3E38.value;
    reset_type__10TObjPlayerFv((void *) (arg0));
    return arg0;
}

void*TObjPlayer::reset_and_clear() { init_forward__10TObjPlayerFv(this); reset_counter_field4__10TObjPlayerFv(this); return this; }
void*TObjPlayer::wrap_update() { TObjPlayer__sub_801BFC90((O_801BFC90 *)((void*)(this))); return this; }

void TObjPlayer__sub_801BFC90(O_801BFC90 *p) {
    p->c = 0;
    p->a = 0xFFFF;
    p->b = 0;
}

void*TObjPlayer::set_vec4_const_wrapper() { set_vec4_const__10TObjPlayerFv(this); return this; }
void*TObjPlayer::init_members() { zero_vec3(this); return this; }
void*TObjPlayer::init_wrapper() { TObjPlayer__sub_801BFD3C((void*)(this)); return this; }
void TObjPlayer__sub_801BFD3C(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x8) = 0; }
void*TObjPlayer::init_sub() { init_forward__10TObjPlayerFv((char*)this + 0xc); reset_stat_scale_and_ring__10TObjPlayerFi(this); return this; }
void*TObjPlayer::init_subobjects() { init_forward__10TObjPlayerFv((char*)this + 0x4); init_pair__10TObjPlayerFPv((char*)this + 0x18); init_player_scale_state((void *)(this)); return this; }
int init_player_scale_state(void *arg0) {
    *(u16 *)arg0 = 0xFFFF;
    clear_id__10TObjPlayerFv((u8 *)arg0 + 4);
    set_speed__10TObjPlayerFf(arg0, lbl_805DC2DC);
}

}
