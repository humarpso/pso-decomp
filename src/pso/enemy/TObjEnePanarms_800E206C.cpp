#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    s32 f18;
};

struct Obj_800E20D0 { u8 pad[0x3EC]; VObj_14_aa9368 fades[2]; };

struct Vec_800E2200 { f32 x, y, z; };
struct Tgt_800E2200 { u8 pad[0x38]; f32 x; f32 y; f32 z; };
struct Panarms_800E2200 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad44[0xC0 - 0x44];
    f32 fC0;
    u8 padc4[0x2FC - 0xC4];
    Vec_800E2200 pos;
    u8 pad308[0x378 - 0x308];
    s32 state;
    u8 *f37C;
    u8 pad380[4];
    s32 f384;
    s32 f388;
    Vec_800E2200 f38C;
    u8 pad398[0x3A0 - 0x398];
    Tgt_800E2200 *target;
    u8 pad3a4[0x3C8 - 0x3A4];
    Vec_800E2200 diff;
    s32 angle;
    f32 dist;
    u8 pad3dc[0x45C - 0x3DC];
    s32 counter;
    void dummy();
};
typedef void (Panarms_800E2200::*Fn_800E2200)();
struct Ent_800E2200 { u8 pad[0xC]; Fn_800E2200 fn; };

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 updateFromCamera__15RenderFadeStateFPCf(int, void *);
M2C_UNK TObjPlayer__sub_800D7BB0(int, int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK update_linked_effect__14TObjEnePanarmsFPv(void *);
void draw__14TObjEnePanarmsFPv(void* p);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TObjEnePanarms__data_805DA524;
extern const f32 TObjEnePanarms__data_805DA560;
extern const f32 lbl_805DA594;
void TObjEnePanarms__sub_800E20D0(u8 *arg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 check_demo_mode__10TObjPlayerFv(void);
void TObjEnePanarms__sub_800E1B78(void *, void *, s32, f32);
void TObjEnePanarms__sub_800E1C98(void *, s32);
void update_prev_position__10TObjPlayerFPv(void *);
void advance_animation_playback(void *);
void submit_cursor_candidate(void *, s32);
void minimap_render_dot(void *, s32, s32, s32);
void TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 TObjEnePanarms__data_8043CDD0[];
extern Ent_800E2200 lbl_8049575C[];
extern const f32 lbl_805DA598;
extern const f32 lbl_805DA59C;

}

extern "C" {

void draw__14TObjEnePanarmsFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int draw__16TObjEneRe7BeruraFPv(void*);
int clear_render_callback__8TObjFishFv(void*);
int TObjFish__sub_800E3074(void*);
int rotate_matrix_y(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int pop_matrix(void);
int set_global_param__8TObjFishFi(void*);

void draw__14TObjEnePanarmsFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x3dc)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x3dc)); pop_matrix(); }
void TObjEnePanarms__sub_800E20D0(u8 *arg0) {
    s32 temp_r4;
    s32 var_r31;
    VObj_14_aa9368 *temp_r31;
    s32 var_r30;
    if ((((VObj_18_26a62c *)(arg0))->m8(TObjEnePanarms__data_805DA560, lbl_805DA594) == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEnePanarms__data_805DA524;
        return;
    }
    var_r31 = 0;
    if (is_split_screen() != 0) {
        var_r31 = get_camera_mode__11TCameraCtrlFv();
    }
    toggle_particle_effect__10TObjPlayerFv();
    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x01000000 | 1;
    temp_r31 = &((Obj_800E20D0 *) arg0)->fades[var_r31];
    TObjPlayer__sub_800D7BB0((int) (temp_r31), (int) (temp_r4));
    if (updateFromCamera__15RenderFadeStateFPCf((int) (temp_r31), (void *) (arg0 + 0x2FC)) != 0) {
        temp_r31->m6();
        var_r30 = 1;
        if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
            var_r30 = 0;
        }
        if (var_r30 != 0) {
            draw__14TObjEnePanarmsFPv((void*)((void *) (arg0)));
        }
        temp_r31->m7();
    } else {
        draw__14TObjEnePanarmsFPv((void*)((void *) (arg0)));
    }
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    update_linked_effect__14TObjEnePanarmsFPv((void *) (arg0));
}

void TObjEnePanarms__sub_800E2200(Panarms_800E2200 *self) {
    Fn_800E2200 fn;
    Vec_800E2200 a;
    f32 s;

    if (self->state != 0 && check_demo_mode__10TObjPlayerFv() != 0) {
        TObjEnePanarms__sub_800E1C98(self, 0);
    }
    self->diff.x = self->target->x - self->x;
    self->diff.y = TObjEnePanarms__data_805DA524;
    self->diff.z = self->target->z - self->z;
    self->angle = TObjEnePanarms__data_8043CDD0[0] * get_ad_end_text_start__10TObjPlayerFv(self->diff.x, self->diff.z);
    self->dist = TBoss6Kakusan__sub_803D8BD8(&self->diff);
    self->counter++;
    fn = lbl_8049575C[self->state].fn;
    if (fn == 0) {
        return;
    }
    (self->*fn)();
    if (self->f384 != 0) {
        self->flags &= ~0x02000000;
    } else {
        self->flags |= 0x02000000;
    }
    update_prev_position__10TObjPlayerFPv(self);
    if (self->state == 0) {
        return;
    }
    if (self->f384 != 0) {
        if (self->state != 7) {
            submit_cursor_candidate(self, -1);
        }
        advance_animation_playback(self);
        switch (self->state) {
        case 7:
            break;
        case 1:
            s = self->fC0 / lbl_805DA598;
            TObjEnePanarms__sub_800E1B78(self, &a, 0, self->fC0);
            TBoss6Type1__sub_803D9370(&a, &self->pos);
            a.x *= s;
            a.z *= s;
            TBoss4Zako__sub_803D8910(&a, &self->pos);
            minimap_render_dot(&a, -0x5DB4, 1, 0);
            break;
        case 5:
            {
            s = self->fC0 / lbl_805DA59C;
            Vec_800E2200 b = self->pos;
            TBoss6Type1__sub_803D9370(&b, &self->f38C);
            b.x *= s;
            b.z *= s;
            TBoss4Zako__sub_803D8910(&b, &self->f38C);
            minimap_render_dot(&b, -0x5DB4, 1, 0);
            }
            break;
        default:
            minimap_render_dot(&self->pos, -0x5DB4, 1, 0);
            break;
        }
    }
    if (self->f388 == 0) {
        *(u32 *)(self->f37C + 0x18) &= ~1;
    }
}

}
